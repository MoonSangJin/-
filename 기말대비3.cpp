#include <iostream>
using namespace std;

class CMyException{
	public :
		virtual void what(){cout<<"�μ��� �̻���"<<endl;
		};
};

class CDivideZero : public CMyException{
	void what(){
		cout<<"0���� ������ ����"<<endl;
	}
};

class CNegativeNumber : public CMyException{
	void what(){
		cout<<"������ ������ ����"<<endl;
	}
};

void Process(int a, int b)
{
	if(b==0)
		throw CDivideZero();
	if(a<=0||b<=0)
		throw CNegativeNumber();
	else
	cout<<"�� : "<<a+b<<endl;		
}

int main(void)
{
	int x,y;
	
	cout<<"2���� ���� �Է� : ";
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
		cout<<"���� �� ó�����ٰ�"<<endl;
	}
}
	
	
}
