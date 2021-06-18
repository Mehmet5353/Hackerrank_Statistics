#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    float Numerator,Denominator,result=1; int First;   
    cin>>Numerator>>Denominator>>First;
    for(int i=0;i<int(First)-1;i++){
        result*=(1-Numerator/Denominator);
    }
    result*=Numerator/Denominator;
    printf("%.3f \n",result);
      
    return 0;
}

