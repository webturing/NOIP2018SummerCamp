#include<iostream>
using namespace std;
bool primer(int n){
	if(n<=1)return false;
	if(n==2)return true;
	if(n%2==0)return false;
	for(int c=3;c*c<=n;c+=2)
		if(n%c==0)
			return false;	
	return true;			
}
int main(){
	//int n=2000;
	for(int n=6;n<=2000;n+=2){
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

