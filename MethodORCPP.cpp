#include<iostream>
using namespace std;
class MethodORCPP{
    public:
    int add(int a,int b){
        return(a+b);
    }
    public:
    float add(float a,float b){
        return(a+b);
    }
};
int main()
{
    MethodORCPP obj;
    cout<<"Result1 : "<<obj.add(2,3)<<endl;
    cout<<"Result2 : "<<obj.add(3.4f,4.5f)<<endl;
}
