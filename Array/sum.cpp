#include<iostream>
using namespace std;
int main(){
int array[]= {3,6,5,9,4};
int size= sizeof (array)/sizeof (array[0]);
int sum = 0;
for(int i=0;i<size; i++){
    sum = sum+ array[i];

}
cout<<sum<<endl;
return 0;
}