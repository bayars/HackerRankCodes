#!/bin/python3

import math
import os
import random
import re
import sys

def estimatedvalue(strings):
    strings=strings.lower()
    # if strings == "google" or "g" == strings[0] or strings[6] == "e" or strings [1] == "(" or strings [1] == "<" or strings [1] == "[" or strings [2] == ")" or strings [2] == ")" or strings [2] == "]" or strings[-1] == 3 : return "True"
    # else: return "False"
    if (strings.find('g') != -1 or strings.find('o') != -1 or strings.find('e') != -1 or strings.find('3') != -1 or strings.find('<>') != -1 or strings.find('[]') != -1 or strings.find('3') != -1 or strings.find('i') != -1 or strings.find('0') != -1) and (strings.find(' ') == -1): return "True"
    else: return "False"


if __name__ == '__main__':
    strings = input()
    print(estimatedvalue(strings))
    # Create your code here
