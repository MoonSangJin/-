#include <iostream>
using namespace std;

class CShape{
	protected:
		float x,y;
	
	public:
		CShape(float a,float b) : x(a),y(b){
		}	
		void Move(float a,float b){
			x+=a; y+=b;
		}
		virtual void Print(){
			cout<<"�߽�=("<<x<<","<<y<<")"<<endl;
		}
};

class CCircle : public CShape{
	private:
		float Radius;
	public:
		CCircle(float a,float b,float r) : CShape(a,b),Radius(r){
		}	
		void Print(){
			cout<<"���߽�=("<<x<<","<<y<<") ������="<<Radius<<endl;
		}	
};

class CRect : public CShape{
	private:
		float Garo,Sero;
	public:
		CRect(float a,float b,float ga,float se) : CShape(a,b),Garo(ga),Sero(se){
		}
		void Print(){
			cout<<"���簢�� �߽�=("<<x<<","<<y<<") ����="<<Garo<<" ����="<<Sero<<endl;
		}
};

int main(void)
{
	CShape *sptr=new CCircle(2,3,1);
	CShape *sptr2=new CRect(2,3,4,5);
	
	sptr->Move(10,10);
	sptr->Print();
	sptr2->Move(100,100);
	sptr2->Print();
	
}

