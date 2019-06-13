# coding=utf-8
from __future__ import print_function
import os
from pocketsphinx import LiveSpeech, get_model_path
import re
import subprocess
from glob import glob
from subprocess import check_output, CalledProcessError
test = open('text.docx', 'w')
f = open('text.txt', 'w')

print('Bienvenido al conversor de voz a texto para Python.')
model_path = get_model_path()
#print(model_path)
print('Cargando . . .')
speech = LiveSpeech(verbose=False,
                    sampling_rate=16000,
                    buffer_size=2048,
                    no_search=False,
                    full_utt=False,
                    hmm=os.path.join(model_path, 'es-es'),
                    lm=os.path.join(model_path, 'es-20k.lm.bin'),
                    dict=os.path.join(model_path, 'es.dict'))
print('Por favor di una frase o palabra.    ')
for phrase in speech:
    print(phrase)
    print(phrase, file=test)
    print(phrase, file=f)

#    phrase.decode()
#    print(phrase.hypothesis())
