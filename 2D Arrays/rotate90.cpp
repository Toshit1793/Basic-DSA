#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int rotate(vector<vector<int>>& vec, int n) {
   for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        swap(vec[i][j],vec[j][i]);
    }
   } 

   for(int i=0;i<n;i++){
    reverse(vec[i].begin(),vec[i].end());
   }
   return (vec,n);
 
}

int main() {
    int n ;
    cin >> n ;

    vector<vector<int>> vec(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> vec[i][j];
        }
    }

    rotate(vec,n);

    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cout<<vec[i][j]<<" ";
      }
      cout<<endl;
    }

    return 0;
}