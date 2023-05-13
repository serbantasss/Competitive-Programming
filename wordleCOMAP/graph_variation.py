import pandas as pd
import matplotlib as mpl
import matplotlib.pyplot as plt

mpl.use('TkAgg')  # !IMPORTANT

var = pd.read_excel("data_set_C.xlsx", skiprows = 1)

label = list(var['LABEL'])

reference_number = list(var['Contest number'])
#reference_number = [i-0 for i in reference_number]

testlen = len(reference_number)

reported_results = list(var['Number of  reported results'])
reported_results_hard = list(var['Number in hard mode'])

#first friday: [0]
#first monday: [3]

avarage_day = [0]*7
for monday in range(3,testlen,7):
    try:
        avarage_daily_reported_numbers = sum([reported_results[x] for x in range(monday,monday+7)]) // 7
        if reported_results[monday+2] - avarage_daily_reported_numbers >= 15000 and avarage_daily_reported_numbers - reported_results[monday+6]>=9000:
            print(f"{monday}:{monday+6}")
    except:
        pass

#ax.bar(reference_number[200:214], reported_results[200:214], color = "blue")
#ax.bar(reference_number[207:214], reported_results[207:214], color = "red")
"""
fig, ax = plt.subplots(2,2)
ax[0,0].bar(reference_number[2:10], reported_results[2:10], color = "blue")
ax[0,0].set_title("Week 01")
ax[1,0].bar(reference_number[72:80], reported_results[72:80], color = "red")
ax[1,0].set_title("Week 10")
ax[0,1].bar(reference_number[114:122], reported_results[114:122], color = "purple")
ax[0,1].set_title("Week 16")
ax[1,1].bar(reference_number[121:129], reported_results[121:129], color = "black")
ax[1,1].set_title("Week 17")
"""

"""fig, ax = plt.subplots()
ax.bar(reference_number, reported_results, color = "red")
#ax.bar(reference_number, [x*10 for x in reported_results_hard], color = "blue")
plt.xticks(reference_number)
"""


fig, ax = plt.subplots(2,2)
ax[0,0].bar(reference_number[6:9], reported_results[6:9], color = "cornflowerblue")
ax[0,0].set_title("After the hard word: ABBEY")
ax[1,0].bar(reference_number[31:34], reported_results[31:34], color = "darkslategrey")
ax[1,0].set_title("After the hard word: ELDER")
ax[0,1].bar(reference_number[90:93], reported_results[90:93], color = "darkcyan")
ax[0,1].set_title("After the hard word: FORAY")
ax[1,1].bar(reference_number[104:107], reported_results[104:107], color = "darkturquoise")
ax[1,1].set_title("After the hard word: OXIDE")

"""fig, ax = plt.subplots(2,2)
ax[0,0].bar(reference_number[24:30], reported_results[24:30], color = "blue")
#ax[0,0].set_title("After the hard word: ABBEY")
ax[1,0].bar(reference_number[52:58], reported_results[52:58], color = "red")
#ax[1,0].set_title("After the hard word: ELDER")
ax[0,1].bar(reference_number[66:72], reported_results[66:72], color = "purple")
#ax[0,1].set_title("After the hard word: FORAY")
ax[1,1].bar(reference_number[115:121], reported_results[115:121], color = "black")
#ax[1,1].set_title("After the hard word: OXIDE")
"""

plt.show()