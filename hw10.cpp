#include "shape.h"
#include <iostream>
using namespace std;

int main(void)
{
	CShape *sptr=new CCircle(2,3,1);
	CShape *sptr2=new CRect(2,3,4,5);
	sptr->Move(10,10);
	sptr->Print();
	sptr2->Move(100,100);
	sptr2->Print();
	return 0;
}
