# Load libraries
import numpy
import pandas as pd
from sklearn.tree import DecisionTreeClassifier
from sklearn.model_selection import train_test_split
from sklearn import metrics
from sklearn.tree import export_text
from sklearn.tree import export_graphviz
col_names = ["F1","F2","F3","F4","F5","DifLevel", "FreqSum","FreqLang", "DLET", "TLET", "LEN", "LABEL"]
feature_cols = ["FreqSum","FreqLang", "DLET", "TLET", "LEN"]
var = pd.read_excel("data_set_C.xlsx", skiprows=1)
pd.eval()

#Data Collection
X_array = []
for i in range(len(var)):
    add = []
    for col in feature_cols:
        add.append(list(var[col])[i])
    X_array.append(add)
X_ndarray = numpy.array(X_array, dtype=numpy.float64)
y = list(var.LABEL)

# Split dataset into training and test 70-30
X_train, X_test, y_train, y_test = train_test_split(X_ndarray, y, test_size=0.3, random_state=1)

# Create DT
clf = DecisionTreeClassifier(criterion= "entropy", max_depth= 3)

# Train DT
clf = clf.fit(X_train,y_train)

#Predict for test dataset
y_pred = clf.predict(X_test)

# Model Accuracy, how often is the classifier correct?
print("Accuracy:",metrics.accuracy_score(y_test, y_pred))
r = export_text(clf, feature_names= feature_cols)
print(r)

# Prediction for EERIE
X_eerie = [[0.42897, 2.33, 6.37858, 6.81018, 5]]
y_pred_eerie = clf.predict(X_eerie)
print(y_pred_eerie)

#Graphical Visualization
import graphviz
dot_data = export_graphviz(clf, out_file= None , filled = True, rounded= True, special_characters= True,
                           feature_names= feature_cols, class_names= ['easy','hard'])
graph = graphviz.Source(dot_data)
graph.render()

