#include<iostream>
using namespace std;
bool primer(int n){
	int flag=1;
	for(int c=2;c<=n-1;c++){
		if(n%c==0)
		{
			flag=0;
			break;	
		}
	}
	return flag;
}

int main()
{
	int n=1000000007;
	
	if(primer(n))
		cout<<"It is a primer."<<endl;
	else 
		cout<<"It is a compositor"<<endl;
	return 0;
}
