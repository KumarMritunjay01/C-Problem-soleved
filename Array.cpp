// #include <iostream>
// using namespace std;

// int main(){
//     int array[] = {1,2,3,4,5};
//     char ch [6]={'a','b','c','d','e','f'};
//     cout<<ch<<endl;
//     cout<<array<<endl;
//     return 0;
// }


// One diamentional array :

/*

#include <iostream>
using namespace std;

int main(){
    int array[5];
    array[0]=2;
    array[1]=3;

    cout<<array;

    return 0;
}

*/

// Size of Operation in Arrays:

/*

#include <iostream>
using namespace std;

int main(){
    int array1[]={1,2,3,4,5,7};
    long array2[]={1,2,3,4,5,7};
    short array3[]={1,2,3,4,5,7};
    char array4 [] ={'a','b','c','d','e'};
    long array5[]={1,2,3,4,5,7};


    cout<<sizeof(array1)<<endl;    // SIze of array
    cout<<sizeof(array2)<<endl;
    cout<<sizeof(array3)<<endl;
    cout<<sizeof(array4)<<endl;
    cout<<sizeof(array5)<<endl;

    
    cout<<sizeof(array1)/sizeof(array1[0])<<endl; // Length of the array
    cout<<sizeof(array2)/sizeof(array2[2])<<endl;
    cout<<sizeof(array3)/sizeof(array3[4])<<endl;
    cout<<sizeof(array4)/sizeof(array4[0])<<endl;
    cout<<sizeof(array5)/sizeof(array5[0])<<endl;

    int array6[4];
    cout<<array6[0]<<" "<< array6[2]<<endl;  // print as garbege value;

    return 0;
}

*/

// Looping in array;


/* 

#include <iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4,5,6};
    
    int size = sizeof(array)/sizeof(array[0]);
    for(int idx =0 ;idx<size;idx++){
        cout<<idx<<endl;
    }

    // for each loop:

    for(int ele : array)  {    // for(data type variable_name:array_name);
        cout<<ele<<endl;
    } 

    // while loop:

    int index = 0;      
    while(index<size){
        cout<<array[index]<<endl;
        index++;
    }

    return 0;
}

*/

// Taking input in the array:

/*

#include<iostream>
using namespace std;

int main(){
    char vowel[5];
    for(int idx =0 ;idx<5;idx++){
        cin>>vowel[idx];
    }

    int size = sizeof(vowel)/sizeof(vowel[0]);
    for(int idx = 0;idx<size;idx++){
        cout<<vowel[idx]<<endl;
    }

    // for(char &ele : vowel) {
    //     cin>>ele;
    // }

    // // for(char ele:vowel){
    // //     cout<<ele<<" ";
    // // }
    // for(int idx =0 ;idx<5;idx++){
    //     cout<<vowel[idx]<<" ";
    // }

    return 0;
}

*/

// Write a program to calculate sum of all number given in array input taking from user;

/*

#include<iostream>
using namespace std;

int main(){
    int sum[5];

    for(int idx =0 ;idx<5;idx++){
        cin>>sum[idx];
    }

    cout<<sizeof(sum)<<endl;
    int size = sizeof(sum)/sizeof(sum[0]);
    cout<<size<<endl;
    for(int idx =0 ;idx<5;idx++){
        cout<<sum[idx]<<" ";
    }
    cout<<endl;

    int add = 0;
    for(int idx =0 ;idx<5;idx++){    // addition;
        add = add+sum[idx];
    }
    cout<<add<<" ";

    return 0;
}

*/

// Find the maximum  value out of all the elments in the array: And array taking from user:

/*

#include <iostream>
using namespace std;

int main(){
    int num[5];

    for(int idx = 0 ; idx <5; idx++){
        cin>>num[idx];
    }

    int max = num[0];
    for(int i = 1 ;i<5;i++){
        if(max<num[i]){
            max = num[i];
        }
    }
    cout<<max;
    
    return 0;
}

*/

//  Search if a given element is present in the array or note . If it is not present then return -1 else present return the index:

#include <iostream>
using namespace std;

int main(){
    int array [5] = { 3,9,18,12,9};  // 11 present or note

    int key = 11;
    int ans = -1;

    for(int i =0 ;i<5;i++){
        if(array[i]==key){
            ans = i;
        }
    }

    cout<<ans;
    
    return 0; 
}