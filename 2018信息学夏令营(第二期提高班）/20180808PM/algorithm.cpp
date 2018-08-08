#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={1,2,2,2,3,4,5,7,8};
	int n=sizeof(a)/sizeof(a[0]);
	int key=4;
	int pos=find(a,a+n,key)-a;
	if(pos==n){
		cout<<"not found"<<endl;
	}else{
		cout<<pos<<endl;
	}
	if(binary_search(a,a+n,key)){
			cout<<"find"<<endl;
	}
	
	return 0;
	
}
