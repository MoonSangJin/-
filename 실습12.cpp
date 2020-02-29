#include <iostream>
using namespace std;

class CMyException{
	public :
		virtual void What()=0;
		
};

class CDivideZero : public CMyException{
	public :
		void What(){
			cout<<"0���� ������ �����ϴ�"<<endl;
		}
};

class CNegativeNumber : public CMyException{
	public :
		void What(){
			cout<<"x�� y�� ������ �� �� �����ϴ�."<<endl;
		}
};
void Process(int x,int y)
{
	if(y==0) throw CDivideZero();
	if(x<=0 || y<=0) throw CNegativeNumber();
	cout<<"��:"<<x+y<<"��:"<<x-y<<" �� : "<<x*y<<" �� : "<<x/y<<endl;
}

int main(void)
{
	
	int x,y;
	while(cin>>x>>y)
	{
	
	try{
		Process(x,y);
	}
	catch(CMyException &a)
	{
		a.What();
	}
	
}
}
