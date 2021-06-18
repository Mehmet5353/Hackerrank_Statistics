#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N; vector<int> v ;int sum=0;float mean;float Var;
    cin>>N;
    for(int i=0;i<N;i++){
        int num;
        cin>>num;
        v.push_back(num);        
    } 
    for(int i=0;i<N;i++){
        sum=sum+v[i];        
    }
    mean=sum/N;
    for(int i=0;i<N;i++){
        Var=Var+pow((v[i]-mean),2) ;       
    }
    Var=Var/N;
    Var=sqrt(Var);  
    
    printf("%.1f \n",Var);
    
    
    return 0;
}

