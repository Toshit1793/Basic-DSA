#include<iostream>
using namespace std;
int main(){
    int array[]={3,9,7,10,6};
    int max= array[0];
    int size = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<size; i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    cout<<max<<endl;
    return 0;
}