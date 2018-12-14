'''
Problem link: https://www.hackerrank.com/contests/find-google/challenges/find-google/problem

The word google can be spelled in many different ways.

E.g. google, g00gle, g0oGle, g<>0gl3, googl3, GooGIe etc...

Because

g = G

o = O = 0 = () = [] = <>

l = L = I

e = E = 3

That's the problem here to solve.

Input Format

Exactly one word, e.g. "G00gL3"

Constraints

Here are all possible cases for the letters of the word "google":

    g = G
    o = 0 = O = () = [] = <>
    l = L = I
    e = E = 3

Output Format

Return "True" or "False".

Whether there is a match or not.

Sample Input 0

google

Sample Output 0

True

Sample Input 1

g()()GI3

Sample Output 1

True

'''

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
    if (strings.find('g') != -1 or strings.find('o') != -1 or strings.find('e') != -1 or strings.find('3') != -1  or strings.find('<>') != -1 or strings.find('[]') != -1  or strings.find('i') != -1 or strings.find('0') != -1) and (strings.find(' ') == -1) and (counterduplicate1(strings) == "ok" or counterduplicate2(strings) == "ok") and (len(strings)<=8 and len(strings) >= 6) and ( strings[-1] == '3' or strings[-1] == 'e') and (strings[-3] == 'g') and (strings[-4] == ">" or strings[-4] == ")" or strings[-4] == "]" or strings[-4] == "o" or strings[-4] == '0' ): return "True"
    else: return "False"


if __name__ == '__main__':
    strings = input()
    print(estimatedvalue(strings))
    # Create your code here
