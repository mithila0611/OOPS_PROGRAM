#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string fullName="mithila";
    protected:
    float semPercentage=9.28;
    private: 
    double phn_no=7601081605;
    public:
    double getphn()
    {
        return phn_no;
    }

};
class details : public student{
    public:
    float a=semPercentage;
    double b=getphn();
};
int main()
{
    details obj;
    cout<<"My name is : "<<obj.fullName<<endl;
    cout<<"Sem percentage is : "<<obj.a<<endl;
    cout<<"Phone number is : "<<obj.b<<endl;
}
