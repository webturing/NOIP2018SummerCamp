#include<iostream>
using namespace std;
bool primer(int n){	
	for(int c=2;c<=n-1;c++)
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

