#include <iostream>
using namespace std;

template <class T>
class CPoint{
	private :
		T x,y;
	public :
		CPoint(T a=0, T b=0): x(a),y(b){
		}	
		void Move(T a,T b);
		
		template <class T2>
		friend ostream& operator<<(ostream& out,CPoint<T2> &Po);
		
};

template <class T>
void CPoint<T>::Move(T a,T b){
	x+=a;
	y+=b;
}

template <class T2>
ostream& operator<<(ostream& out,CPoint<T2> &Po)
{
	out<<Po.x<<","<<Po.y<<endl;
	return out;
}



int main(void)
{
	CPoint<int> P1(1,2);
	CPoint<double> P2(1.1,2.2);
	
	cout<<P1<<P2<<"이거 되는거임?"<<endl; 
	
	return 0;
}
