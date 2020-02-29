#include <iostream>
using namespace std;

int main(void)
{
	int a,b, input;
	cin>>a>>b;
	
	int A[a][b];
	int B[a][b]; 
	
	for(int i=0; i<a; i++)
	{
		for(int j=0; j<b; j++)
		{
			cin>>input;
			A[i][j]=input;
		}
	}
	
	for(int i=0; i<a; i++)
	{
		for(int j=0; j<b; j++)
		{
			cin>>input;
			B[i][j]=input;
		}
	}
	
	for(int i=0; i<a; i++)
	{
		for(int j=0; j<b; j++)
		{
			cout<<A[i][j]+B[i][j]<<" ";
		}
		cout<<endl;
	}
	

	return 0;
}
