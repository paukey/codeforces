#include <iostream>
using namespace std;
int n;
string s;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s;
		if(s.size()>10)
		cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
		else cout<<s<<endl;
	
		}
	
	return 0;
}

