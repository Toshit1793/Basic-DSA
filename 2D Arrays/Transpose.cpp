#include<iostream>
using namespace std;
int main(){

int r;
int c;
cin>>c>>r;
int A[r][c];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
       cin>> A[i][j];
    }
}

int transp[c][r];
for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
       transp[i][j]=A[j][i];
    }
}
for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
       cout<<transp[i][j]<<" ";
    }cout<<endl;
}


    return 0;
}