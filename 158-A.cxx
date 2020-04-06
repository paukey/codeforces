#include <iostream>
using namespace std;
int n,k,count;
int m[101];


int main()
{
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>m[i];
		
		}
	for(int i=0;i<n;i++){
		if(m[i]>=m[k]&&m[i]>0)
			count++;
		}
	cout<<count;
	
	return 0;
}

