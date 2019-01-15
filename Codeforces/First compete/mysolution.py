# Factorizing process 

def factorizing(t):
    while t > 1:
        for i in range(2, int(t + 1)):
            if t % i == 0:
                t /= i
                yield i
                break

# I have divided odd and even number in dice value and took input value. I checked input value for even or odd number. if it's value odd , you have add odd value and find which want value. other side makes him same process. But it's doesn't work. 
            
if __name__ == '__main__':
    at=[3,5,7]
    ac=[2,4,6]
    hitcounter=int(input())
    p=[None] * hitcounter
    counter = 0
    t=0
    for i in range(0,hitcounter):
        z= list(map(int, input (). split ()))
        for i in range(0,len(ac)): 
            if z[0]%2 == 0:
                while z[0] != p:
                    p += ac[i]
                    counter += 1
            else:
                while z[0] != t:
                    t += at[i]
                    counter += 1
            print(counter)

# This part factorizing process but it didn't work. i want to all input value have to a value

    
    #     p[i] = list(map(int,factorizing(z[0])))
    # print("main list",p)
    # # print(len(p))
    # for t in range(0,len(p)):
    #     print(t)
    #     for o in p[t]:
    #         o = a[] + a[]
    # # for i in range(0,hitcounter):
    # #     print(i) 
    #         #print(p," ",k," ",g)    
    # counter = 0
    # for i in range(0,len(a)):
    #     while t == inputvalue:
    #         t+=a[i]
    #         counter += 1
    # print(counter)
