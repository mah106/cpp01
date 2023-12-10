#include <iostream>
#include<math.h>
using namespace std;

class Base
{
  public:
  Base()
  {cout<<"default of base"<<endl;
  }
  Base(int a)
  {
    cout<<"parem of Base "<<a<<endl;
  }
};
class Derived:public Base
{
  public:
  Derived()
  {
    cout<<"default of Derived"<<endl;
  }
  Derived(int x)
  {
    cout<<"parem of Derived "<<x<<endl;
  }
  Derived(int a,int x):Base(a)
  {
    cout<<"parem of Derived "<<x<<endl;
  }
};
int main()
{
  Derived d;
  Derived d1(3);
  Derived d2(28,47);
}