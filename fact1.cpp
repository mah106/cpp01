#include <iostream>
using namespace std;
int main()
{
int n;
char c;
cin>>n;
cin>>c;
void *ptr=&n;
void *ptr1=&c;
int* intptr=static_cast<int*>(ptr);
char*charptr1=static_cast<char*>(ptr1);

if(*intptr>0){
    cout<<"The number is positive "<<endl;
} else if(*intptr<0)
{
    cout<<"The number is negative "<<endl;
}
else cout<<"The number is zero "<<endl;
if (*charptr1>=65 &&*charptr1<=122)
{
    cout<<"The character is an alphabet "<<endl;
} else if(*charptr1>=48 &&*charptr1<=57)
{
    cout<<"The character is an number "<<endl;
} else cout<<" The character is not a number or an alphabet "<<endl;
return 0;
}
