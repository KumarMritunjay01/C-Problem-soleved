/*

#include <iostream>
#include<vector>
using namespace std;

int main() {
    // initialization of vector

    vector <int> v;
    // taking input in vector

    int size;
    cin>> size;

    for(int i=0;i<size;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    // printing array;

    for(int i =0;i<size();i++){
        cout<<v[i]<<" ";
    }

    // Removing element from the array from bck side:

    v.pop_back();

    cout<<"\nAfter removing element:" ;
    for(int i =0;i<size();i++){
        cout<<v[i]<<" ";
    }    

    // Removing element at any position:

    v.erase(v.end() -2);

    cout<<"\nAfter removing element:" ;
    for(int i =0;i<size();i++){
        cout<<v[i]<<" ";
    }    

    // Adding element by ending;

    v.push_back(10);

    cout<<"\nAfter adding element:" ;
    for(int i =0;i<size();i++){
        cout<<v[i]<<" ";
    }    

    // Adding element at any position + element :

    v.insert(v.begin() +2,14);

    cout<<"\nAfter Adding element:" ;
    for(int i =0;i<size();i++){
        cout<<v[i]<<" ";
    }  

    // size of array:
    cout<<"\n size of array : "<<v.size();

    // resize of array;

    v.resize(8);

    cout<<"\n size after resize: "<<v.size();
}

*/

// Write the number of elements strictly greater than value x.

/*

#include<iostream>
#include<vector>
using namespace std;

int main() {
    
    vector <int >v;

    cout<<"Enter the array: ";
    for(int i =0;i<5;i++){
        
        int element;
        cin>>element;
        v.push_back(element);
    }

    int x;
    cout<<"enter the x: ";
    cin>>x;
    int count =0;
    for(int i=0;i<5;i++){
        if(x<v[i]){
            count++;
            
        }
    }

    cout<<count;
}

*/

// Check if the given array is sorted or not.

/*

#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>v;

    cout<<"enter array: ";
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }

    bool sortedflag = true;
    for(int i =1;i<v.size();i++){
        if(v[i]<=v[i-1]){
            sortedflag = false;
        }
        
    }

    cout<<sortedflag;
    
}

*/

// Find the differece between the sum of element at even indices  to the sum of element at odd indices.

/*

#include<iostream>
#include<vector>
using namespace std;

int main() {

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    vector <int> v1;

    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v1.push_back(ele);
    }

    for(int i =0;i<n;i++){
        cout<<"\nOriginal Array: "<< v1[i];
    }

    int evenSum =0;
    int oddSum=0;
    for(int i =0 ; i<n;i++){
        if(v1[i]%2==0){
            evenSum = evenSum + v1[i];
        }
        else{
            oddSum = oddSum + v1[i];
        }
    }

    cout<<"\nDifferense is: "<< evenSum - oddSum;

    return 0;
}

*/

// Count the number of occurences of a particular element x:

/*

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enteer the size of array: ";
    cin>>n;

    cout<<"Enter the array element: ";

    int arr[n];

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Original array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int x;
    cout<<"\n Enter the x: ";
    cin>>x;

    cout<<endl;

    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            count++;
        }
    }

    cout<<count;

    return 0;
}

*/



// Count the number of elements strictly greator than the value of x:

dbhbhdh