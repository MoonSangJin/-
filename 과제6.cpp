#include <iostream>
using namespace std;

class Complex{
 private :
  double x,y;
  static int count;
 public :
  Complex(double a=0,double b=0) : x(a),y(b){
  	count++;
  	cout << a << b << "create" << endl;
  } 
  ~Complex(){count--;
  	cout << x << y << "delete" << endl;
  }
  
  
  Complex Add(const Complex &a)// �Ű������� Complex &a���Ѱ� &���� com2�� ���� ����Ǿ� ���� ��������� ����ϴ� ��ġ�������� ����ϱ� &���ؼ� ���� ��ü�� ���� ���ϴ�.  
  {
  	
 	cout << "before return" << endl;
 	
  	return (Complex (x+a.x,y+a.y));
  }
  
  Complex Mul(const Complex &a)
  {
	return (Complex((a.x*x)-(a.y*y),(a.x*y)+(a.y)*x));
  }
  
  void Print(){
   cout<<"("<<x<<","<<y<<")";
  }
  
  static int GetCount(){return count;
  }
  
};

int Complex::count=0;

int main()
{
	
 Complex com1(1.0,2.0);
 
 Complex com2(3.0,4.0);
 Complex com3;
 
 com1.Print(); cout<<endl;
 com2.Print(); cout<<endl;
 com3=com1.Add(com2);  // 46

 com2.Print();
 cout<<endl;
 com3.Print();
 cout<<endl;
 
 Complex *pcom4=new Complex; //00
 *pcom4=com1.Mul(com2); // -510
 pcom4->Print();
 cout<<endl;
 
 cout<<"#complex numbers = "<<com1.GetCount()<<endl;
 delete pcom4;
 

 cout<<"#complex numbers = "<<com1.GetCount()<<endl;
 
 
 
} 
