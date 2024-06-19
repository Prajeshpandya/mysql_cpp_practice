#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Hello World!\n";

    int marks;
    cin >> marks;

    if (marks <= 22) {
        cout << "F";
    } else if (marks <= 40) {
        cout << "E";
    } else if (marks <= 60) {
        cout << "B";
    } else {
        cout << "A";
    }

    return 0;
}

