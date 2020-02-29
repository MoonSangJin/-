#include <iostream>
using namespace std;

class Complex{
	private :
		double x,y;
	public :
		Complex(double a=0, double b=0) : x(a), y(b){
		}	
		Complex operator+(Complex &Po){
			return Complex(x+Po.x,y+Po.y);
		}
		Complex operator-(){
			return Complex(-x,-y);
		}
		friend ostream& operator<<(ostream &out,const Complex&Po);
};

	ostream& operator<<(ostream &out,const Complex&Po){
		out<<"("<<Po.x<<","<<Po.y<<")"<<endl;
		return out;
	}




int main(void)
{
	Complex com1(1.0,2.0), com2(3.0,4.0);
	Complex com3=com1+com2;
	Complex com4=-com1;
	cout<<com1<<com2<<com3<<com4;
}
