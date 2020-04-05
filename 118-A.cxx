#include <iostream>
using namespace std;
char s;


int main()
{
	while(cin>>s){
		s=tolower(s);
		if(!(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='y'))
		{
		cout<<"."<<s;
			}
		}
	
	return 0;
}

