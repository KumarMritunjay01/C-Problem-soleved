// Two pointer Patteren ;

// (1) Sort Array consisting of only 0s and 1s:

/*

#include<iostream>
#include<vector>
using namespace std;

void sortZeroesAndOne(vector<int> v) {

    int noOfZeros = 0;
    for(int i =0;i<v.size();i++){
        if(v[i]==0){
            noOfZeros++;
        }
    }

    for(int i =0;i<v.size();i++){
        if(i<noOfZeros){
            cout<<0<<" ";
        }
        else{
            cout<<1<<" ";
        }
    }
    return ;

}

int main(){
    vector<int>v;
    
    cout<<"Enter the Array 0s or 1s: ";
    for(int i =0 ;i<7;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }

    cout<<"Oritginal Array : ";

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;

    cout<< "Travers array: ";

    sortZeroesAndOne(v);

    return 0;
}

*/

/*
(2) Given an array of integer 'a' move all the even integers at the beginning 
of the array followed by all odd integers. The ralative order of odd or even integers
does not matter.Return any array that satisfied the condition:
*/

/*

#include <iostream>
using namespace std;

void evenOddSorting(int arr[] , int n){

    for(int i =0;i<5;i++){
        if(arr[i]%2 != 0){
            for(int j=i+1; j<5; j++){
                if(arr[j]%2 == 0){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp; 
                }
            }
        }
    }

    for(int i =0; i<5; i++){
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

    evenOddSorting(arr , n);

    return 0;
}

*/

/*[40:00]
Given an integer array 'a' sorted in non-decreasing order, 
return an array of the square of each number sorted in non-decreasing order
*/

#include<iostream>
using namespace std;

void squareOfElement( int arr[] , int size){
    for(int i=0;i<size; i++){
        cout<<arr[i]*arr[i]<<" ";
    }

}


int main() {

    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[size];

    cout<<"Enter array element: ";

    for(int i =0; i<size; i++){
        cin>>arr[i];
    }
    
    squareOfElement( arr , size);

    return 0;
}