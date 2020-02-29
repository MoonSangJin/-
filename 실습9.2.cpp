#include <iostream>
using namespace std;
#define PI 3.14

class CCircle{
	protected:
		int x,y;
		double Radius;
		
	public:
		CCircle(int a,int b, double r) : x(a),y(b),Radius(r){
			cout<<"CCircle 积己磊"<<endl;
		}	
		~CCircle(){
			cout<<"CCircle 家戈磊"<<endl;
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
			cout<<"CCylinder 积己磊"<<endl;
		}	
		~CCylinder(){
			cout<<"CCylinder 家戈磊"<<endl;
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
	
	cout<<"关搁利="<<Cy1.CCircle::GetArea()<<endl;
	cout<<"钎搁利="<<Cy1.GetArea()<<endl;
	cout<<"何乔="<<Cy1.GetVolume()<<endl;
}
