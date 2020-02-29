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
		
		
		int GetSumX(CPoint *p,int num) // ��ȯ���� int�� Ŭ���� �迭�� �޴°Ŵϱ� �Ű������� �����͸� ����ϴµ� � �����ͳĸ� CPoint���  Ŭ������ ����Ű�� �����ͷ� �޾ƾ��� 
		{
			int result=0;
			
			for(int i=0; i<num; i++)
			{
				result+=p[i].x;
			}
			return result; //�Լ��� return ����ߵ� 
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
