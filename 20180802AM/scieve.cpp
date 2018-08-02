#include<iostream>
using namespace std;
const int N=100;
int p[N+1];
void fill()
{
	for(int i=1;i<=N;i++)p[i]=1;
	//»®È¥ 01
	p[0]=p[1]=0;
	for(int i=2;i*i<=N;i++)
	{
		if(p[i]==1)
		for(int j=2*i;j<=N;j+=i)p[j]=0;
	 } 
}
int main()
{
	fill();
	for(int i=0;i<=N;i++)
	if(p[i]==1)
		cout<<i<<" ";
	cout<<endl;		
}
