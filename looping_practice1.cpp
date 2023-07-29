 // L-7;
/*
# include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;

    for(int i= 1;i<=n;i++){
        for(int j=1;j<=2*n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    return 0;
}

*/


/*
#include <iostream>
using namespace std;

int main(){

    int n ,m;
    cout<<"Enter the number of row"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j =1;j<=2*n;j++){
            if(i==1 ||j==1 ||i==n|| j==2*n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }        
        }
        cout<<endl;
    }

    return 0;
}
*/


/*

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of row";
    cin>>n;

    for(int i = n;i>0;i--){
        for(int j =1;j<=i;j++){
            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}

*/


/*

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of row";
    cin>>n;

    for(int i = 1;i<=n;i++){
        for(int spc=1;spc<=(n-i);spc++){
            cout<<" ";
        }
        for(int j =1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;

}

*/

/*

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of row";
    cin>>n;

    for(int i = 1;i<=n;i++){
        for(int j =i;j<=n;j++){
            cout<<j;
        }
        for(int j =1;j<=i-1;j++){
            cout<<j;
        }
        cout<<endl;

    }
    return 0;

}

*/

/*

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of row";
    cin>>n;

    for(int i = 1;i<=n;i++){
        for(int j =1;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;

}

*/

/*

#include <iostream>
using namespace std;

int main(){

    int n ,m;
    cout<<"Enter the number of row"<<endl;
    cin>>n;

    cout<<"Enter the number of column"<<endl;
    cin>>m;

    for(int i=1;i<=n;i++){
        for(int j =1;j<=m;j++){
            if(i==1 ||j==1 ||i==n|| j==m){
                cout<<j;
            }
            else{
                cout<<" ";
            }        
        }
        cout<<endl;
    }

    return 0;
}

*/

/*

#include <iostream>
using namespace std;

int main(){
    int n,m;
    
    cout<<"Enter the value of rows";
    cin>>n;
    
    cout<<"Enter the value of column";
    cin>>m;
    
    for(int i=1;i<=n;i++){
        for(int j = 1; j<=m;j++){
            if(j%2==0){
                cout<<"2";
            }
            else{
                cout<<"1";
            }
        }
        
        cout<<endl;
    }
    return 0;
}

*/

/*

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the rows";
    cin>>n;

    for(int i =1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}

*/

/*

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the rows";
    cin>>n;

    for(int i =1;i<=n;i++){
        for(int spc=1;spc<=n-i;spc++){
            cout<<" ";
        }
        for(int j = 1;j<=i;j++){
            cout<<j;
        }
        for(int j = i-1;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}

*/

// #include <iostream>
// using namespace std;

// int main(){
//     int n,m;
//     n = 4;
//     m=6;
    
//     for(int i =1 ;i<=n;i++){
//         for(int spc =1;spc<=n-i;spc++){
//             cout<<" ";
//         }
//         for(int j =1;j<=i;j++){
//             if(j==1||i==1||i==n||j==m){
//                 cout<<i;
//             }
//         }
//         for(int spc =1;spc<=n-i;spc++){
//             cout<<" ";
//         }
        
//         for(int j =1;j<i;j++){
//             if(j==1||i==1||i==n||j==m){
//                 cout<<i;
//             }
//         }
        
//         cout<<endl;
//     }
//     return 0;
// }

jhhj