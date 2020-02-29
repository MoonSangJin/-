#include <iostream>
using namespace std;

void Insert(const int&e,int*a,int i)
{
	a[0]=e;
	while(e<a[i])
	{
		a[i+1]=a[i];
		i--;
	}
	a[i+1]=e;
}

int main()
{	 int *a=new int[5];
	 int j=5;
	for(int i=0; i<5; i++){
		a[i]=j;
		j--;
	}
	Insert(a[0],a,5);
	for(int i=0; i<5; i++){
		cout<<a[i]<<endl;
	}
}
