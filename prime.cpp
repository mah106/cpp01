#include <iostream>
using namespace std;

int main()
{
    // int n,i,count=0;
    // cout<<"enter n";
    // cin>>n;
    // for(i=1;i<=n;i++){
    // if(n%i==0){
    //     count++;
    // }
    // }
    // if(count==2){
    //     cout<<"its prrime";
        
    // }
    // else{cout<<"its not a prime";}
                        





                        
    int n;
    cout<<"enter n:\n";
    cin>>n;
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=9;j++)
        {
            if((i ==1 ||i==3))
            {
                if((i + j)%4==0)
                cout<<"* ";
                else cout<<"  ";
            }else if((i +j)%2==0)
            cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}