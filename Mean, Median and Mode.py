from collections import Counter

N=int(input())
L=list(map(int, input().rstrip().split()))
L.sort()
A=list(set(L))
C=[]
mean=sum(L)/len(L)
if N%2==0:
    median=(L[int(N/2)]+L[int(N/2)-1])/2
else:
    median=L[int(N/2)] 
   
print(mean)
print(median)
print(Counter(L).most_common(1)[0][0])
