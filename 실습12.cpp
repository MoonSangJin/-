#include <iostream>
using namespace std;

class CMyException{
	public :
		virtual void What()=0;
		
};

class CDivideZero : public CMyException{
	public :
		void What(){
			cout<<"0으로 나눌수 없습니다"<<endl;
		}
};

class CNegativeNumber : public CMyException{
	public :
		void What(){
			cout<<"x와 y는 음수가 될 수 없습니다."<<endl;
		}
};
void Process(int x,int y)
{
	if(y==0) throw CDivideZero();
	if(x<=0 || y<=0) throw CNegativeNumber();
	cout<<"합:"<<x+y<<"차:"<<x-y<<" 곱 : "<<x*y<<" 몫 : "<<x/y<<endl;
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
