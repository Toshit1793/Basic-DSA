#include<iostream>
using namespace std;

void f(int *arr,int idx,int n){
    if(idx==n) return;

    cout<<arr[idx]<<" ";
    f( arr,idx+1,n);
}
int main(){
    int n=7;
    int arr[]={6,3,8,4,1,0,9};
    f(arr,0,n);
    return 0;
}