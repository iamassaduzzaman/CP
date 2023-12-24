#include<bits/stdc++.h>
using namespace std;

struct Set {
  vector<int> v;

  int find_index(int x) { // O(n), returns the index of x if found, otherwise returns -1
    auto it = find(v.begin(), v.end(), x);
    if (it == v.end()) {
      return -1;
    }
    return it - v.begin();
  }

  void insert(int x) { // O(n log(n))
    if (find_index(x) != -1) { // if x is already in the set then don't insert it again, because the set should be unique
      return;
    }
    v.push_back(x);
    sort(v.begin(), v.end()); // the set should be sorted
  }

  void erase(int x) { // O(n)
    if (find_index(x) == -1) { // if x is not in the set then nothing to erase
      return;
    }
    v.erase(find(v.begin(), v.end(), x));
  }

  int size() { // O(1)
    return v.size();
  }

  bool empty() { // O(1)
    return v.empty();
  }
};

int32_t main() {
  Set s;
  s.insert(10);
  s.insert(30);
  s.insert(20);
  cout << s.find_index(10) << '\n'; // Output: 0
  cout << s.find_index(30) << '\n'; // Output: 2
  cout << s.find_index(20) << '\n'; // Output: 1
  cout << s.find_index(40) << '\n'; // Output: -1
  s.erase(10);
  cout << s.find_index(10) << '\n'; // Output: -1
  cout << s.find_index(30) << '\n'; // Output: 1
  cout << s.find_index(20) << '\n'; // Output: 0
  cout << s.find_index(40) << '\n'; // Output: -1
  s.erase(30);
  cout << s.find_index(10) << '\n'; // Output: -1
  cout << s.find_index(30) << '\n'; // Output: -1
  cout << s.find_index(20) << '\n'; // Output: 0
  cout << s.find_index(40) << '\n'; // Output: -1
  s.erase(20);
  cout << s.find_index(10) << '\n'; // Output: -1
  cout << s.find_index(30) << '\n'; // Output: -1
  cout << s.find_index(20) << '\n'; // Output: -1
  cout << s.find_index(40) << '\n'; // Output: -1
  return 0;
}