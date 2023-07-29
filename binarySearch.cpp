
/*

#include <iostream>
using namespace std;

int surchKey(int arr[], int size, int key){

    int start =0;
    int end = size-1;

    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }

        if(arr[mid] < key){
            start = mid + 1;
        }

        else{
            end = mid + 1;
        }

        mid = start + (end - start)/2;
    }

    return -1;
}

int main(){
    int size , key;

    cout<<"Enter the size: ";
    cin >> size;

    int arr[size];

    cout<<"Enter array ele: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    
    cout<<" Enter key: ";
    cin>>key;

    int index = surchKey(arr, size, key);

    cout<<"Index of given key is : "<< index;

    return 0;
}

*/

// Write a program to find first and last ocurance index of element:

/*


#include <iostream>
using namespace std;

int findFirstLastIndex(int arr[] ,int size, int key){

    int start = 0;
    int end = size-1;

    int mid = start + (end - start)/2;

    while(start <= end){
        
        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid+1;
        }

        else{
            end = mid-1;
        }

        mid = start + (end + start)/2;
    }

    return -1;

}


int main(){
    int size , key;

    cout<<"Enter the size: ";
    cin >> size;

    int arr[size];

    cout<<"Enter array ele: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    
    cout<<" Enter key: ";
    cin>>key;

    int index = findFirstLastIndex(arr, size, key);

    cout<<"Index of given key is : "<< index;

    return 0;
}

*/

//