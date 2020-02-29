#include <iostream>
using namespace std;

class CMyException{
	public :
		virtual void What()=0;
}; 

class CDivideZero : public CMyException{
	public :
		void What(){ cout<<"0���� ���� ���� �����ϴ�."<<endl;
		}
};

class CNegativeNumber : public CMyException{
	public :
		void What(){cout<<"�ǿ����ڴ� ������ �� �� �����ϴ�."<<endl;
		}
};

void Process(int x, int y){
	if(y==0) throw CDivideZero();
	if(x<=0||y<=0) throw CNegativeNumber();
	cout<<"��:"<<x+y<<" ��:"<<x-y<<" ��:"<<x*y<<" ��:"<<x/y<<endl;
}
int main(void)
{
	int x,y;
	
	cout<<"2���� ���� �Է� : ";
	while(cin>>x>>y){
		try{
			Process(x,y);
		}
		catch(CMyException &a){
			a.What();
		}
		catch(...){
			cout<<"��� throw���� ������ �� �ִ� ����ó�� �ڵ鷯�Դϴ�."<<endl;
		}
		cout<<endl<<"2���� ���� �Է�:";
	}
	cout<<endl;
	return 0;
}
