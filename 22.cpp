//0 0 0 0 0
//1 1 1 1 1
//0 0 0 0 0
//1 1 1 1 1
//0 0 0 0 0
#include<iostream>
using namespace std;
int main(){
	int n=5;
	
	for(int i=0;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<(i%2)<<" ";
			
		}
		cout<<endl;
	}
	return 0;
}
			
		