#include <bits/stdc++.h>
using namespace std;

template <class T>
  void display (vector <T> &v){
    for(int i=0; i < v.size() ; i++){
      cout << v[i]<<" ";
      // cout << v.at(i) << " " ; 
    }
  }

int main() {
  vector<int> v; //zero length vector 
  // vector<char> v2(5); //4 length vector 
  int value;
  int size;
  cin>>size;
  
  for(int i = 0 ; i <size; i++) {
   cin >> value; 
    v.push_back(value);
  }
  
  // v.pop_back(); //remove last element
  // vector<int> :: iterator itr = v.begin();
  // v.insert(itr,5, 56); //add before zeroth index..

  sort(v.begin(), v.end()); //sort the vector

  for (auto x : v) 
    cout << x << " "; 
  // display<int>(v);
  
  return 0;
}