#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// ** It is same as just i do code by strivers method**
// ** To define a function outside the class definition, you have to declare it inside the class and then define it outside of the class. This is done by specifiying the name of the class, followed the scope resolution :: operator, followed by the name of the function:**

class Myclass{
  public:
    void myfunction();
    // void myMethod();
};

 void Myclass::myfunction(){
    cout << "This is class method example by editing outside the class" << endl;
 }

int main()
{
    Myclass obj;
    obj.myfunction();
    return 0;
}