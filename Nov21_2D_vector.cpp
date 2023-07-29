// Pascal Traingle:



#include <iostream>
using namespace std;

int main() {
    
    int c =0;
    
    for(int i=0; i<5; i++){
        for(int j=4; j>i; j--){
            cout<<" ";
        }
        
        for(int k =0; k<=i; k++){
            if(i==0 || k==0){
                c = 1; 
            }
            else{
                c = (c*(i-k+1))/k;
            }
            
            cout<<c<<" ";
        }
        
        
        cout<<endl;
    }
    
    return 0;
}



