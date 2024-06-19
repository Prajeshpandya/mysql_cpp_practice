#include <bits/stdc++.h>
using namespace std;


int main() {
  cout << "Hello World!\n";

  char day;
  cin>>day;

  switch(day){
    case 'm':{
      cout << "Monday" ;
      break;
    }
    case 'w':{
      cout << "Wednesday" ;
      break;
    }
    case 't':{
      cout << "Tuesday" ;
      break;
    }
    default:{
      cout << "Looking forward to the Weekend" ;
      break;
    }
  }
  
  
}