#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,k,m,beaker2=1,beaker1=0,days=1,sum=0;
         cin>>n>>k;
         m=n;
         while (!((!(beaker2>=k)) || (!(sum>=k))))
         {
    
            if(beaker2>=n || sum>=n)
            {
                if(beaker2>=n)
                {beaker2=1;days++;}
                if(beaker2==1)
                sum=m+1;
                if(sum>=n)
                sum=m+beaker2;
                else
                {sum+=m;m=sum;}
                
            }
           // cout<<sum<<" "<<beaker2<<endl;
            // if(beaker2>=k || sum>=k)
            // break;
            beaker2*=2;
            days++;
         }
         cout<<days<<endl;
                 
    }
    
}