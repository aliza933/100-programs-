//1
//2 4
//3 6 9
//4 8 12 16
//5 10 15 20 25


#include<iostream>
using namespace std;
int main(){
	int n=5;
	
	for(int i=1;i<=n;i++)
	{
	for(int j=1;j<=i;j++)
	{
	cout<<(i*j)<<" ";
	
}
cout<<endl;
}
return 0;	
}
