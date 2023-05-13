# This is a sample Python script.
import difflib
numbgreen = dict()
def group_green(num_similar, solution, word_list):
    ret = []
    ret.append(solution)
    for comp in word_list:
        num = 0
        for i in range(5):
            try:
                if solution[i] == comp[i]:
                    num = num + 1
            except: IndexError
        if num == num_similar:
            ret.append(comp)
    numbgreen[solution] = len(ret)
    return ret

# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    list_possible_words = open("possible_words.txt", "r")
    data = list_possible_words.read()
    list2 = data.split("\n")
    list2.pop()

    green4grouping = open("result_3green.txt", "w")
    for i in range(3,4):
        #print(f"Group by {i} greens:")
        for word in list2:
            #green4grouping.write(f"For the word {word} these words have {i} greens:")
            green4grouping.write(" ".join(group_green(i,word,list2))+"\n")
            #print(group_green(i,word,list2))

    green4grouping.close()

