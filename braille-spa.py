#flag = "Hello World"
#print(flag)

spanish_dict = {
    1: "a",
    2: "b",
    3: "c",
    4: "d"
}

word = input()
character = list(word)


def converter(word):
    for letter in character:
        for key, value in spanish_dict.items():  
            if letter == value: 
                print ("key: %s , value: %s" % (key, value))
            else:
                print ("letter not found")

converter(word)

