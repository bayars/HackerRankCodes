#!/bin/python3

import math
import os
import random
import re
import sys

def counterduplicate1(strings):
    chars = "g"
    for z in chars:
        count=strings.count(z)
        if count == 2: return "ok"
        else: return "-1"

def counterduplicate2(strings):
    chars = "o"
    for z in chars:
        count=strings.count(z)
        if count == 2: return "ok"
        else: return "-1"

    
def estimatedvalue(strings):
    strings=strings.lower()
    if (strings.find('g') != -1 or strings.find('o') != -1 or strings.find('e') != -1 or strings.find('3') != -1 or strings.find('<>') != -1 or strings.find('[]') != -1 or strings.find('3') != -1 or strings.find('i') != -1 or strings.find('0') != -1) and (strings.find(' ') == -1) and (counterduplicate1(strings) == "ok" or counterduplicate2(strings) == "ok"): return "True"
    else: return "False"


if __name__ == '__main__':
    strings = input()
    print(estimatedvalue(strings))
    # Create your code here
