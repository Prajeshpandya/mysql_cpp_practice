// Time complexity: O(N) // N is the size of the set.

#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &nums) {
  set<int> seen;
  for (int i = 0; i<nums.size(); i++) {
    if (seen.count(nums[i])) {
      cout << i <<endl;
      return nums[i];
    }

    seen.insert(nums[i]);
  }
  return -1;
}

int main() {
  cout << "Hello World!\n";
  set<char> a;
  // a.insert('G');

  // for (auto x : a) {
  //   cout << x << endl;
  // }
  // cout << a.count('G');
  vector<int> nums = {1, 3, 4, 2, 2};
  int duplicate = findDuplicate(nums);
  cout<<duplicate;
  return 0;
}