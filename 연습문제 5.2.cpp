#include <iostream>
using namespace std;

class CPoint{
	private :
		int x,y;
		int n;
		
	public :
		
		CPoint(int a,int b){
			x=a; y=b;
		}
		CPoint(){x=0; y=0;
		}
		
		
		int GetSumX(CPoint *p,int num) // 반환형은 int고 클래스 배열을 받는거니까 매개변수로 포인터를 써야하는데 어떤 포인터냐면 CPoint라는  클래스를 가리키는 포인터로 받아야함 
		{
			int result=0;
			
			for(int i=0; i<num; i++)
			{
				result+=p[i].x;
			}
			return result; //함수는 return 해줘야됨 
		}
		
		int GetSumY(CPoint *p,int num)
		{
			int result=0;
			
			for(int i=0; i<num; i++)
			{
				result+=p[i].y;
			}
			return result;
		}
		
		void SetXY(int a,int b)
		{
			x=a; y=b;
		}
		
		void Print()
		{
			cout<<"("<<x<<","<<y<<")";
		}
		
		
		
			
};

int main(void)
{
	int i;
	CPoint ary[5]={CPoint(1,2),CPoint(3,4),CPoint(5,6)};
	CPoint sum;
	
	sum.SetXY(sum.GetSumX(ary,5),sum.GetSumY(ary,5));
	
	sum.Print();
	
	return 0; 
	
}
