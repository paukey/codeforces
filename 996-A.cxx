#include <iostream>
using namespace std;
int n,ans;


int main()
{
	cin>>n;
	if(n<5) ans=n/1;
	if(n>=5&&n<10) ans=(n-5)/1+1;
	if(n>=10&&n<20) ans=(n/10)/1+(n/5)%2+(n%5);
	if(n>=20&&n<100) ans=n/20+(n/10)%2+(n/5)%2+(n%5);
	if(n>=100) ans=n/100+(n/20)%5+(n/10)%2+(n/5)%2+(n%5);
	
	
	cout<<ans;
	return 0;
}

