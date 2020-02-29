#include <iostream>
using namespace std;

class CPoint{
	private :
		int x,y;
		
	public :
		CPoint(int a=0, int b=0) : x(a),y(a){}
		CPoint &SetX(int a)
		{	
			x+=a;
			return (*this);
		}
		CPoint &SetY(int a)
		{	
			y+=a;
			return (*this);
		}
		
		void Print(){cout<<x<<","<<y<<endl;
		x=0; y=0;
		}
	
};

int main(void)
{
	CPoint P1;
	P1.Print();
	P1.SetX(3).SetY(4);
	P1.Print();
	
	P1.SetY(6).SetX(5);
	P1.Print(); 
	
}
