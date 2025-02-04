//1
//3 5
//5 7 9
//7 9 11 13
//9 11 13 15 17


#include<iostream>
using namespace std;
int main(){
	int i,j,t;
	
	
	for(i=1;i<=5;i++)
	{
	t=i-1;		
	for(j=1;j<=i;j++)
	{
		cout<<t+i<<" ";
		t+=2;
		
	}
	cout<<endl;
}
	
		
return 0;
}