#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class CPoint{
	private :
		int x,y;
		
	public :
		CPoint(int a=0, int b=0) : x(a),y(b){
		}
		friend ostream &operator<<(ostream &out,CPoint &Po);
		
	friend	bool operator<(CPoint &Po1,CPoint &Po2);
		
};

void PrintVector(vector<CPoint> intV,char *name)
{
	vector<CPoint>::iterator iter;
	
	cout<<">>"<<name<<" : ";
	for(iter=intV.begin(); iter!=intV.end(); iter++)
	{
		cout<<*iter<<" ";
		}	
		cout<<endl;
}

ostream &operator<<(ostream &out,CPoint &Po)
{
	out<<"("<<Po.x<<","<<Po.y<<")";
	return out;
}

	bool operator<(CPoint &Po1,CPoint &Po2)
		{	
			return (Po1.x+Po1.y<Po2.x+Po2.y)? true : false;
		}

int main(void)
{
	vector<CPoint> intV(6);
	
	intV[0]=CPoint(5,3);
	intV[1]=CPoint(2,9);
	intV[2]=CPoint(1,1);
	intV[3]=CPoint(2,5);
	intV[4]=CPoint(3,7);
	intV[5]=CPoint(4,3);
	PrintVector(intV,"정렬 전");
	
	sort(intV.begin(),intV.end());
	PrintVector(intV,"정렬 후");
	
	return 0;
}
