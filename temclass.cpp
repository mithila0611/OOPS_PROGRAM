#include<iostream>
using namespace std;
template <typename N> class Calculator{
	public:
	N add(N a,N b){
		return (a+b);
	}
	N sub(N a,N b){
		return (a-b);
	}
	N mul(N a,N b){
		return (a*b);
	}
	N div(N a,N b){
		return (a/b);
	}
};
int main(){
	Calculator <int> obj;
	double a;
	double b;
	int r;
	char choice;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	cout<<"Enter operation: ";
	cin>>choice;
	switch(choice){
	    case '+':r=obj.add(a,b); 
		                cout<<"Sum of "<<a<<" and "<<b<<" is: "<<r;
		                break;
		case '-':r=obj.sub(a,b); 
		                cout<<"difference of "<<a<<" and "<<b<<" is: "<<r;
		                break;
	    case '*': r=obj.mul(a,b); 
                        cout<<"product  of "<<a<<" and "<<b<<" is: "<<r;
		                break;
	    case '/':   r=obj.div(a,b); 
	                    cout<<"division of "<<a<<" and "<<b<<" is: "<<r;
		                break;
		default: cout<<"Invalid operation"<<endl;
	}
}
