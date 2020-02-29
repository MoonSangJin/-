#include <iostream>
using namespace std;

class CPoint{
	protected :
		int x,y;
	public :
		CPoint(int a=0, int b=0) : x(a),y(b){
			cout<<"CPoint  持失切 持失"<<endl;
		}	
		~CPoint(){
			cout<<"CPoint 社瑚切 持失"<<endl;
		}
		void Move(int a){
			x+=a; y+=a;
			cout<<x<<","<<y<<endl;
		}
		void Draw(int b){
			x-=b; y-=b;
			cout<<x<<","<<y<<endl;
		}
		
};

class CCircle : public CPoint{
	private :
		double Radius;
	public :	
		CCircle(int a=0, int b=0, double r=0) : CPoint(a,b),Radius(r){
			cout<<"CCircle 持失切 持失"<<endl;
		}	
		~CCircle(){
			cout<<"CCircle 社瑚切 持失"<<endl;
		}
		void Draw(int c){
			x-=2*c; y-=2*c;
			cout<<x<<","<<y<<endl;
		}
		double GetArea(){
			return 3.14*Radius*Radius;
		}
};

int main(void){
	CPoint P1(1,1);
	CCircle P2(1,1,3);
	P1.Move(2);
	P2.Move(2);
	cout<<P2.GetArea()<<endl;
	P1.Draw(2);
	P2.Draw(2);
	P2.CPoint::Move(5);
}
