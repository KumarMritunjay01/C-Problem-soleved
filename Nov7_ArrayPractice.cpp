// Find the total number of pairs in the array whose sum is equal to the given value of x.

/*

#include<iostream>
using namespace std;

int main() {
    int array[6];

    cout<<"Enter the array: ";
    int size = sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size;i++){
        cin>>array[i];
    }

    int x;
    cout<<"Enter the value of x: ";
    cin>>x;

    int sum =0;
    for(int i=0;i<size;i++){
        for(int j =i+1 ;j<size;j++){
            if(array[i]+array[j]==x){
                sum++;
            }
        }
    }

    cout<<sum;

    return 0;
}

*/

// Count the number of triplets whose sum is equal to the given value of x;

/*

#include<iostream>
using namespace std;

int main() {
    int array[6];

    cout<<"Enter the array: ";
    int size = sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size;i++){
        cin>>array[i];
    }

    int x;
    cout<<"Enter the value of x: ";
    cin>>x;

    int sum =0;
    for(int i=0;i<size;i++){
        for(int j =i+1 ;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(array[i]+array[j]+array[k]==x){
                    sum++;
                }
            }
        }
    }

    cout<<sum;

    return 0;
}

*/

// Find the unique nomber in a given array where all the element are being repeated twice with one vlue being unique.

/*

#include<iostream>
using namespace std;

int main() {
    int array[7];

    cout<<"Enter the array: ";
    int size = sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size;i++){
        cin>>array[i];
    }

    int ans =-1;
    for(int i=0;i<size;i++){
        for(int j =i+1 ;j<size;j++){
            if(array[i]==array[j]){
                array[i]=array[j]=ans;
            }
        }   
    }

    cout<<"unique no.is: ";
    for(int i=0;i<size;i++){
        if(array[i]>0){
            cout<<array[i]<<" ";
        }
    }

    return 0;
}

*/

// Find the second largest element in the array:

/*

#include <iostream>
using namespace std;

int main() {
    int num[7];

    cout<<"Enter the array: ";

    int size = sizeof(num)/sizeof(num[0]);
    for(int i =0;i<size;i++){
        cin>>num[i];
    }

    int largest = INT16_MIN;
    int second_largest = INT16_MIN;
    for(int i=0;i<size ; i++){
        if(largest<num[i]){
            second_largest = largest;
            largest = num[i];
        }

        else{
            if(second_largest<num[i] and largest>num[i]){
                second_largest=num[i];
            }
        }
    }

    cout<<"largest Element in Array is: "<<largest<<endl;;

    cout<<"Second largest Element in Array is: "<<second_largest<<endl;

    return 0;
}

*/

//  Rotate the given array 'a' k steps , where k is Non-negetive ;
// Note: k can be greater than n as well where n is the size of array 'a' ;

/*

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter teh array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the value of K: ";
    cin>>k;

    k = k%n;

    int arr2[n];
    int j =0;

    for(int i=n-k;i<n;i++){
        arr2[j++]=arr[i];
    }

    for(int i=0;i<=k;i++){
        arr2[j++]=arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr2[j];
    }

    return 0;
}

*/

//  (1:10)  Given Q queries , check if the given number is present in the array or not :
//NOte : Value of all element in the array less than 10 to the power 5 :
 hg