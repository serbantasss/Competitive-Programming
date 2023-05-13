import pandas as pd
import string
var = pd.read_excel("Problem_C_Data_Wordle.xlsx", skiprows = 1)

words = list(var["Word"])
lfreq = dict()
for letter in string.ascii_lowercase:
    lfreq[letter] = 0
for word in words:
    for letter in word:
        try:
            lfreq[letter] += 1
        except: KeyError

with open("output.txt", "w") as f:
    for letter in string.ascii_lowercase:
        f.write(f"{letter}: {lfreq[letter]}\n")
        #print(" ".join(letter for letter in word))