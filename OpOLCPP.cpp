#include <iostream>
using namespace std;

class OpOLCPP{
	public:
	int real;
	public:
	int img;
	OpOLCPP(int real=0,int img=0)
	{
		this->real=real;
		this->img=img;
	}
	OpOLCPP operator+(OpOLCPP obj)
  {
	    OpOLCPP tempobj;
	    tempobj.real=real+obj.real;
	    tempobj.img=img+obj.img;
	    return tempobj;
  }
};
int main()
{
	OpOLCPP op1(2,3);
  OpOLCPP op2(3,4);
	OpOLCPP result=op1+op2;
	cout<<"Result : "<<result.real<<"+"<<result.img<<"i"<<endl;	
}
