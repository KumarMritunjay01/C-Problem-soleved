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