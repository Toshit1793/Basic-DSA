#include<iostream>
using namespace std;
void reverse(int arr[],int i,int j){
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr,1,4);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}