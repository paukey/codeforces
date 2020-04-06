#include <iostream>
using namespace std;
int n,ans;
char a[20];

int main()
{
	cin>>n;
	while(n--){
		cin>>a;
		if(a[0]=='T') ans+=4;
		if(a[0]=='C') ans+=6;
		if(a[0]=='O') ans+=8;
		if(a[0]=='D') ans+=12;
		if(a[0]=='I') ans+=20;
		
		}
	cout<<ans;
	
	return 0;
}

