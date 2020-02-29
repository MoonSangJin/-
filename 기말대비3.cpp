#include <iostream>
using namespace std;

class CMyException{
	public :
		virtual void what(){cout<<"인수가 이상해"<<endl;
		};
};

class CDivideZero : public CMyException{
	void what(){
		cout<<"0으로 나눌수 없다"<<endl;
	}
};

class CNegativeNumber : public CMyException{
	void what(){
		cout<<"음수로 나눌수 없다"<<endl;
	}
};

void Process(int a, int b)
{
	if(b==0)
		throw CDivideZero();
	if(a<=0||b<=0)
		throw CNegativeNumber();
	else
	cout<<"합 : "<<a+b<<endl;		
}

int main(void)
{
	int x,y;
	
	cout<<"2개의 정수 입력 : ";
	while(cin>>x>>y){
		try {
		Process(x,y);
	}
	
	
	catch(CMyException &a)
	{
		a.what();
	}
	
	catch(...)
	{
		cout<<"내가 다 처리해줄게"<<endl;
	}
}
	
	
}
