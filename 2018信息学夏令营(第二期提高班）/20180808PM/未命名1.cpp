#include<bits/stdc++.h>
using namespace std;
int main() {
	priority_queue<int> q;//´ó¶¥¶Ñ 
//	priority_queue<int, vector<int>, greater<int> > q;//Ð¡¶¥¶Ñ 
	vector<int> v(10);
	for(int i=0; i<v.size(); i++) {
		v[i]=rand()%100;
	}
	copy(v.begin(),v.end(),ostream_iterator<int>(cout," "));
	cout<<endl;
	for(int i=0; i<v.size(); i++) {
		q.push(v[i]);
	}
	priority_queue<int> q2(q);//´ó¶¥¶Ñ 
	while(q.size()) {
		cout<<q.top()<<endl;
		q.pop();
	}
	cout<<q.size()<<endl;
	cout<<q2.size()<<endl;
	return 0;
}
