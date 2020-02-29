#include <iostream>
using namespace std;

class Point{
	private :
		int x,y;
		
	public :
		void SetXY(int a, int b){x=a; y=b;
		}
		void Print(){cout<<"("<<x<<","<<y<<")"<<endl;
		}
		void Move(int a, int b){x+=a; y+=b;
		}
};

int main(void)
{
	Point P1;
	P1.SetXY(3,4);
	P1.Move(1,1);
	P1.Print();
	
	return 0;
}
