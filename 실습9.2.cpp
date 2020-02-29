#include <iostream>
using namespace std;
#define PI 3.14

class CCircle{
	protected:
		int x,y;
		double Radius;
		
	public:
		CCircle(int a,int b, double r) : x(a),y(b),Radius(r){
			cout<<"CCircle ������"<<endl;
		}	
		~CCircle(){
			cout<<"CCircle �Ҹ���"<<endl;
		}
		double GetArea(){
			return PI*Radius*Radius;
		}
};

class CCylinder : public CCircle{
	private:
		double Height;
		int z;
	public:
		CCylinder(int a,int b, int c,double r,double h) : CCircle(a,b,r),Height(h),z(c){
			cout<<"CCylinder ������"<<endl;
		}	
		~CCylinder(){
			cout<<"CCylinder �Ҹ���"<<endl;
		}
		double GetArea(){
			return 2*PI*Radius*Radius+2*PI*Radius*Height;
		} 
		double GetVolume(){
			return PI*Radius*Radius*Height;
		}
		
};


int main(void)
{
	CCylinder Cy1(1,1,1,1.0,10.0);
	
	cout<<"�ظ���="<<Cy1.CCircle::GetArea()<<endl;
	cout<<"ǥ����="<<Cy1.GetArea()<<endl;
	cout<<"����="<<Cy1.GetVolume()<<endl;
}
