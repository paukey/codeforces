#include <iostream>
using namespace std;
int a[5][5];
int c,r;


int main()
{
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>a[i][j];
			if(a[i][j]==1){
				c=i;
				r=j;
				}				
			}
		}
	cout<<abs(c-2)+abs(r-2);
	return 0;
}

