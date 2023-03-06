#include <iostream>
#include <cmath>

using namespace std;

int main(){
    // initialize the variables for the program either int,double,float,etc
    int principal ;
    double interestRate ;
    int numberOfyears;

    // ask the user for the input
    // cout usually used to print a statment outgoing from the program onto your screen
    cout<<"how much do you want to invest?"<<endl;;
    cin >> principal;

    // cin is used to get the input from the user in this case the variable which was defined earler interestRate
    cout<<"what is the interest rate?"<<endl;
    cin >> interestRate;


    cout<<"how many years do you want to invest?"<<endl;
    cin >> numberOfyears;

    // below are some math calculations which should be easy to find on google 
    // remember first to define the datatype of the variables as they can vary for different types
    double finalBalance= principal * pow(1+interestRate, numberOfyears);

    double interest=finalBalance-principal;
    
    // remember there wont be any spacing in the output file so you can use endl to add a new line
    // or you leave some space like i have 
    cout<<"your final balance is: "<<finalBalance<<endl;
    cout<<"your interest rate is: "<<interest<<endl;

    // return 0 is used to end the program
    return 0;
}

