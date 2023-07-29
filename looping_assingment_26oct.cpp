// 26-oct-2022

//(1) Write a program to calculate the factorial of a number.

/*
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number whoes you want to find factorial"<<endl;
    cin>>n;

    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }

    cout<<"The factorial of given number is "<<fact<<endl;

    return 0;
}

*/

// (2) Write a program to print all Armstrong numbers between 100 to 500;

// (3) Write a program to find the sum of n natural number.

/*

#include <iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the number"<<endl;
    cin>>n;

    int sum = 0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"The sum of n natural no. is "<<sum<<endl;

    return 0;
}

*/

//(4) Write a program to print reverse a given ainteger number.

/*

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    while(n!=0){
        int digit = n%10;
        cout<<digit;
        n /=10;
    }
}

*/

// (5) Write a program to print the cross patern given below (in the shape of X.)

/*

#include <iostream>
using namespace std;

int main() {
    int n = 7;
    for(int i =0 ;i<=n;i++){
        for(int j =0;j<n;j++){
            if(i==j || i+j==n-1){
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}


*/


// (6) Write a program to print alphabet diamand pattern;

/*

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the odd integer: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j =1;j<=n;j++){
            if(i ==(n+1)/2){
            cout<<"*";
            }
            else if (j==(n+1)/2){
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

// (7)  Write a program to print + pattern given below;

#include <iostream>
using namespace std;

int main () {
    int size;
    cout<<"Enter your size";
    cin>>size;

    int arr[size];

    for(int i=0; i<5; i++){
        cin>>arr[i];
    }

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

// (8) Write a program to print a traingle of prime number upto given number of lines of the traiangle:

// (9) Write a c++ programe to check whether a Number can be expressed as a sum of two Prime Number:

// (10) Write a C++ program to print a rectangle out of:

