// Q1 - Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the 
//      two arrays into a single sorted array of size m+n

/*

#include <iostream>
using namespace std;

int main(){
    int arr1[] = {6,4,1,2,5};
    int arr2 [] = {10,3,6,9,2};

    int arr3[10];

    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);

    // for(int i= 0;i<(m+n);i++){
    //     if(i<5){
    //         arr3[i]=arr1[i];
    //     }
    //     if(i>=5){
    //         arr3[i]=arr2[i-5];
    //     }
    // }

    // for(int i = 0;i<(m+n);i++){
    //     cout<<arr3[i]<<" ";
    // }

    for(int i=0;i<m;i++){
        arr3[i]=arr1[i];
    }

    for(int i=n;i<(m+n);i++){
        arr3[i]=arr2[i-m];
    }

    for(int i = 0;i<(m+n);i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;

    
    for(int i=0;i<10;i++){

        for(int j=0;j<10;j++){
            if(arr3[j]>arr3[(j+1)]){
                int temp = arr3[j];
                arr3[j] = arr3[j+1];
                arr3[j+1]=temp;
            }
        }

    }

    for(int i = 0;i<10;i++){
        cout<<arr3[i]<<" ";
    }

    return 0;
}

*/

// Q2 - Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists 
//      a pair in the array whose sum is exactly x.

#include<iostream>
using namespace std;

int main() {
    int v1[] = {3,12,1,4,0};

    // int n;
    // cout<<"Enter the size of array: ";
    // cin>>n;

    // cout<<"\n Enter array element; ";
    // for(int i=0;i<n;i++){
    //     int ele;
    //     cin>>ele;
    //     v1.push_back(ele);
    // }

    int n = 5;

    cout<<"\n Original array: ";

    for(int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }

    for(int i=0;i<n;i++){
        for(int j =1;j<n;j++){
            if(v1[j]<v1[j-1]){
                int temp = v1[j-1];
                v1[j-1]=v1[j];
                v1[j]=temp;
            }
        }
    }

    cout<<"\n Shorted array: ";
    for(int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }

    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int k = v1[j+1];
            if(v1[i]+v1[j]==k){
                cout<<v1[i]<<" "<<v1[j];
                break;
            }
        }
    }

    return 0;
}

// Q3 - Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists 
//      a pair in the array whose absolute difference is exactly x

// Q4 - Given a vector arr[] sorted in increasing order. Return an array of squares of each 
//      number sorted in increasing order. Where size of vector 1<size<101.

// Q5 - Given a vector arr[] sorted in increasing order of n size and an integer x, find the number 
//      of unique pairs that exist in the array whose absolute sum is exactly x

// Q6 - Given a vector array nums, print the count of triplets [nums[i], nums[j], nums[k]] such 
//      that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == x. Where k is an integer given by the user.
//      Note: The solution set must not contain duplicate triplets and should not have 3 loops.

jhs