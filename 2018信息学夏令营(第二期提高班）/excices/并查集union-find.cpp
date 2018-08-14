#include <bits/stdc++.h>
using namespace std;
const int N = 10;
struct DisjoinSet {
  int* parent;
  int _size;
  DisjoinSet(int n = 10) {
    _size = n;
    parent = new int[n];
    fill(parent, parent + n, -1);
  }
  ~DisjoinSet() { delete[] parent; }
  friend ostream& operator<<(ostream& os, const DisjoinSet& ds) {
    for (int i = 0; i < ds._size; i++) os << i << "\t";
    os << endl;
    copy(ds.parent, ds.parent + ds._size, ostream_iterator<int>(os, "\t"));
    os << "Total=" << ds.size() << endl;

    return os;
  }
  inline int Find(int x) {
    if (parent[x] < 0) return x;
    return parent[x] = Find(parent[x]);
  }
  inline void Union(int root1, int root2) {
    if (root1 == root2) return;
    if (parent[root1] > parent[root2]) {
      parent[root2] += parent[root1];
      parent[root1] = root2;
    } else {
      parent[root1] += parent[root2];
      parent[root2] = root1;
    }
  }
  inline int size() const {
    return count_if(parent, parent + _size, [](int x)->bool { return x < 0; });
  }
  void debug() {
    map<int, set<int>> mp;
    for (int i = 0; i < _size; i++) mp[Find(i)].insert(i);
    cout << "{";
    for (auto e : mp) {
      cout << "{";
      copy(e.second.begin(), e.second.end(), ostream_iterator<int>(cout, " "));
      cout << "},";
    }
    cout << "}" << endl;
  }
};
int main() {
  DisjoinSet ds;
  for (int x = 0; x < 10; x++) {
    int i = rand() % ds._size;
    int j = rand() % ds._size;
    ds.Union(ds.Find(i), ds.Find(j));
    cout << i << " Union " << j << endl;
    ds.debug();
  }
  return 0;
}