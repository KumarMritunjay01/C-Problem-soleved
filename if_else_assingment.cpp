// Assignment Quistions 18-10-22

// (1) write a program to which take the value length and breadth from user and check if it is a square or note.

/*

#include <iostream>
using namespace std;

int main(){
    int length , breadth;
    
    cout<< "enter the value of length"<<endl;
    cin>>length;

    cout<< "enter the value of breadth"<<endl;
    cin>>breadth;

    if(length==breadth){
        cout<<"It's square";
    }

    else{
        cout<<"It's rectancle";
    }

    return 0;
}

*/



// (3) Write a program to take inpute from user for coast price (c.p) and s.p. calculate profit or loss.

/*

#include <iostream>
using namespace std;

int main(){
    int cp , sp;
    
    cout<< "enter the cost price"<<endl;
    cin>>cp;

    cout<< "enter the selling price"<<endl;
    cin>>sp;

    int profit = sp-cp;
    int loss = cp-sp;

    if(sp>cp){
        cout<<"profit="<<profit<<endl;

    }
    else{
        cout<<"loss=="<<loss<<endl;
    }

    return 0;

}

*/

// (4) Write program to print positive number entered by user,if user enters a negative number , it skipped.

/*

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;

    if(num>0){
        cout<<"It's positive number";
    }

    return 0;
}

*/

// (5) Creat a calculator using switch statment to perform addition , subtraction , multiplication and division.

/*

#include <iostream>
using namespace std;

int main(){
    int num1 , num2;

    cout<<"Enter the 1st number"<<endl;
    cin>>num1;

    char op;
    cout<<"Enter the operator"<<endl;
    cin>>op;

    cout<<"Enter the 2nd number"<<endl;
    cin>>num2;

    switch(op) {

        case '+':
        cout<<"num1+num2="<<num1+num2<<endl;
        break;

        case '*':
        cout<<"Num1*num2="<<num1*num2<<endl;
        break;

        case '-':
        cout<<"num1-num2="<<num1-num2<<endl;
        break ;

        case '/':
        cout<<"Num1/num2="<<num1/num2<<endl;
        break;

        default:
        cout<<"Error! the operation is not correct";

        return 0;
    }
}

*/

/* (6) Write a program to calculate marks to grades.follow the cinversion rule as given below;
100-90 A+
90-80  A
80-70  B+
70-60  B
60-50  C
50-40  D
40-30  E
30-0   F

*/

/*

#include <iostream>
using namespace std;

int main(){
    int marks;
    
    cout<<"Enter your marks"<<endl;
    cin>>marks;

    if(marks>=90){
        cout<<"You got A+"<<endl;
    }

    else if(marks>=80) {
        cout<<"You got A"<<endl;
    }

    else if(marks>=70) {
        cout<<"You got B+"<<endl;
    }

    else if(marks>=60) {
        cout<<"You got B"<<endl;
    }

    else if(marks>=50) {
        cout<<"You got C"<<endl;
    }

    else if(marks>=40) {
        cout<<"You got D"<<endl;
    }

    else if(marks>=30) {
        cout<<"You got E"<<endl;
    }

    else{
        cout<<"sorry you are fell";
    }

    return 0;
}

*/


