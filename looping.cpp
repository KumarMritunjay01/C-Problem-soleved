#include<iostream>
using namespace std;

int main() {
    for(int i=1;i<=4;i++){
        for(int j =4-i;j>0;j--){
            cout<<" ";
        }

        for(int k=1;k<=i;k++){
            cout<<k;
        }
        cout<<endl;

        for(int k=1;k<i;k++){
            cout<<k;
        }
        cout<<endl;

    }
    return 0;
}
