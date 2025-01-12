#include<iostream>
using namespace std;
int f(int p,int q){
    if(q==0) return 1;
    if(p%2==0){
        int result=f(p,q/2);
        return result*result;
    }else{
        int result=f(p,(q-1)/2);
        return q * result * result;
    }
    
}
int armstrom(int n, int d){
        if(n==0) return 0;
        return f(n%10,d)+ armstrom(n/10,d);
    }

int main(){
    int temp;
    cin>>temp;
    int n=temp;
    int e=0; 
    while(n>0){
        n=n/10;
        e++;
    }
    int result =armstrom(n,e);
    if(result ==n){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
   
}