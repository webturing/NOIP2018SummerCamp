#include<bits/stdc++.h>
using namespace std;
void disp(vector<int>& v) {
	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<" ";
	cout<<endl;
}
int main() {
	vector<int> v1(3);
	vector<int> v2(3,0);
	vector<int> v3 {1,2,3,4,5,};
	disp(v1);
	disp(v2);
	disp(v3);
//	v3.erase(v3.begin()+2);
v3.erase(v3.begin(),v3.begin()+2);
	disp(v3);
	
	return 0;
}
