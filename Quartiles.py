# Enter your code here. Read input from STDIN. Print output to STDOUT
N=int(input())
L=list(map(int,input().rstrip().split()))
L.sort()
if N%2!=0:
    a=int(N/2)
    b=int(a/2)
    medianlow=(L[b]+L[b-1])/2
    median=L[a]
    medianup=(L[a+b]+L[a+b+1])/2
else:
    a=int(N/2)
    b=int(a/2)
    if a%2==0:
        medianlow=(L[b]+L[b-1])/2
        median=int((L[a]+L[a-1])/2)
        medianup=(L[a+b]+L[a+b-1])/2
    else:
        medianlow=L[b]
        median=int((L[a]+L[a-1])/2)
        medianup=L[a+b]
print(int(medianlow))
print(median)
print(int(medianup))
