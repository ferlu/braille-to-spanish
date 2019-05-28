spanish_dict = {
    0: " ",
    1: "a",
    2: "b",
    3: "c",
    4: "d",
    5: "e",
    6: "f",
    7: "g",
    8: "h",
    9: "i",
    10: "j",
    11: "k",
    12: "l",
    13: "m",
    14: "n",
    15: "ñ",
    16: "o",
    17: "p",
    18: "q",
    19: "r",
    20: "s",
    21: "t",
    22: "u",
    23: "v",
    24: "w",
    24: "x",
    25: "y",
    26: "z"
    27: "0",
    28: "1",
    29: "2",
    30: "3",
    31: "4",
    32: "5",
    33: "6",
    34: "7",
    35: "8",
    36: "9" 
}
word = input()
character = list(word)
final_string = []
cont = 0


def converter(word):
    global cont
    for letter in character:
        for key, value in spanish_dict.items():
            if letter == value:
                print("key: %s , value: %s" % (key, value))
                if key > 26:
                    final_string.append("#")
                final_string.append(key)
                if cont == 4:
                    print("La traducción está limitada a 5 caracteres")
                    cont = 0
                    for x in final_string:
                        print(x)
                    return final_string
                    exit()
                else:
                    cont += 1
                    if key > 26:
                        cont += 1
                    
    cont = 0
    for x in final_string:
        print(x)


converter(word)
