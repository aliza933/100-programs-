//1
//6 2
//10 7 3
//13 11 8 4
//15 14 12 9 5
#include<iostream>
using namespace std;
int main(){
	int n=5;
	int x=1,y,t;
	for(int i=n;i>=1;i--)
	{
		y=i;
		t=x;
	for(int j=n;j>=i;j--)
	{
	cout<<t<<" ";
	t=t-y;
	y++;
}
x=x+i;
cout<<endl;
}
return 0;
	
	
}