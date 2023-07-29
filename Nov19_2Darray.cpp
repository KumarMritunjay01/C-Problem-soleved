/*

#include <iostream>
using namespace std;

int main() {
    int row , col;

    cout<<"size of row and column : ";
    cin>>row>>col;

    int arr[row][col];

    for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
            cin>>arr[i][j];
        }
    }

   for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }

        cout<<endl;
    }

    return 0; 
}

*/

// Write a program to multiply two matrix:



#include <iostream>
using namespace std;

int main() {

    int r1,c1;

    cout<<"enter the row and column of 1st matrix: ";
    cin>>r1>>c1;

    int A[r1][c1];

    cout<<"Enter the element of 1st matrix: ";

    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cin>>A[i][j];
        }
    }

    int r2,c2;

    cout<<"enter the row and column of 2st matrix: ";
    cin>>r2>>c2;

    int B[r2][c2];

    cout<<"Enter the element of 2st matrix: ";

    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            cin>>B[i][j];
        }
    }

    int C[r1][c2];

    if(c1==r2){
        for(int i=0; i<r1; i++){
            for(int j =0; j<c2; j++){
                int value =0;
                for(int k=0; k<r2; k++){
                    value += A[i][k]*B[k][j];
                }

                C[i][j] = value;
            }
        }

        for(int i=0; i<r1; i++){
            for(int j =0; j<c2; j++){
                cout<<C[i][j]<<" ";
            }

            cout<<endl;
        }
    }

    else{
        cout<<"Multiplication is not posible: ";
    }




    return 0;

}





// Write a program to Display Transpose of Matrix enter by the user.

/*

#include <iostream>
using namespace std;

int main() {

    int r1,c1;

    cout<<"Enter the row and column no.: ";
    cin>>r1>>c1;

    int matrix[r1][c1];
    cout<<"Enter the matrix element: ";
    for(int i=0; i<r1; i++){
        for(int j =0; j<c1; j++){
            cin>>matrix[i][j];
        }
    }

    int transpose[c1][r1];

    for(int i=0; i<c1; i++){
        for(int j =0; j<r1; j++){
            transpose[i][j] = matrix[j][i];
        }
    }

    for(int i=0; i<c1; i++){
        for(int j=0; j<r1; j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

*/


// Write a program to add two matrix: 

/*

#include <iostream>
using namespace std;

int main() {

    int r1,c1;

    cout<<"enter the row and column of 1st matrix: ";
    cin>>r1>>c1;

    int A[r1][c1];

    cout<<"Enter the element of 1st matrix: ";

    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cin>>A[i][j];
        }
    }

    int r2,c2;

    cout<<"enter the row and column of 2st matrix: ";
    cin>>r2>>c2;

    int B[r2][c2];

    cout<<"Enter the element of 2st matrix: ";

    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            cin>>B[i][j];
        }
    }

    int r3,c3;
    int C[r1][c2];

    if(c1==c2 && r1 == r2){
        for(int i=0; i<r1; i++){
            for(int j =0; j<c2; j++){
                int value =0;
                    value += A[i][j]+B[i][j];


                C[i][j] = value;
            }
        }

        for(int i=0; i<r1; i++){
            for(int j =0; j<c2; j++){
                cout<<C[i][j]<<" ";
            }

            cout<<endl;
        }
    }

    else{
        cout<<"Addition is not posible: ";
    }

    return 0;

}

*/

// Matrix subtraction :


#include <iostream>
using namespace std;

int main() {

    int r1,c1;

    cout<<"enter the row and column of 1st matrix: ";
    cin>>r1>>c1;

    int A[r1][c1];

    cout<<"Enter the element of 1st matrix: ";

    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cin>>A[i][j];
        }
    }

    int r2,c2;

    cout<<"enter the row and column of 2st matrix: ";
    cin>>r2>>c2;

    int B[r2][c2];

    cout<<"Enter the element of 2st matrix: ";

    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            cin>>B[i][j];
        }
    }

    int r3,c3;
    int C[r1][c2];

    if(c1==c2 && r1 == r2){
        for(int i=0; i<r1; i++){
            for(int j =0; j<c2; j++){
                int value =0;
                    value += A[i][j]-B[i][j];
                

                C[i][j] = value;
            }
        }

        for(int i=0; i<r1; i++){
            for(int j =0; j<c2; j++){
                cout<<C[i][j]<<" ";
            }

            cout<<endl;
        }
    }

    else{
        cout<<"Sumtraction is not posible: ";
    }

    return 0;

}
