#include<iostream>
using namespace std;
void f(int num,int k){
    if(k==0) return;
    f(num,k-1);
    cout<<num<<" "<<"x"<<" "<<k<<" "<<"="<<" "<<num*k<<endl;
    
}
    int main(){
        int num;
        cin>>num;
        
        int k=10;
        f(num,k);
        return 0;
    }
