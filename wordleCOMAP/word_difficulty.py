import string
from wordfreq import zipf_frequency
import pandas as pd

#Compute past words difficulty level
var = pd.read_excel("Problem_C_Data_Wordle.xlsx", skiprows=1)
past_words = list(var["Word"])
past_word_diff = list(var["DifLevel"])
min_value = min(past_word_diff)
max_value = max(past_word_diff)
past_word_diff_norm = [(x - min_value) / (max_value - min_value) for x in past_word_diff]
past_solutions = zip(past_words[:100],past_word_diff_norm)

import math

# Define the weight parameters
W1 = 1.0  # Intrinsic difficulty weight
W2 = 0.8  # Lexical difficulty weight
W3 = 0.2  # Structural difficulty weight
W4 = 0.7  # Contextual difficulty weight

# Define the English letter frequency distribution (normalized)
LETTER_FREQ = [0.08167, 0.01492, 0.02782, 0.04253, 0.12702, 0.02228, 0.02015,
               0.06094, 0.06966, 0.00153, 0.00772, 0.04025, 0.02406, 0.06749,
               0.07507, 0.01929, 0.00095, 0.05987, 0.06327, 0.09056, 0.02758,
               0.00978, 0.0236, 0.0015, 0.01974, 0.00074]

def letter_freq(word):
    """Compute the frequency of each letter in the word."""
    freq = [0] * 26
    for letter in word:
        try:
            freq[ord(letter) - ord('a')] += 1
        except: IndexError
    return freq

def predict_letter_probabilities(past_solutions):
    """Predict the probability of guessing each letter correctly,
    given the past solutions and their difficulty levels."""
    # TODO: implement a predictor based on the past solutions
    # and their difficulty levels, using a method such as logistic
    # regression or random forests. This predictor should return
    # a list of probabilities, one for each letter in the alphabet.
    # For now, we'll use a uniform distribution as a placeholder.
    return [1/26] * 26

def difficulty_score(word):
    """Compute the difficulty score of the word, given the past solutions
    and their difficulty levels, the English letter frequency distribution,
    and the weight parameters."""
    n = len(word)
    fi = [f * LETTER_FREQ[ord(letter) - ord('a')] for letter, f in zip(string.ascii_lowercase, letter_freq(word))]
    #print([f for f in letter_freq(word)])
    #print([LETTER_FREQ[ord(letter) - ord('a')] for letter in string.ascii_lowercase])
    ri = letter_freq(word)
    pj = predict_letter_probabilities(past_solutions)
    dk = [solution[1] for solution in past_solutions]
    mss = len(set(past_solutions)) + 1
    #intrinsic_difficulty = W1 * math.log(mss) / math.log(mss * (mss - 1))
    lexical_difficulty = W2 * sum([f * math.log(f) if f>0 else 0.0 for f in fi])
    structural_difficulty = W3 * sum([(1 - pj[i]) * ri[i] for i in range(26)])
    return lexical_difficulty + structural_difficulty - 0.5*((zipf_frequency(word,"en"))/8-0.5)

for word in past_words:
    print(f"{word}: {difficulty_score(word)}")
word = "eerie"
print(f"{word}: {difficulty_score(word)}")
