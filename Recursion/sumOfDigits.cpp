#include<iostream>
using namespace std;

int sumOfDigits(int n){
    if (n<=9 && n>=0) return n;
    return n%10+ sumOfDigits(n/10);
}
int main(){
    int n;
    cin>>n;

    cout<<sumOfDigits(n);
    return 0;
}