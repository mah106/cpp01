#include <iostream>
using namespace std;

class time
{
    private:
    int hours;
    int minute;
    public:
    time(int h,int m):hours(h),minute(m){};
    int gethour()
        {
            return  hours;
        }
        int getminute()
        {
            return minute;
        }

   
   time operator +(const time& other)const {

      int totalminute=hours*60 + minute +other.hours*60 + other.minute;

     int hours=totalminute/60;

     int minute=totalminute%60;

     return time(hours,minute);

    }

    
};

time add(const time& t1,const time& t2)
{
    return t1 + t2;
}
int main()
{
    time t1(56,44);
    time t2(8,58);
    time t3=add(t1,t2);
    cout<<t3.gethour()<<" hours and "<<t3.getminute()<<" minutes"<<endl;
    
}
