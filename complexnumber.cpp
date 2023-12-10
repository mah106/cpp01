#include <iostream>
using namespace std;

class Complex 
{ public:
int real;
int img;

Complex(int r=0,int i=0)
{
    real=r;
    img=i;
    
}

friend ostream & operator<<(ostream & o,Complex c1);

};
ostream & operator<<(ostream & o,Complex c1)
{
o<<c1.real<< " + i"<<c1.img<<endl;
return o;
}


int main()
{
    Complex c1(29,39);
    Complex c2(5,6);
    Complex c3;
    cout<<c1<<" "<<c2<<" "<<c3;
    
    
}
