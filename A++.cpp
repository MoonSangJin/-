#include <iostream>
using namespace std;

struct Point
{
	int x,y;
};

Point **make2darray(int r, int c)
{
	Point **p;
	p=new Point*[r];
	
	for(int i=0; i<r; i++)
	{
		p[i]=new Point[c];
	}
	
	for(int i=0; i<r; i++){
	
		for(int j=0; j<c; j++){
			p[i][j].x=i+j;
			p[i][j].y=2*(i+j);
		}
	}
	
	return p;
}

void print2darray(int r, int c, Point **p)
{
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<5; j++)
		{
			cout<<"("<<p[i][j].x<<" "<<p[i][j].y<<")"<<"\t";
		}
		cout<<endl;
	}
}

void delete2darray(int r, Point **p)
{
	for(int i=0; i<4; i++)
	{
		delete[]p[i];
	}
	delete[]p;
}

int main(void)
{
	Point **p;
	p=make2darray(4,5);
	print2darray(4,5,p);
	delete2darray(4,p);
	
	return 0;
}
