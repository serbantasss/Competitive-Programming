import pandas as pd


var = pd.read_excel("data_set_C.xlsx", skiprows = 1)

list_words = list(var["Word"])

#print(list_words)
SQUARES = {
    'correct_place': 'G',
    'correct_letter': 'Y',
    'incorrect_letter': 'B'
}

def check_guess(guess, answer):
    score = 0.0
    wordle_pattern = []
    for i, letter in enumerate(guess):
        try:
            if answer[i] == guess[i]:
                wordle_pattern.append(SQUARES['correct_place'])
                score += 1.0
            elif letter in answer:
                wordle_pattern.append(SQUARES['correct_letter'])
                score += 0.5
            else:
                wordle_pattern.append(SQUARES['incorrect_letter'])
        except:
            pass
    return ''.join(wordle_pattern), score
with open("output.txt","w") as f:
    for word in list_words:
        f.write(str(check_guess("crane",word)[1]) + "\n")