#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    int brr[n];
    for(int i=0;i<n;i++){
        brr[i]= array[n-1-i];
    }
    for(int i=0;n<n;i++){
        cout<<brr[i]<<" ";
    }
    return 0;
}