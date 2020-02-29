#include <iostream>
using namespace std;

class Complex{
	public :
		Complex(float r=0.0, float i=0.0) : re(r),im(i){
		}
		Complex operator+(const Complex &Po){
			return Complex(re+Po.re,im+Po.im);
		}
		
		Complex operator-(){
			return Complex(-re,-im);
		}
		
		friend ostream &operator<<(ostream &out,Complex &Po);
	private :
		float re,im;	
}; 

	ostream &operator<<(ostream &out,Complex &Po)
	{	if(Po.im>0)
		{
			out<<Po.re<<" + "<<Po.im<<"i\n";
			return out;
		}
		else
		{
				out<<Po.re<<" "<<Po.im<<"i\n";
			return out;	
		}
	}

int main()
{
	Complex com1(1.0,2.0),com2(3.0,4.0);
	Complex com3=com1+com2;
	Complex com4=-com1;
	cout<<com1<<com2<<com3<<com4;
	
}
