if __name__ == '__main__':
    t=()
    n = int(input())
    integer_list = list(map(int, input().split()))
    t=integer_list
    t=tuple(t)
    print(hash(t))
