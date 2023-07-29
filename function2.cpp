// Scope of variable , funtion call by value , funtion call by reference , Default parameter;


// Scope of variable :

/*

#include <iostream>
using namespace std;

void print();

int apple = 10;  // Globle variable;
int main(){
    int apple = 5; // Local variable;

    cout<<::apple<<endl; // Scope Resolution (::);
    cout<<apple<<endl;
    print();

    return 0;
}

void print(){
    int a =6;   // Local variable;
    cout<<a<<endl;
    cout<<apple;
}

*/

// Formal parameter and actual parameter;

// Return_types Function_name(parameter1, parameter2,.,.,.);

/*

#include<iostream>
using namespace std;

int functionName(int para1,int para2){  // Formal parameters;
return para1+para2;
}

int main(){
    int a =1 ,b = 2;
    int sum = functionName(a,b); // Actual parameter;
    cout<<sum;
}

*/

// Pass by value and pass by Reference ;

// Pass by value;

/*

#include<iostream>
using namespace std;

void changeValue(int z){
    z =100;
}

int main(){
    int a = 5;
    //cout<<a<<endl;
    changeValue(a);
    cout<<a;

    return 0;
}

*/

// Pass By Refrence :

/*

#include <iostream>
using namespace std;

void changeValue(int &z,int &y){  // & :- ampersand operator:
    z =100;
    y = 99;
}

int main(){
    int a = 5 , b = 9;
    changeValue(a,b);
    cout<<a<<" "<<b<<endl;

    return 0;
}

*/

// Default parameter Value :

/*

#include <iostream>
using namespace std;

int add(int a=5, int b=2,int c=3){
    return (a+b+c);
}

int main(){
    cout<<add()<<endl;  // 10
    cout<<add(2)<<endl;  // 7
    cout<<add(10,5)<<endl;  //18
    cout<<add(10,5,6); //21

    return 0; 
}

*/
