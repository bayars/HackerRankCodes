if __name__ == '__main__':
    tel = {}
    telsa=[]
    n=int(input())
    for _ in range(n):
        name = input()
        score = float(input())
        tel[name]=score
    for year in tel:
        telsa.append(tel[year])
    for i in range(0,len(telsa)-1):
        if telsa[i] == telsa[i+1]:
            print(telsa[i])
     
