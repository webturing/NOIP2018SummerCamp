#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={1,2,2,2,3,4,5,7,8};
	int n=sizeof(a)/sizeof(a[0]);
	int key=2;
//	int left=lower_bound(a,a+n,key)-a;
//	cout<<left<<endl;
	int right=upper_bound(a,a+n,key)-a;
	cout<<right<<endl;

	
	return 0;
	
}
