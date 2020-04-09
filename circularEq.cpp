#include<iostream>
using namespace std;
int main()
{
    int s;
    cin>>s;
    while (s--)
    {
        int n,reminder,count=0,temp,temp1=0;
        cin>>n;
        for (int i = 1; i < n/2; i++)
        {
            reminder=0;
            temp1=0;
           temp=i;
           if(temp<9)
           {
               temp1=temp*10;
           }
           else{
           while (temp>0)
           {
               reminder=temp%10;
               temp1=(temp1*10)+reminder;
               temp/=10;

           }
           }
         //  cout<<temp1<<" ";
           if(temp1+i==n)
           {count++;}
        }
        cout<<count*2;
    }
    
}