import collections

if __name__ == '__main__':
    tel = collections.OrderedDict()
    telsa=[]
    telsas=[]
    i=0
    n=int(input())
    for _ in range(n):
        name = input()
        score = float(input())
        tel[name]=score
    #telsas=sorted(list(tel.keys()))
    #for year in tel:
    #    telsa.append(tel[year])
    #telsa=sorted(telsa)
    for k,v in tel.items():
        telsa.append(v)
        telsas.append(k)
    #print("%s  %s"% key , mydict[key])
    #for i in range(0,len(telsa)-1):
    for o in range(0,len(telsa)):
        for p in range(len(telsa),0):
            if o == p:
                print(o)
        
        #if telsa[i] == telsa[i+1]:
        #    print(telsas[i])
        #    print(telsas[i+1])
    #print(telsas)
    #print(telsa[0])
