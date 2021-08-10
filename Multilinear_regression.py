from sklearn import linear_model

N=input().split()
m=int(N[0]) #number of independepent variable
n=int(N[1]) # number of dataset
X=[]
Y=[]
for _ in range(n):
    l=list(map(float,input().strip().split(' ')))
    X.append(l[0:len(l)-1])#Exluding last number for getting x values
    Y.append(l[len(l)-1])# Getting y values
lm = linear_model.LinearRegression()
lm.fit(X, Y) #fitting the function
a = lm.intercept_  #Constant value in the equation
b = lm.coef_  # Coefficients 
N1=int(input()) # Test Values
for _ in range(N1): # 
    l=list(map(float,input().strip().split(' '))) #Number of lists
    result=a   #Adding constant value to equation
    for i in range(len(l)):
        result+=l[i]*b[i]  #Adding other terms the result  
    print("%0.2f"%result) 
