#include <bits/stdc++.h>
using namespace std;

// void : it does not return anything;
// return:
// parameterizer:
// non parameterizer:

// void printName(string name){
//   cout << "Hello World!\n" << name;
// }

// pass by value:
// void doSomething(int num) {
//   cout << num << endl;
//   num += 5;
//   cout << num << endl;

//   num += 5;
//   cout << num << endl;
// }

// int main() {
//   int num = 5;
//   doSomething(num); //here send the copy of the 5, not original value has
//   been changed.. cout << num << endl;
// }


// pass by reference:
// void doSomething(string &name) {   //it take the address & original value of
// paramter;
//    name[0] = 't';
//   cout << name << endl;
// }

// int main() {
//   string name = "Parth";
//   doSomething(name); //here send the copy of the 5, not original value has
//   been changed.. cout << name << endl;       //it return tarth..
// }

// int main() {

//   int arr[5];

//   for(int i = 0; i<=4; i++){
//     cin >> arr[i];
//   }

//   for(int i = 0; i<=4; i++){
//     cout << arr[i] << " ";
//   }

// }

void doSomething(int arr[], int n) {
  // which means changes made to the array within the function will affect the
  // original array. This behavior is similar to call-by-reference.
  arr[0] += 100;
  cout << "Value inside function " << arr[0] << endl;
}

int main() {
  int n = 5;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  doSomething(arr, n);

  cout << "Value inside main : " << arr[0] << endl;
}
