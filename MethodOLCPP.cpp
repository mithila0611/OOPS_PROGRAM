#include<iostream>
using namespace std;
class MethodOLCPP{
    public:
    int add(int a,int b){
        return (a+b);
    }
    int add(int a,int b,int c){
        return (a+b+c);
    }
    int add(int a,int b,int c,int d){
        return (a+b+c+d);
    }
};
int main()
{
    int choice;
    int a,b,c,d;
    MethodOLCPP sum;
    cout<<"Enter your choice : ";
    cin>>choice;
    if(choice==2){
        cout<<"Enter two numbers : "<<endl;
        cin>>a>>b;
        cout<<"Addition of two numbers is : "<<sum.add(a,b)<<endl;
    }
    if(choice==3){
        cout<<"Enter three numbers : "<<endl;
        cin>>a>>b>>c;
        cout<<"Addition of three numbers is : "<<sum.add(a,b,c)<<endl;
    }
    if(choice==4){
        cout<<"Enter four numbers : "<<endl;
        cin>>a>>b>>c>>d;
        cout<<"Addition of two numbers is : "<<sum.add(a,b,c,d)<<endl;
    }
}
