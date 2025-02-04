//2
//4 6
//8 10 12
//14 16 18 20
//22 24 26 28 30


#include<iostream>
using namespace std;
int main(){
	int n=5,x=2;
	
	for(int i=n;i>=1;i--)
	{
	for(int j=n;j>=i;j--)
	{
	cout<<x<<" ";
	x+=2;
}
cout<<endl;
}
return 0;	
}

