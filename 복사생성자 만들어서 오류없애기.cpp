#include <iostream>
#include <cstring>

using namespace std;

class CString{
	private :
		int len;
		char *str;
		
	public :
		CString(char *s){
			len=strlen(s);
			str=new char[len+1];
			strcpy(str,s);
		}
		CString(const CString &string){
			len=string.len;
			str=new char[len+1];
			strcpy(str,string.str);
		}
		void Print(){
			cout<<str<<endl;
		}
		
			
}; 

void Showstring(CString &a)
{
	a.Print();
}


int main(void)
{
	CString str1="C++ is programming";
	CString str2(str1);
	
	str1.Print();
	Showstring(str2);
	return 0;
}
