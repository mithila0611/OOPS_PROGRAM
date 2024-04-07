#include<iostream>
using namespace std;
template <typename Number>
Number addNumbers(Number num1,Number num2)
{
    return (num1+num2);
}
template <typename Number>
Number subNumbers(Number num1,Number num2)
{
    return(num1-num2);
}
template <typename Number>
Number mulNumbers(Number num1,Number num2)
{
    return(num1*num2);
}
template <typename Number>
Number divNumbers(Number num1,Number num2)
{
    return(num1/num2);
}
int main()
{
    int choice;
    cout<<"Enter your choice to perform the operations : ";
    cin>>choice;
    int intaddResult;
    float floataddResult;
    double doubleaddResult;
    int intsubResult;
    float floatsubResult;
    double doublesubResult;
    int intmulResult;
    float floatmulResult;
    double doublemulResult;
    int intdivResult;
    float floatdivResult;
    double doubledivResult;
    if(choice==1)
    {
        intaddResult=addNumbers(2,3);
        floataddResult=addNumbers(2.3,3.4);
        doubleaddResult=addNumbers(2.33,4.44);
        cout<<intaddResult<<endl;
        cout<<floataddResult<<endl;
        cout<<doubleaddResult<<endl;
    }
    else if(choice==2)
    {
        intsubResult=subNumbers(2,3);
        floatsubResult=subNumbers(2.3,3.4);
        doublesubResult=subNumbers(2.33,4.44);
        cout<<intsubResult<<endl;
        cout<<floatsubResult<<endl;
        cout<<doublesubResult<<endl;
    }
    else if(choice==3)
    {
        intmulResult=mulNumbers(2,3);
        floatmulResult=mulNumbers(2.3,3.4);
        doublemulResult=mulNumbers(2.33,4.44);
        cout<<intmulResult<<endl;
        cout<<floatmulResult<<endl;
        cout<<doublemulResult<<endl;
    }
    else if(choice==4)
    {
        intdivResult=divNumbers(2,3);
        floatdivResult=divNumbers(2.3,3.4);
        doubledivResult=divNumbers(2.33,4.44);
        cout<<intdivResult<<endl;
        cout<<floatdivResult<<endl;
        cout<<doubledivResult<<endl;
    }
    else{
        cout<<"Invalid operation"<<endl;
    }
}
