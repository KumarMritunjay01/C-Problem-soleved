// (1) Write a function to print square of the first 5 natural numbers;

/*

#include<iostream>
using namespace std;

int square(int num){
    return num*num;
}

int main(){
    int i;
    for(i = 1 ; i<=5;i++){
        int sq = square(i);
        cout<<sq<<endl;
    }

    return 0;
}

*/

// write a program to print cube of n natural number by using function and inpute taking from user;

/*

#include <iostream>
using namespace std;

int cube(int num){
    return num*num*num;
}

int main(){
    int n,m;
    cout<<"Enter the number: ";
    cin>>n;

    for(int i = 1;i<=n;i++){
        int ans = cube(i);
        cout<<ans<<endl;
    }

    cout<<"Enter the number: ";
    cin>>m;

    for(int i = 1;i<=n;i++){
        int ans = cube(i);
        cout<<ans<<endl;
    }

    return 0;
}

*/

// (2) Given radius of circle. Write a function to print the area and circumfarence of the circle.

/*

#include<iostream>
using namespace std;

double Area(int r){
    return 3.14*r*r;
    
}

double Circum(int r){
    
    return 2*3.14*r;
}

int main(){
    int r ;
    cout<<"Enter the radius: ";
    cin>>r;

    float Area_of_circle = Area(r);
    cout<<Area_of_circle<<endl;

    double Circumfarence = Circum(r);
    cout<< Circumfarence <<endl;

    return 0;

}

*/

//(3) Given the age of person , write a functuion to check if the person is eligibil for vote or note.

/*

#include<iostream>
using namespace std;

void vote(int age){
    if(age>=18){
        cout<<"your are eligible for voting"<<endl;
    }
    else{
        cout<<"Sorry you are Note eligible for voting because you are now child"<<endl;
    }
}

int main(){
    int age;

    cout<<"Please enter your age: ";
    cin>>age;

    vote(age);

    return 0;
}

*/

// (4) Geven two number a and b , write a program using function to print all the odd number between them.

/*

#include<iostream>
using namespace std;

int OddNumber(int a){
    return a;
    
}

int main(){
    int a , b;

    cout<<"Enter the value of a"<<endl;
    cin>>a;

    cout<<"Enter the value of b"<<endl;
    cin>>b;

    int i = a+1;
    while(i<b){
        if(i%2 != 0){
            cout<<OddNumber(i)<<endl;
            }
        i++;
    }

    return 0;
}

*/

// (5) Given two number a and b , write a program to print all the prime number between a and b.

#include<iostream>
using namespace std;

int printPrime(int num) {



}

int main(){
    int a , b ;
    cout<<"enter the value of a: ";
    cin>>a;

    cout<<"Enter the value of b: ";
    cin>>b;
    int i = 1;
    int fact = 0;
    while(a+1<b){
        
        if(a%i==0){
            fact++;
            i++;
            a++;
        }

    }

    if(fact==2){
        cout<<fact<<endl;
    }

    printPrime(i);

    return 0;

}