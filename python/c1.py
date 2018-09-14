if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    ar = [] 
    p = 0 
    for k in range(x+1):
        for l in range(y+1):
            for m in range(z+1):
                if k+l+m != n:
                    ar.append([])
                    ar[p] = [ k , l , m ]                  
                    p+=1 
    print(ar) 
