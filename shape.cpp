#include "shape.h"
#include <iostream>
using namespace std;

void CShape::Move(float a, float b){x+=a; y+=b;
}
void CShape::Print(){
	cout<<"�߽�=("<<x<<","<<y<<")"<<endl;
}
void CCircle::Print(){
	cout<<"���߽�=("<<x<<","<<y<<")"<<endl;
}
void CRect::Print(){
	cout<<"���簢���߽�=("<<x<<","<<y<<")����="<<Garo<<" ����="<<Sero<<endl; 
}
