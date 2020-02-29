#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class CPoint{
 private :
  int x,y;

 public :
  CPoint(int a=0, int b=0) : x(a), y(b) {}
  friend ostream &operator<<(ostream &out, vector<CPoint>& intV);
  friend bool operator<(const CPoint &Po1, const CPoint &Po2);
};

ostream &operator<<(ostream& out, vector<CPoint>& intV)
{
        vector<CPoint>::iterator iter;
        for(iter=intV.begin(); iter!=intV.end(); iter++)
        {
                out<<"("<<iter->x<<","<<iter->y<<") ";
        }
                cout<<endl;
                return out;
}

bool operator<(const CPoint &Po1, const CPoint &Po2) // y��ǥ ������ ����,�� y��                                                       ǥ ������ x��ǥ ������ ����
{
 if (Po1.y==Po2.y)
  {
    if(Po1.x<Po2.x)
    return true;
    else
    return false;
  }
 else if(Po1.y<Po2.y)
  return true;
 else
  return false;

}


int main(void)
{
 vector<CPoint> intV(5);

 intV[0]=CPoint(5,3);
 intV[1]=CPoint(2,9);
 intV[2]=CPoint(1,1);
 intV[3]=CPoint(2,5);
 intV[4]=CPoint(3,7);
 cout<<">> ���� �� : "<<intV;

 sort(intV.begin(), intV.end());

 cout<<">> ���� �� : "<<intV;

 return 0;
}



