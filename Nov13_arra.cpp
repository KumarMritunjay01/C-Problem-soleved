// Pattern : Prefix Sums:

/* 
Given an integer array 'a', return the prefix sum/running 
sum in the same array without creating a new array.
*/

/*

#include <iostream>
using namespace std;

void prefixSum(int arr[] , int n){

    for(int i =1; i<n; i++){
        arr[i] = arr[i]+arr[i-1];
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter array ele: ";

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    } 

    prefixSum(arr , n);

    return 0;
}

*/
//  [11:00]
// Check if we can partition the array into two subarrays with equal sum. More farmally,
// check that the prefix sum of a part of the array is equal to the sufix sum of rest of the arry.


// [26:00]
// Given an integer of size n. Answer Q quiries where you need to print
// the sum of values in a given range of indices from I or r( Both included).
// Nte:- The value of I and r in quiries follow 1-based indexing.

jkjckdjk