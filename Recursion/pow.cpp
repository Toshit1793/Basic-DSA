#include<iostream>
#include <math.h>
using namespace std;
int f(int b,int e){
    if(e==0) return 1;
    return b* f(b,e-1);
}
int main(){
    int base;
    int exponent;
    cin>>base>>exponent;
    cout<<f(base,exponent);
    return 0;
}