#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class car{
  public:
  string name;
  string model;
  int year;
  car(string x,string y,int z)
  {
    name = x;
    model = y;
    year = z;
  }
};

int main()
{
    // Create Car objects and call the constructor with different values
  car obj("toyota","x52",2);
  cout << "name-> "<<obj.name << " " << endl;
  cout <<  "model-> "<<obj.model << endl;
  cout << "year-> " <<obj.year << endl;

  return 0;
}