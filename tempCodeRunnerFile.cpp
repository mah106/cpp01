#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;

// int main()
// {
//   int A [2][3]={{2,4,6},{3,2,5}};
//   int B [2][3]={{4,5,7},{7,8,9}};
//   int C [2][3];
//   for(int i=0;i<2;i++){
//     for(int j=0;j<3;j++)
//     {
//       C [i][j]=A[i][j] -B [i][j];
      
//     }
//     cout<<endl;
  
//    for(int i=0;i<2;i++){
//     for(int j=0;j<3;j++)
//     {
      
//       cout<<C[i][j]<<" ";
//     }
//     cout<<endl;
// }
//   }
// }










//program for finding average of arrays


// int main()
// {
//   int n,i;
//   float num[100],sum=0.0,avg;
//   cout<<"enter n:\n";
//   cin>>n;
//   for(i=0;i<n;i++)
//   {
//     cout<<i +1<<" enter number:\n";
//     cin>>num[i];
//     sum +=num[i];
//   }
//   avg =sum/n;
//   cout<<"average of numbers are "<<avg<<endl;
// }






// to swap the value of two variable

// int main()
// {
//   int a;
//   cout<<"enter a:\n";
//   cin>>a;
//   int b;
//   cout<<"enter b:\n";
//   cin>>b;
//   b=(a * b)/(a=b);
//   cout<<"a ="<<a<<" "<<endl<<"b ="<<b;
// }



//pointers declaration,initialization and dereferencing
// int main()
// {
//   int x=10;
//   int *p=&x;
//   cout<<x<<endl;
//   cout<<&x<<endl;
//   cout<<&p<<endl;
//   cout<<*p<<endl;
//   cout<<p<<endl;
// }






// int main()
// {
//   int a[5]={3,7,59,4,8};
//   int *p=a;
//   cout<<p<<endl;
//   p++;
//   cout<<p<<endl;
//   p--;
//   cout<<p<<endl;
//   p=p+3;
//   cout<<p<<endl;
//   p=p-3;
//   cout<<p<<endl;

// }

// program to take input as username and password and print username and password
// int main()
// {
//   string username,password;
//   cin>> username  >> password;
// cout<<username<<endl<<password<<endl;
//     return 0;
// }

// int main()
// {
//    string s="how many words";
// int vowel=0,consonant=0,word=1;

//    for(int i =0;s[i] !='\0';i++)
//    {
//       if( s[i]=='A'|| s[i]=='I'|| s[i]=='E'|| s[i]=='O'|| s[i]=='U'|| s[i]=='a'||s[i]=='e'|| s[i]=='u'
//       || s[i]=='i'|| s[i]=='o')
      
//          vowel++;
      
//          else if(s[i] ==' ')
         
//             word++;

         
//       else
//          consonant++;
      
      
      
//    }
// cout<<vowel<<word<<consonant<<endl;
// return 0;
   
// }
// int main()
// {
//    string str;
//    char ch;
//    int count=0;
   
//    cout<<"enter string:\n";
//    cin>>str;
//    cout<<"enter char:\n";
//    cin>>ch;
// for(int i=0;str[i]!='\n';i++)
// {
//    if(str[i]==ch)
//    count++;
// }
// cout<<count;
// cout<<endl;
// return 0;
// }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
 
//  {
//    string str;
//    cout<<"enter wors:\n";
//    cin>>str;
//    int vowels=0,consonant=0,space=0;
//    for(int i=1;str[i]!='\0';i++)
//    {
//     if(str[i]=='A' ||str[i]=='E' ||str[i]=='O' ||str[i]=='U' ||str[i]=='I' ||str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u' ||)
//     {
//         vowels++;
//     }else if(str[i]==' ')
//     {
//         consonant++;
//     }else
//     {
//         space++;
//     }
//    }
//    cout<<"vowels= "<<vowels<<endl;
//    cout<<"consonant= "<<
//  }
 
// class fact
// {
//     int n,f;
//     public: fact(int a) //ctreating constructors
//     {
//         n=a,f=1;

//     }
//     void disp()
//     {
//         cout<<"factual= "<<f;
//     }
//     void call();
// };
// void fact::call()
// {
//     int i;
//     for(i=1;i<=n;i++)
//     {
//         f*=i;
//     }
// }
// void main()
// {
//     int no;
//     cout<<"enter no";
//     cin>>no;
//     fact obj(no);
//     obj.call();
//     obj.disp();
// }
 int c=0;
 class A
 {
    public:
    A()
{ c++;
cout<<c<<"connstructed \n";

}
~A()
{
    cout<<c<<"deleted \n";
    c--;

}
    
 };
 int main()
 {
    A ob1;
    {
        A ob2;
    }
    A ob3,ob4;
    return 0;
 }
