

//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *
#include <iostream>
using namespace std;
 class rectangle
 {
  private:
  int length;
  int breadth;
  public:
  rectangle(int l=0,int b=0)
  {
    setLength(l);
    setBreadth(b);
  }
  void setLength(int l)
  {
    if (length>0)
      length=l;
      else length=1;
  }
  void setBreadth(int b)
  {
    if(breadth>0)
    breadth=b;
    else breadth=1;
  }
  int getLength()
  {
    return length;
  }
  int getBreadth()
  {
    return breadth;
  }
  int Area()
  {
    return length*breadth;
  }
  int perimeter()
  {
    return 2*(length +breadth);
  }

 };
 class Cuboid:public rectangle
 {
  private:
  int hieght;
  public:
  Cuboid(int h=0,int l=0,int b=0):rectangle(l,b)
  {
   
   setHieght(h);
    
    
  }
  void setHieght(int h)
  {
    if(hieght>0)
    hieght=h;
    else hieght=1;

  }
 int  getHieght()
 {
  return hieght;
 }

  int Volume()
  {
    return getLength()*getBreadth()*hieght;
  }
 };
  
  int main()
  {
    Cuboid b(4,7,8);
    cout<<"volume of Cuboid is "<<b.Volume();
    return 0;
  }
