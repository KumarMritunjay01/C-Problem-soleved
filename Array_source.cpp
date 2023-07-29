// 1. Write a C++ program to find the largest element of a given array of integers.

/*

#include <iostream>
using namespace std;

int main() {
    int Array[7];

    cout<<"Enter the array: ";
    int size = sizeof(Array)/sizeof(Array[0]);
    for(int i=0;i<size;i++){
        cin>>Array[i];
    }

    int largest = INT16_MIN;
    for(int i=0;i<size;i++){
        if(largest<Array[i]){
            largest = Array[i];
        }
    }

    cout<<largest;
    return 0;
}

*/

// 3. Write a C++ program to find second largest element in a given array of integers.

/*

#include <iostream>
using namespace std;

int main() {
    int Array[7];

    cout<<"Enter the array: ";
    int size = sizeof(Array)/sizeof(Array[0]);
    for(int i=0;i<size;i++){
        cin>>Array[i];
    }

    int largest = INT16_MIN;
    int second_largest = INT_FAST16_MIN;

    for(int i=0;i<size;i++){
        if(largest<Array[i]){
            second_largest = largest;
            largest=Array[i];
        }

        else{
            if(second_largest<Array[i] && Array[i]<largest) {
            second_largest= Array[i];
        }
        }
    }

    cout<<"largest element in array is: "<<largest<<endl;
    cout<<"second largest element in array is : "<<second_largest<<endl;
    return 0;
}

*/

// 2. Write a C++ program to find the largest three elements in an array.

/*

#include <iostream>
using namespace std;

int main() {
    int Array[7];

    cout<<"Enter the array: ";
    int size = sizeof(Array)/sizeof(Array[0]);
    for(int i=0;i<size;i++){
        cin>>Array[i];
    }

    int largest = INT16_MIN;
    int second_largest = INT16_MIN;
    int third_largest = INT16_MIN;

    for(int i=0;i<size;i++){
        if(largest<Array[i]){
            third_largest = second_largest;
            second_largest = largest;
            largest=Array[i];
        }

        else if(second_largest<Array[i] && largest>Array[i]){
            second_largest =Array[i];
        }

        else if (third_largest<Array[i] && second_largest>Array[i] ){
            third_largest = Array[i];
        }
    }

    cout<<largest<<" "<<second_largest<<" "<<third_largest<<endl;

    return 0;

}

*/

// Write a C++ program to find the second smallest elements in a given array of integers.

/*

#include <iostream>
using namespace std;

int main() {
    int Array[7];

    cout<<"Enter the array: ";
    int size = sizeof(Array)/sizeof(Array[0]);
    for(int i=0;i<size;i++){
        cin>>Array[i];
    }

    int smalest = INT8_MAX;
    int second_smalest = INT8_MAX;

    for(int i=0;i<size;i++){
        if(smalest>Array[i]){
            second_smalest = smalest;
            smalest=Array[i];
        }

        else{
            if(second_smalest>Array[i] && Array[i]<smalest) {
            second_smalest= Array[i];
        }
        }
    }

    cout<<"smalest element in array is: "<<smalest<<endl;
    cout<<"second smalest element in array is : "<<second_smalest<<endl;
    return 0;
}

*/

// 6. Write a C++ program to find all elements in array of integers which have at-least two greater elements.

/*

#include<iostream>
using namespace std;

void find_greatest_element(int Array[],int n);
int main(){
    int Array[6];

    for(int i=0;i<6;i++){
        cin>>Array[i];
    }

    cout<<"Original Array is: ";
    for(int i =0;i<6;i++){
        cout<<Array[i]<<" ";
    }

    find_greatest_element(Array,6);

    return 0;
    
}

void find_greatest_element(int Array[],int n){

    cout<<"\nGreatest elemnt is : ";
    for(int i =0;i<6;i++){
        int sum =0;
        for(int j=0;j<6;j++){
            if(Array[j]>Array[i]){
                sum++;
            }
        }
        if(sum>=2){
            cout<<Array[i]<<" ";
        }
    }
}

*/

// 7. Write a C++ program to find the most occurring element in an array of integers.

/*

#include <iostream>
using namespace std;

void most_Occuring_Element(int num[],int size);

int main() {
    int num[7];

    int size = sizeof(num)/sizeof(num[0]);
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<"original Array is: ";

    for(int i=0;i<size;i++){
        cout<<num[i]<<" ";
    }

    most_Occuring_Element(num,size);

    return 0;
}

void most_Occuring_Element(int num[],int size) {
    
    cout<<"Most occuring element in the array is: "<<endl;
    int max = 0;
    for(int i =0;i<size;i++){
        int count =1;
        for(int j =i+1;j<size;j++){
            if(num[i]==num[j]){
               count++;
            }
        }

        if(count>max){
            max = count;
        }
    }

    for(int i =0;i<size;i++){
        int count =1;
        for(int j =i+1;j<size;j++){
            if(num[i]==num[j]){
               count++;
            }
        }

        if(count==max){
            cout<<num[i]<<" ";
        }
    }    
    return;
}

*/

//8. Write a C++ program to find the next greater element of every element of a given array of integers.
//   Ignore those elements which have no greater element.

/*

#include <iostream>
using namespace std;

void printNextGreaterElement(int nums[],int size) {

    cout<<"The Next Greatest Integer is: "<<endl;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(nums[i]<nums[j]){
                cout<<nums[i]<<":"<<nums[j];
                break;
            }
        }
        cout<<endl;
    }

    return;
}

int main(){
    int nums[7];

    cout<<"Enter the array: ";
    int size = sizeof(nums)/sizeof(nums[0]);
    for(int i =0;i<size;i++){
        cin>>nums[i];
    }

    cout<<"Original Array : "<<" ";

    for(int i=0;i<size;i++){
        cout<<nums[i];
    }
    cout<<endl;

    printNextGreaterElement(nums,size);

    return 0;
}

*/

//