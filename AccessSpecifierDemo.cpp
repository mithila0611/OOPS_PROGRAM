#include<iostream>
using namespace std;
class AccessSpecifierDemo{
    private:
    int priVar;
    protected: 
    int proVar;
    public:
    int pubVar;
    public:
    void setVar(int priValue,int proValue, int pubValue){
        priVar=priValue;
        proVar=proValue;
        pubVar=pubValue; 
    }
    public:
    int getPriVar()
    { 
        return priVar;
    }
    int getProVar()
    {
        return proVar;
    }
    int getPubVar()
    {
        return pubVar;
    }
};
int main()
{
    AccessSpecifierDemo obj;
    cout<<"Get method values"<<endl;
    obj.setVar(7,4,2);
    cout<<"Private Value : "<<obj.getPriVar()<<endl;
    cout<<"Protected Value : "<<obj.getProVar()<<endl;
    cout<<"Public Value : "<<obj.getPubVar()<<endl;
}
