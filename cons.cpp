#include <iostream.>
#include <vector>
#include <iomanip>
#include <cstring>
using namespace std;


 
// int main()
// {
//   int n,i;
//   cin>>n;
  
//   cout<<"factors: ";
//   for(int i=1;i<=n;i++)
//   {
//     if(n%i==0)
//     {
//      cout<<i<<" ";
     
//     }
//   }

//     cout<<endl;
//     if(n>0 &&n<=9)
//     {
//       cout<<"digits= 1";
//     } 
//     else if(n>=10&&n<=99)
//     {
//       cout<<"digits= 2";
//     } 
//     else if(n>=100&n<=999)
//     {
//       cout<<"digits= 3";
//     }
  
 
//  return 0;
// }    
// int main()
// {
// int n ,count=0;
// cin>>n;
// while(n>100)
// {
//   n=n-100;
//   count +=100;
// }
// cout<<"changes are "<<n<<endl;
// cout<<"hundreds are "<<count<<endl;
// return 0;
// }



 //multipllication of N 
// int main()
// {
//   int n;
//   cout<<"enter the number:\n";
//   cin>>n;
//   for(int i=1;i<=10;i++)
//   {
//     int a=n*i;
//     cout<<n<<" * "<<i<<" = "<<a<<endl;
//   }
//   return 0;

// }

//taking 10 integers from user and print thier avg
// int main()
// {
//   int n;
//   float result=0.0f;
// float avg;
//   for(int i=1;i<=10;i++)
//   {
//     cout<<"enter n: \n";
//     cin>>n;
//     result +=n;
    
//   }
//   avg=result/10;
//   cout<<result<<endl;
//   cout<<"the average of 10 numbers are  "<<avg<<endl;
// }




    /*

        *
      * * *
    * * * * *
      * * *
        * 
        
        */
 
//  int main()
// {
//     int n;
//     cout << "Enter the number of rows" << endl;
//     cin >> n;
//     cout << "Diamond pattern \n";
//     int spaces=n-1;
//     int stars=1;
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=spaces; j++) {
//             cout << " ";
//         }
//         for(int k=1; k<=stars; k++) {
//             cout << "*";
//         }
//         if(spaces>i) {
//             spaces=spaces-1;
//             stars=stars+2;
//         }
//         if(spaces<i) {
//             spaces=spaces+1;
//             stars=stars-2;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include <algorithm>
// #include <climits>

// // Function to find the minimum difference in an array
// int findMinimumDifference(int arr[], int n) {
//     if (n < 2) {
//         return -1; // If there are less than 2 elements, we can't find the minimum difference.
//     }

//     // Sort the array in non-decreasing order
//     std::sort(arr, arr + n);

//     // Initialize the minimum difference as infinity
//     int minDiff = INT_MAX;

//     // Find the minimum difference by comparing adjacent elements
//     for (int i = 1; i < n; i++) {
//         int diff = arr[i] - arr[i - 1];
//         if (diff < minDiff) {
//             minDiff = diff;
//         }
//     }

//     return minDiff;
// }

// int main() {
//     int n;
//     std::cout << "Enter the size of the array: ";
//     std::cin >> n;

//     int arr[n];
//     std::cout << "Enter " << n << " elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         std::cin >> arr[i];
//     }

//     int minDifference = findMinimumDifference(arr, n);

//     if (minDifference != -1) {
//         std::cout << "Minimum difference in the array: " << minDifference << std::endl;
//     } else {
//         std::cout << "Array should have at least 2 elements to find a difference." << std::endl;
//     }

//     return 0;
// }
// void expenses(float b,float t,float f,float l)
// {
//   float totalexpense=b+t+f+l;
//    float perrateb=(b/totalexpense)*100;
//    float perratet=(t/totalexpense)*100;
//    float perratef=(f/totalexpense)*100;
//    float perratel=(l/totalexpense)*100;
  
//   cout<<"total expense = "<<fixed<<setprecision(2)<<totalexpense<<endl;
//   cout<<" percentage of brand = "<<fixed<<setprecision(2)<<perrateb<<endl;
//   cout<<" percentage of travel = "<<fixed<<setprecision(2)<<perratet<<endl;
//   cout<<" percentage of food = "<<fixed<<setprecision(2)<<perratef<<endl;
//   cout<<" percentage of  = "<<fixed<<setprecision(2)<<perrateb<<endl;
// }
// int main()
// {
//   float b,t,f,l;
//   cout<<"enter expenses:\n";
//   cin>>b>>t>>f>>l;
// expenses(b,t,f,l);
// return 0;
// }


class Rectangle
{
  private:
  int l,b;
  public:
   
    Rectangle()
  {
    l=5;
    b=8;
  
  }
   Rectangle(int le,int br)
  {
    setLength(le);
    setBreadth(br);
  }
   Rectangle(Rectangle &h)
  {
    l=h.l;
    b=h.b;
  }
  
  void setLength(int le)
  {
    if(l>0)
    
      l=le;
      
    else
     l=1;
  }
    void setBreadth(int br)
    {
    
      if(b>0)
      b=br;
      else
      b=1;
    }
    int getLength()
    {
      return l;
    }
    int getBreadth()
    {
      return b;
    }
    int area()
    {
      return l*b;
    }
};

int main()
{
  Rectangle h(10,5);
  Rectangle h1;
  Rectangle h2(h);
  cout<<"h2 area"<<h2.area()<<endl;
  cout<<h1.area()<<endl;
  cout<<h.area()<<endl;
return 0;
}
  


