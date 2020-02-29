#include <iostream>
using namespace std;

int main(void)
{
	int a[9]={0};
	int max=0;
	int memory;
		
	for(int i=0; i<9; i++)
	{
		cin>>a[i];	
	}

	
	for(int i=0; i<9; i++) // 최대값 구하는 반복문 
	{
		if(max<a[i])
		{
			max=a[i];
			memory=i;
		}
	}
	
	cout<<max<<endl<<memory+1;
}
