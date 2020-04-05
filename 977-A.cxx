#include <iostream>
using namespace std;
long long n;
int k;

int main()
{
	cin>>n>>k;
	for(int i =1;i<=k;i++){
		if(n%10==0) n=n/10;
		else n=n-1;
		
		}
	cout<<n;
	return 0;
}

