#!/usr/bin/env python3.5


'''
Problem link = https://www.hackerrank.com/challenges/python-print/problem

Check Tutorial tab to know how to to solve.

Read an integer .

Without using any string methods, try to print the following:

Note that "" represents the values in between.

Input Format

The first line contains an integer .

Output Format

Output the answer as explained in the task.

Sample Input 0

3

Sample Output 0

123

'''

if __name__ == '__main__':
        n = int(input())
        for i in range(1,n+1,1):
            print(i,end="")
