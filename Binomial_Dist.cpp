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
    float N,M;
    cin>>N>>M;
    float a=N/(M+N);
    float b=1-a;
    float  comb;
    comb=factorial(6)/(factorial(3)*factorial(3));
    comb=comb*pow(a,3)*pow(b,3);
    float comb1=factorial(6)/(factorial(4)*factorial(2));
    comb1=comb1*pow(a,4)*pow(b,2);
    float comb2=factorial(6)/(factorial(5)*factorial(1));
    comb2=comb2*pow(a,5)*pow(b,1);
    float comb3=pow(a,6);
    float fin=comb1+comb2+comb3+comb;
    
    printf("%.3f \n",fin);
    
   
    return 0;
}

