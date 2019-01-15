#!/usr/bin/python3.5

if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    a=student_marks[query_name]
    p=0
    for i in a:
        p=i+p
    p=p/len(a)
    print("%.2f" % p)
