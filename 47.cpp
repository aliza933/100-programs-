//1
//3 5
//7 9 11
//13 15 17 19
//21 23 25 27 29


#include<iostream>
using namespace std;
int main(){
	int n=5,x=1;
	
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

