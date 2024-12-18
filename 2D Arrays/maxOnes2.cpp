#include<iostream>
#include<vector>
using namespace std;

int maxnumberOnesRows(vector<vector<int>>& V) {
    int maxOnesCount = -1; 
    int rowWithMaxOnes = -1; 

    for (int i = 0; i < V.size(); i++) {
        int onesCount = 0; 
        for (int j = 0; j < V[i].size(); j++) {
            if (V[i][j] == 1) {
                onesCount++;
            }
        }

        
        if (onesCount > maxOnesCount) {
            maxOnesCount = onesCount;
            rowWithMaxOnes = i;
        }
    }

    return rowWithMaxOnes; 
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> vec(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> vec[i][j];
        }
    }

    int res = maxnumberOnesRows(vec);
    cout << res << endl;

    return 0;
}
