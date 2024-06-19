#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << "Hello World!\n";
  map<string, int> marks;
  marks["harryy"] = 50;
  marks["parth"] = 10;

  // insert method;
  marks.insert({{"shailesh", 100}, {"umang", 1}});

  map<string, int>::iterator itr;
  for (itr = marks.begin(); itr != marks.end(); itr++) {
    cout << (*itr).first << " " << (*itr).second << endl;
  }

  cout << "the size is " << marks.size() << endl;
  cout << "the maxsize is " << marks.max_size() << endl;
  cout << "the empty is " << marks.empty() << endl;
}