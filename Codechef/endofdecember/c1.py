'''
"Every beginning has an end… and an editorial." - taran_1407

What the hell are all these interactive problems? What does flushing output mean? So many questions… Chef explains it in an easy way: you must communicate with a grader program, which accepts your input only if you flushed the output.

There is a contest with interactive problems where N
people participate. Each contestant has a known rating. Chef wants to know which contestants will not forget to flush the output in interactive problems. Fortunately, he knows that contestants with rating at least r never forget to flush their output and contestants with rating smaller than r

always forget to do it. Help Chef!
Input

    The first line of the input contains two space-separated integers N

and r
.
Each of the following N
lines contains a single integer R

    denoting the rating of one contestant.

Output

For each contestant, print a single line containing the string "Good boi" if this contestant does not forget to flush the output or "Bad boi" otherwise.
Constraints

    1≤N≤1,000

1,300≤r,R≤1,501

Subtasks

Subtask #1 (100 points): original constraints
Example Input

2 1500
1499
1501

Example Output

Bad boi
Good boi

Author: 6★mgch

Date Added: 23-11-2018

Time Limit: 0.5 secs

Source Limit: 50000 Bytes

Languages: C, CPP14, JAVA, PYTH, PYTH 3.6, PYPY, CS2, PAS fpc, PAS gpc, RUBY, PHP, GO, NODEJS, HASK, rust, SCALA, swift, D, PERL, FORT, WSPC, ADA, CAML, ICK, BF, ASM, CLPS, PRLG, ICON, SCM qobi, PIKE, ST, NICE, LUA, BASH, NEM, LISP sbcl, LISP clisp, SCM guile, JS, ERL, TCL, kotlin, PERL6, TEXT, SCM chicken, PYP3, CLOJ, COB, FS
'''


a=list(map(int, input (). split ()))
z=[None] * a[0]
for i in range(0,a[0]):
        z[i]=int(input())

for i in range(0,a[0]):
        if a[1] < z[i]: print("Good boi")
        else : print("Bad boi")
