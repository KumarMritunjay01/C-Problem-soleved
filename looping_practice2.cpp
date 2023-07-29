// L-8   26-oct-2022

// COUNT THE NUMBER OF DIGITS FOR A GIVEN NUMBER N.

/*

# include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;

    int digits =0;
    while(n>0){
        
        digits++;
        n = n/10;
    }

    cout<<digits;

    return 0;
}

*/

// Find the sum of digits in a given number n;

/*

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;

    int sum =0;
    while(n>0){
        int j = n%10;
        sum = sum+j;

        n = n/10;
    }
    cout<<sum;

    return 0;
}

*/

// REVERSE THE DIGITS OF A NUMBER;

/*

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;

    while(n>0){
        int digits = n%10;
        n =n/10;
        cout<<digits;
    }
    
    return 0;
}

*/

// Find the sum of the following series .
// s = 1-2+3-4+5-6....n;

/*

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the last digit";
    cin>>n;

    int sum = 0;

    for(int i = 1;i<=n;i++){
        if(i%2==0){
            sum = sum-i;
        }
        else {
            sum = sum+i;
        }
    }

     cout<<"The result is "<<sum<<endl;

     return 0;
}

*/

// Print the first n factorial numbers;

/*

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number";
    cin>>n;

    int fact = 1;
    for(int i = 1 ;i<=n;i++){
        fact = fact*i;
    }
    cout<<"The factorial of given number : "<<fact;

    return 0;
}

*/

// Given Two number a nad b . Find a raise to the power b.

/*

#include<iostream>
using namespace std;

int main(){
    int a,b;

    cout<<"Enter the value of a: ";
    cin>>a;

    cout<<"Enter the value of b : ";
    cin>>b;

    int i = 1;
    int pawer = 1;
    while(i<=b){
        pawer = pro*a;
        i++;
    }

    cout<<pawer;

    return 0;
}

*/

// Bianry to decimal conversion

// #include<iostream>
// using namespace std;

// int main(){
//     int n;

//     cout<<"Enter the binary digits: ";
//     cin>>n;

//     int remainder = n%10;
//     //int bin = 0;
//     int paw = 1;

//     for (int i = 1 ;i<remainder ; i++){
//         paw = paw * (2*bin);
//     }
// }

hhjh