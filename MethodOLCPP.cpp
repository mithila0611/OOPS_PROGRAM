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
     cout<<"Result : "<<sum.add(2,3)<<endl;
    cout<<"Result : "<<sum.add(2,3,4)<<endl;
    cout<<"Result : "<<sum.add(2,3,4,5)<<endl;
}
