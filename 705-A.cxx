#include <iostream>
using namespace std;
int n;


int main()
{
	cin>>n;
	cout<<"I hate ";
	for(int i=1;i<=n;i++){
		if(i==1) cout<<"";
		else if(i%2==0) cout<<"that I love ";
		else cout<<"that I hate ";
		
		}
	cout<<"it"<<endl;
	return 0;
}

