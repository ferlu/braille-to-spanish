# coding=utf-8
import re
import subprocess
import os
import glob
#Variables
final_string = []
cont = 0

ourFile = ""

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
    26: "z",
    27: "0",
    28: "1",
    29: "2",
    30: "3",
    31: "4",
    32: "5",
    33: "6",
    34: "7",
    35: "8",
    36: "9",
}


#Words converter
def converter(word):
    global cont
    for char in word:
        if (char == "á"):
            char = char.replace("á", "a")
        elif (char == "é"):
            char = char.replace("é", "e")
        elif (char == "í"):
            char = char.replace("í", "i")
        elif (char == "ó"):
            char = char.replace("ó", "o")
        elif (char == "ú"):
            char = char.replace("ú", "u")
        for key, value in spanish_dict.items():
            if char == value:
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


import re
import subprocess
import os
from glob import glob
from subprocess import check_output, CalledProcessError


def getPath():
    global usbNewDir
    usbNewDir = ""

    def get_usb_devices():
        sdb_devices = map(os.path.realpath, glob('/sys/block/sd*'))
        usb_devices = (dev for dev in sdb_devices
                       if 'usb' in dev.split('/')[5])
        return dict((os.path.basename(dev), dev) for dev in usb_devices)

    def get_mount_points(devices=None):
        devices = devices or get_usb_devices(
        )  # if devices are None: get_usb_devices
        output = check_output(['mount']).splitlines()
        is_usb = lambda path: any(dev in path for dev in devices)
        usb_info = (line for line in output if is_usb(line.split()[0]))
        return [(info.split()[0], info.split()[2]) for info in usb_info]

    if __name__ == '__main__':
        usb_dir = get_mount_points()
        print('Directorio de USB (si la hay):')
        print(
            usb_dir[0][1])  #Prints always 1st detected usb drive and its path.
        usbNewDir = usb_dir[0][1]
        #print(usbNewDir)
    return (usbNewDir)


usbPath = getPath()

os.chdir(usbPath)
for document in glob("*.txt"):
    if document:
        ourFile = document
        print(ourFile)
        break
    else:
        print("No hay archivos válidos")

readfile = open(ourFile, "r")
contents = readfile.read()
print(contents)

wordList = contents.split()
for word in wordList:
    for char in word:
        if (char == ","):
            word = word.replace(",", "")
        elif (char == "."):
            word = word.replace(".", "")
    converter(word + " ")
print(final_string)
