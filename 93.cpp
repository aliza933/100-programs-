//E F G H I
//D E F G
//C D E
//B C
//A
#include<iostream>
using namespace std;
int main(){
	int n=5;
	for(int i=1;i<=n;i++)
	{
	for(int j=1;j<=n-1+1;j++)
	{
	cout<<(char)(n-j+1+64)<<" ";
}
cout<<endl;
}
return 0;
	
}