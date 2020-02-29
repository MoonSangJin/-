//컴퓨터공학과 2학년
//B611061 문상진
#include <iostream>
using namespace std;

struct Point
{
	int x;
	int y;
};

Point **make2darray(int r, int c)
{
	int i,j;
	Point **p;
	
	p=new Point*[r];
	
	for(i=0; i<r; i++)
	{
		p[i]=new Point[c];
	}
	
	for (i=0; i<r; i++)
	{
		for (j=0; j<c; j++)
		{
			p[i][j].x=i+j;
			p[i][j].y=2*(i+j);
		}
	}
	
	return p;
	
}

void print2darray(int r, int c, Point **p)
{
        int i, j;
        for (i = 0; i < r; i++)
        {
                for (j = 0; j < c; j++)
                {
                        cout << '('<< p[i][j].x <<',' << p[i][j].y << ')' << "\t";
                }
                cout << endl;
        }
}

void delete2darray(int r, Point **p)
{
        int i, j;
        for (i = 0; i < r; i++)
        	delete[]p[i];
		
    delete[]p;
    
}

int main()
{
        Point **p;
        p = make2darray(4, 5);
        print2darray(4, 5, p);
        delete2darray(4, p);
		cout<<endl;        

        print2darray(4,5,p);
        
        return 0;
}

