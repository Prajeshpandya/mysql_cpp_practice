// Inheritance..
// #include <bits/stdc++.h>
// using namespace std;

// class human {
//     public: int age;
// };

// class parth :public human{
//     public: float height; 
// };


// int main() {
//   cout << "Hello World!\n";
//   parth p;
//   p.age = 20;
//   p.height = 5.5;
//   cout << p.age << endl << p.height << endl;
// }

// Incapsulation..
// #include <bits/stdc++.h>
// using namespace std;

// class human {
//     private: int age;
// private : float agebytwo;

//     public: void setAge(int value){
//       age = value;
//       agebytwo = age/2;
//     }
// };

// int main() {
//   cout << "Hello World!\n";
//   human p;
//   p.setAge(20);
// return 0;}

//Abstraction
// is the act of hiding the implementation details of an object from the user. This allows the user to focus on how the object works, without having to worry about how it is implemented. For example, a user of a car does not need to know how the engine works in order to drive the car.

// Encapsulation
// is the act of bundling together the data and methods of an object into a single unit. This makes it easier to manage the object and to prevent the data from being accidentally corrupted. For example, a car can be encapsulated as an object with properties such as make, model, and color. The car object would also have methods such as drive() and stop().

// Polimorphism
// static(compile time) : function obverloading, operator overloading 
// dynamic (run time) : method overriding,

// method overloading: same method called with different parameters  and diffrent typess , do No. of argument change or types change for overloading

#include <bits/stdc++.h>

using namespace std;

class parant {
  
    public: void print(){
      cout << "print parant class" << endl;
    }
    public: void print2(){
      cout << "print2 parant class" << endl;
    }
};

class Child : public parant {

    public: void print(){
      cout << "print child class" << endl;
    }
};


int main() {
  cout << "Hello World!\n";
  Child c;
  c.print();   //method overrinig;
  c.print2();
  
return 0;}
