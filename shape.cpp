#include "shape.h"
#include <iostream>
using namespace std;

void CShape::Move(float a, float b){x+=a; y+=b;
}
void CShape::Print(){
	cout<<"중심=("<<x<<","<<y<<")"<<endl;
}
void CCircle::Print(){
	cout<<"원중심=("<<x<<","<<y<<")"<<endl;
}
void CRect::Print(){
	cout<<"직사각형중심=("<<x<<","<<y<<")가로="<<Garo<<" 세로="<<Sero<<endl; 
}
