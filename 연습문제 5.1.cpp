#include <iostream>
using namespace std;

class CPoint{
	private :
		int x,y;
		
	public :
		
		
		void Print(){cout<<"("<<x<<","<<y<<")";
		}
		void SetXY(int a, int b){ x=a; y=b;
		} 
};

int main(void)
{
	int x,y;
	CPoint pt[3][2];
	
	for (int i=0; i<3; i++){
		for (int j=0; j<2; j++){
			cout<<"값을 입력하세요"<<endl;
			cin>>x>>y;
			pt[i][j].SetXY(x,y);
		}
	}
	
	for (int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			pt[i][j].Print();
			cout<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
