#include<bits/stdc++.h>
using namespace std;
void disp(vector<int>& v1){
		for(int i=0;i<v1.size();i++)
		cout<<v1[i]<<" ";
	cout<<endl; 
}
int main()
{
	vector<int> v1;
	for(int i=0;i<10;i++)v1.push_back(i);
	cout<<v1.size()<<endl;
	cout<<v1[7]<<endl;//µÚ7¸öÔªËØ
	v1[3]++;
	disp(v1);
	v1.resize(7);//
	disp(v1);
	int key=4;
	int pos=find(v1.begin(),v1.end(),key) - v1.begin();
	if(pos==v1.size()){
		cout<<"not found!"<<endl;
	}else
	{
		cout<<"pos="<<pos<<endl;
	}
	v1.resize(unique(v1.begin(),v1.end())-v1.begin());
	disp(v1);
	return 0;
}
