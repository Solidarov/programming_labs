import re


def frequent_used_words(text):
    pattern = r"(?:[^a-z']|(?<![a-z])'|'(?![a-z]))+"
    r = re.split(pattern, text.lower())
    count_words = {}
    for word in r:
        if word:
            count_words[word] = count_words.get(word, 0) + 1


    sorted_words = sorted(count_words.items(), key=lambda x: x[1], reverse=True)

    i = 0
    print("\n\nMost used words: ")

    while i < len(sorted_words) and i < 3:
        print(f"{sorted_words[i][0]}: {sorted_words[i][1]}")
        i += 1


if __name__ == "__main__":

    text1 = "In a village of La Mancha, the name of which I have no desire to call to "\
    "mind, there lived not long since one of those gentlemen that keep a lance"\
    "in the lance-rack, an old buckler, a lean hack, and a greyhound for"\
    "coursing. An olla of rather more beef than mutton, a salad on most"\
    "nights, scraps on Saturdays, lentils on Fridays, and a pigeon or so extra"\
    "on Sundays, made away with three-quarters of his income."

    text2 = "  //wont won't won't"

    text3 = "   '''   "

    frequent_used_words(text1)
    frequent_used_words(text2)
    frequent_used_words(text3)


