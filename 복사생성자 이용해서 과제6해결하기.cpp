#include <iostream>
using namespace std;

class Complex{
	private :
		double x,y;
		static int count;
		
	public :
		Complex(double a=0,double b=0) : x(a),y(b){
			count++;
		}	
		~Complex(){
			count--;
		}
		Complex(const Complex &d){
			x=d.x;
			y=d.y;
		}
		void Print(){
			cout<<"("<<x<<","<<y<<")";	
		}
		Complex Add(const Complex &a){
			Complex c;
			c.x=x+a.x;
			c.y=y+a.y;
			return c;
		}
		Complex Mul(const Complex &a){
			Complex c;
			c.x=(x*a.x)-(y*a.y);
			c.y=(y*a.x)+(x*a.y);
			return c;
		}
		static int GetCount(){
			return count;
		}
};

int Complex::count=0;


int main(void)
{
	Complex com1(1.0,2.0), com2(3.0,4.0);
	Complex com3;
	
	com1.Print(); cout<<endl;
	com2.Print(); cout<<endl;
	com3=com1.Add(com2);
	com3.Print(); cout<<endl;
	
	Complex *pcom4=new Complex;
	*pcom4=com1.Mul(com2);
	pcom4->Print(); 
	cout<<endl;

	cout<<"#compelx numbers="<<com1.GetCount()<<endl;
	delete pcom4;
	cout<<"#complex numbers="<<com1.GetCount()<<endl;
	
	return 0; 
	
}
