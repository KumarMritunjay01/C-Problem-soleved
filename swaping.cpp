/*

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,7};
    
    int ansArray [5];
 
    int i = 0;
    int j = 5;
    
    while(i<j){
        int temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
         
         i++;
         j--;
    
    }
    
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
 
 return 0;
 
}

*/

// Swap alternet :  {1,2,3,4,5,6}  to {2,1,4,3,6,5}

/*

#include <iostream>
using namespace std;

void swapAlternet(int arr[] , int n){

    for(int i=0; i<n; i += 2){
        if(i+1<n){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter lelment of array: ";

    int arr1[n];

    for(int i =0; i<n; i++){
        cin>>arr1[i];
    }

    swapAlternet(arr1, n);

    return 0;
}

*/

//Find unique element in the array:

/*

#include<iostream>
using namespace std;

int uniqueElement(int arr[] , int n){

    int ans = 0;
    for(int i =0; i<n; i++){
        ans = ans^arr[i];
    }

    cout<< ans;
}

int main(){

    int n ;
    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter the array element: ";

    int arr1[n];

    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }

    uniqueElement(arr1 , n);

    return 0;
}

*/

// Find dublicate in the array:

// #include<iostream>
// using namespace std;

// int main() {
    
//     return 0;
// }

// array Intersection of two sets array:


#include <iostream>
using namespace std;

void intersection(int arr1[] ,int arr2[], int n , int m){

    for(int i=0; i<n; i++){

    }
}

int main() {
    int n ;
    cout<<"Enter size of array 1: ";
    cin>>n;

    int m ;
    cout<<"Enter size of array 2: ";
    cin>>m;

    cout<<"Enter element of 1st array: ";
    
    int arr1[n];
    int arr2[m];

    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }

    cout<<"Enter element of 2nd array: ";

    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }

    return 0;
}

// array union :

// pair sum:

// Triplet sum:

//

