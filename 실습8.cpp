#include <iostream>
using namespace std;

class CPoint{
	public :
		CPoint(float a=0.0,float b=0.0) : x(a),y(b){}
		CPoint operator+(CPoint &Po){return CPoint(x+Po.x,y+Po.y);}
		CPoint operator-(){
			return CPoint(-x,-y);
		}
		
	friend ostream &operator<<(ostream &out,const CPoint &Po);	
	friend void Print(ostream &out,const CPoint &Po);	
	private :
		float x,y;	
};

void Print(ostream &out,const CPoint &Po)
{
	out<<"("<<Po.x<<","<<Po.y<<")"<<endl;
	
}
ostream &operator<<(ostream &out,const CPoint &Po)
{
	out<<"("<<Po.x<<","<<Po.y<<")"<<endl;
	return out;
	}	
	

int main(void)
{
	CPoint P1(2,3),P2(5,6);
	 
	cout<<"변경전"<<P1<<endl<<P2<<endl;
	
	CPoint P3=P1+P2;
	CPoint P4=-P1;
	
	cout<<"변경후"<<P1<<endl<<P2<<endl;
	cout<<P1<<P2<<P3<<P4;
}
