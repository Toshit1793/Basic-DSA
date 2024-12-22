#include<iostream>
#include<vector>
using namespace std;

int rectangleSum(vector<vector<int>>& matrix,int r1,int l1,int r2,int l2){
int sum=0;
for(int i=r1;i<=r2;i++){
    for(int j=l1;j<=l2;j++){
        sum+=matrix[i][j];
    }
}
return sum;
}

int main(){

int r;
int c;
cin>>c>>r;
vector<vector<int>>matrix(r,vector<int>(c));
int A[r][c];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
       cin>> A[i][j];
    }
}
int r1,l1,r2,l2;
cin>>r1>>l1>>r2>>l2;

int add=rectangleSum(matrix,r1,l1,r2,l2);
cout<<add<<endl;

return 0;

}