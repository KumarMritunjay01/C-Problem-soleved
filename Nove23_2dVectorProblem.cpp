// Given a boolean 2D array, where each row is sorted.Find the row with the maximum nuber of 1s.
#include <iostream>
#include <vector>
using namespace std;

int maximumOnesRow(vector<vector<int> > &V1){

    int maxOnes = INT16_MIN;
    int maxOnesRow = -1;
    int columns = V1[0].size();

    for(int i=0 ;i<V1.size(); i++){
        for(int j=0; j<V1[i].size(); j++){
            if(V1[i][j]==1){
                int numberOfOnes = columns - j;
                if(numberOfOnes>maxOnes){
                    maxOnes = numberOfOnes;
                    maxOnesRow =i;
                }
            }
        }
    }

    return maxOnesRow ;
}

int main() {

    int m,n;
    cin>>m>>n;

    vector< vector <int> > V1(m,vector<int>(n));

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>V1[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<V1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    int res = maximumOnesRow(V1);
    cout<<res<<endl;

    return 0;
}