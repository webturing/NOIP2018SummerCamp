#include<iostream>
#include<ctime>
using namespace std;
typedef long long LL;
const int N=20000000;
int primer[N+1];
void fill(){
	for(int i=1;i<=N;i++)primer[i]=1;
	primer[0]=primer[1]=0;
	for(int i=2;i*i<=N;i++)
	if(primer[i])for(int j=i*i;j<=N;j+=i)primer[j]=0;
}
void myprog(){
	for(int n=6;n<=N;n+=2){
		bool flag=false;
		for(int p=3;p<=n/2;p+=2){
		if(primer[p]&&primer[n-p]){
				flag=true;
				break;
			}
			
		}
		if(flag==false){
			cout<<"Congratulations!"<<endl;
		}
	
	}
}
int main()
{
	 LL start=clock();
	 fill();
	 myprog();
	 
	 LL end=clock();
	 cout<<1.0*(end-start)/CLOCKS_PER_SEC<<endl;
	
}
