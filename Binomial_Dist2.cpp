#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int factorial(int num){
    int result=1;
    int i=1;
    while(i<=num){
        result=result*i;
        i=i+1;
    } 
    return result ;   
} 

int main() {
    int N,M;
    cin>>N>>M;
    float prob=float(N)/100;    
    float result;
    float result2;
    for(int i=0;i<3;i++){
        result+=factorial(M)/(factorial(i)*factorial(M-i))*pow(prob,i)*pow(1-prob,M-i);
    }
    for(int i=2;i<M+1;i++){
        result2+=factorial(M)/(factorial(i)*factorial(M-i))*pow(prob,i)*pow(1-prob,M-i);
    }
    printf("%.3f \n",result);
    printf("%.3f \n",result2);
    
    
       
    return 0;
}

