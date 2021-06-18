import math
N=int(input())
L=list(map(int,input().rstrip().split()))
M=list(map(int,input().rstrip().split()))

total=0
for i in range(len(L)):
    total+=L[i]*M[i]
print("{0:.1f}".format(total/sum(M)))
