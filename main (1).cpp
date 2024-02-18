/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    float number1,number2;
    cout<<"Enter two numbers : "<<endl;
    cin>>number1>>number2;
    cout<<"1.Addition 2.Substraction 3.Multiplication 4.Division"<<endl;
    cout<<"CHOOSE AN OPTION : "<<endl;
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1 :
            cout<<"Addition of "<<number1<<" and "<<number2<<" is : "<<(number1+number2)<<endl;
            break;
        case 2 :
            cout<<"Substraction of "<<number1<<" and "<<number2<<" is : "<<(number1-number2)<<endl;
            break;
        case 3 :
            cout<<"Multiplication of "<<number1<<" and "<<number2<<" is : "<<(number1*number2)<<endl;
            break;
        case 4 :
            cout<<"Division of "<<number1<<" and "<<number2<<" is : "<<(number1/number2)<<endl;
            break;
        default :
            cout<<"Invalid input entered, try again"<<endl;
    }
}