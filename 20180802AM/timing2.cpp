#include<iostream>
#include<ctime>
using namespace std;
typedef long long LL;
bool primer(int n){	
	for(int c=2;c*c<=n;c++)
		if(n%c==0)
			return false;	
	return true;			
}
void myprog(){
	for(int n=6;n<=2000000;n+=2){
		bool flag=false;
		for(int p=3;p<=n/2;p+=2){
		if(primer(p)&&primer(n-p)){
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
	 
	 myprog();
	 
	 LL end=clock();
	 cout<<1.0*(end-start)/CLOCKS_PER_SEC<<endl;
	
}
