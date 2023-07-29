// write a program to sort the given array using bubble sort 

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"\nEnter the array element: ";
    int array[n];

    for(int i =0;i<n;i++){
        cin>>array[i];
    }

    // bubble sort:

    /*
    for(int i =0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(array[j]>array[j+1]){
                int temp =array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
        */

   // selection sort:

    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(array[min]>array[j]){
                min = j;
            }
        }

        int temp = array[min];
        array[min] = array[i];
        array[i] = temp;
    }

    for(int i =0;i<n;i++){
        cout<<array[i]<<" ";
    }

    return 0;
}