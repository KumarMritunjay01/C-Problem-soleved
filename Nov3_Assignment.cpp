//(1)  Given an integer array (arr) and its size(n), print of odd and even integer present in the array.

/*

#include<iostream>
using namespace std;

int main(){
    int odd_even[] = { 1,2,3,4,5,6,7,8};

    int odd = 0;
    int even = 0;

    int size = sizeof(odd_even)/sizeof(odd_even[0]);
    for(int idx = 0;idx<size;idx++){
        if(odd_even[idx]%2==0){
            cout<<odd_even[idx]<<" is " <<"Even Number "<<endl;
            even++;
        }
        else{
            cout<<odd_even[idx]<<" is "<<"odd Number"<<endl;
            odd++;
        }
    }

    cout<<" No of even iteger in array is : "<<even<<endl;
    cout<<"No. of odd integer in array is : "<<odd<<endl;
    return 0;
}

*/

// (2) Given an iteger array and its size, find the sum of the greater  
//and the smallest integer present in the array And input taking from user:

/*

#include <iostream>
using namespace std;

int main() {
    int integer[5] = {1,2,3,4,5};

    int max = integer[0];
    for(int idx = 1;idx<5;idx++){
        if(integer[idx]>max){
            max = integer[idx];
        }
    }

    cout<<"The maximum value in array is: "<<max<<endl;

    int min = integer[0];
    for(int idx = 1;idx<5;idx++){
        if(integer[idx]<min){
            min = integer[idx];
        }
    }

    cout <<"The minimum value in the array is : " <<min<<endl;

    cout<< "And the sum is : "<<(max+min)<<endl;

    return 0;
}

*/

//(3) Given an integer array and its size, reverse the array and print it.

/*

#include <iostream>
using namespace std;

int main(){
    int arr[5];

    cout<<"Enter the item of array : ";
    for(int i =0;i<5;i++){
        cin>>arr[i];
    }

    for(int i = 4 ; i>=0;i--){
        cout<<arr[i]<<" ";
    }

    return 0;
}

*/

// (4) Given two array a[] and b[] of same size. Your task is to find the minimum sum of two element such
// that they belong to different arrays and are not at the same index.

/*

#include<iostream>
using namespace std;

int main(){
    int a[] = {1,2,3,4,5};
    int b[] = {6,7,8,9,10};

    int min1 = a[0];

    for(int i = 0 ; i<5;i++){
        if(a[i]<min1){
            min1 = a[i];
        }
    }

    cout<<min1<<endl;

    int min2 = b[0];
    for(int i = 0 ; i<5;i++){
        if(b[i]<min2){
            min2 = b[i];
        }
    }

    cout<<min2<<endl;
    cout<<"The posible minimum sum is : "<<(min1+min2)<<endl;

    return 0;
}

*/

/*
(5) Given an array containing n distict integers in the range[0,n]
(inclusive of both 0 and n)(inclusive of both 0 and n).
Find and return the only number of the range that is note present in the array.Here1<n<101.

*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the array : ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int min = INT16_MAX;
    int max = INT16_MIN;

    for(int i=0;i<n;i++)(
        if(arr[i]<min){
            
        }
    )
    return 0;
}


/* 

/* (6) Given an integer array containing n elements.find the element in the array for which all 
the elements to its left are smaller than it and all the elements to the right 
of it are larger than it.Here 1<n<101.
*/

hjjk