#include <iostream>
#include <math.h>
using namespace std;
int n,m;
long long a;
long long result;

int main()
{
	cin>>n>>m>>a;
	result=(n/a+(n%a>0))*(m/a+(m%a>0));
	//result=n/a;
	cout<< result<<endl;
	
	return 0;
}

