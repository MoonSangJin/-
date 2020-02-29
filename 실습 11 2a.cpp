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
	friend ostream& operator<<(ostream &out, vector<CPoint>& intV);
	friend bool operator<(const CPoint&a, const CPoint&b);		
};
ostream& operator<<(ostream &out, vector<CPoint>& intV)
{
	vector<CPoint>::iterator iter;
	
	for(iter=intV.begin(); iter!=intV.end(); iter++)
		out<<iter->x<<","<<iter->y<<endl;
	cout<<endl;
	return out;	
}

/*void PrintVector(vector<CPoint> intV, char *name)
{
	vector<CPoint>::iterator iter;
	cout<<">>"<<name<<" : ";
	for(iter=intV.begin(); iter!=intV.end(); iter++)
		cout<<*iter<<" ";
	cout<<endl;
}
*/
bool operator<(const CPoint&a, const CPoint&b)
{
	return (a.x+a.y<b.x+b.y) ? true : false;
}

int main(void)
{
	vector<CPoint> intV(5);
	
	intV[0]=CPoint(5,3);
	intV[1]=CPoint(2,9);
	intV[2]=CPoint(1,1);
	intV[3]=CPoint(2,5);
	intV[4]=CPoint(3,7);
	
	cout<<"정렬 전"<<endl<<intV;
	sort(intV.begin(), intV.end());
	cout<<"정렬 후"<<endl<<intV;
	
	return 0;
}
