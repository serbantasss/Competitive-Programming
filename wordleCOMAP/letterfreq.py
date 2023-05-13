import pandas as pd
import string
from wordfreq import word_frequency
from wordfreq import zipf_frequency

def findletterdistribuition(words):
    for letter in string.ascii_lowercase:
        outp[letter] = [0]*6

    for letter in string.ascii_lowercase:
        for pos in range(5):
            for word in words:
                try:
                    if word[pos] == letter:
                        outp[letter][pos] += 1
                except: IndexError
    for letter in string.ascii_lowercase:
        for pos in range(5):
            outp[letter][pos] = outp[letter][pos] / len(words)

var = pd.read_excel("data_set_C.xlsx", skiprows = 1)

lwords = list(var["Word"])
outp = dict()
list_possible_words = open("allowed_words.txt", "r")
data = list_possible_words.read()
list2 = data.split("\n")
list2.pop()
findletterdistribuition(lwords)


with open("LEN.txt", "w") as f:
    for word in lwords:
        f.write(str(len(word))+"\n")

def freqsum(word):
    return round(sum(outp[word[pos]][pos] if word[pos] in string.ascii_lowercase else 0 for pos in range(len(word))),5)

with open("freqsum.txt", "w") as f:
    for word in lwords:
        f.write(str(freqsum(word))+"\n")

def freqpos(word, pos):
    try:
        return round(outp[word[pos]][pos] if word[pos] in string.ascii_lowercase else 0, 5)
    except: IndexError

for i in range(1,6):
    with open(f"F{i}.txt", "w") as f:
        for word in lwords:
            f.write(str(freqpos(word, i-1)) + "\n")

def double_letter_score(word):
    res = 1.0
    for i in range(len(word)):
        for j in range(i + 1, len(word)):
            if word[i] == word[j]:
                res *= (2.0 - outp[word[i]][i]) * (2.0 - outp[word[j]][j])
    return round(res,5)

with open("DLET.txt", "w") as f:
    for word in lwords:
        f.write(str(double_letter_score(word))+"\n")

def triple_letter_score(word):
    res = 1.0
    for i in range(len(word)):
        for j in range(i + 1, len(word)):
            for k in range(j + 1, len(word)):
                if word[i] == word[j] and word[i] == word[k]:
                    res *= (2.0 - outp[word[i]][i]) * (2.0 - outp[word[j]][j]) * (
                                2.0 - outp[word[k]][k])
    return round(res,5)

with open("TLET.txt", "w") as f:
    for word in lwords:
        f.write(str(triple_letter_score(word))+"\n")

def freqlang(word):
    return round(zipf_frequency(word,"en")-1, 5)

with open("FreqLang.txt", "w") as f:
    for word in lwords:
        f.write(str(freqlang(word))+"\n")

def get_word_difficulty(word,W1,W2): # 0.9 0.3 BEST ACCuracy
    # Calculate the difficulty score of the word
    word_length = len(word)
    frequency_sum = sum(outp[word[pos]][pos] if word[pos] in string.ascii_lowercase else 0 for pos in range(word_length))

    double_letter_score = 0.0
    for i in range(word_length):
        for j in range(i+1,word_length):
            if word[i] == word[j]:
                double_letter_score += (2.0-outp[word[i]][i])*(2.0-outp[word[j]][j])
    triple_letter_score = 0.0
    for i in range(word_length):
        for j in range(i+1,word_length):
            for k in range(j+1,word_length):
                if word[i] == word[j] and word[i] == word[k]:
                    triple_letter_score += (2.0-outp[word[i]][i])*(2.0-outp[word[j]][j])*(2.0-outp[word[k]][k])
    difficulty_score = 1.0 / (word_length + triple_letter_score + double_letter_score)* frequency_sum
    return W1 * difficulty_score + W2 * (zipf_frequency(word,"en")-1)/7


word_scale_difficulty = dict()
with open("actualhardwords.txt","r") as f:
    list_hard_data = f.read().split("\n")
    list_hard_data.pop()
with open("word_difficulty1.txt", "w") as f:
    performance = []
    for w1 in range(0,20):
        for w2 in range(0,20):
            for word in list_hard_data:
                word_scale_difficulty[word] = get_word_difficulty(word, w1/10, w2/10)
            list_hard_data_sorted = sorted(list_hard_data, key=lambda x: word_scale_difficulty[x])

            avg = 0
            for i in range(len(list_hard_data)):
                #f.write(f"{list_hard_data[i]} has {i - list_hard_data_sorted.index(list_hard_data[i])} devation.\n")
                avg += abs(i - list_hard_data_sorted.index(list_hard_data[i]))
            #f.write(f"For w1 = {w1/10} and w2 = {w2/10}, avg = {avg/len(list_hard_data)}\n")
            if avg!= 0.0:
                performance.append((w1/10,w2/10, avg/len(list_hard_data)))
   #print (min(performance, key= lambda x: x[2]))
"""for word in list_hard_data:
    word_scale_difficulty[word] = get_word_difficulty(word)
list_hard_data_sorted = sorted(list_hard_data, key= lambda x: word_scale_difficulty[x])
with open("word_difficulty1.txt", "w") as f:
    for i in range(len(list_hard_data)):
        f.write(f"{list_hard_data[i]} has {i-list_hard_data_sorted.index(list_hard_data[i])} devation.\n")"""
