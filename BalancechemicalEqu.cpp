#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  long long int x,y,p,q;
  long long int b1=1,b2=1,b3=1;
  int t=1;
    cin>>x>>y>>p>>q;
    while (t)
    {
       
        if((b1*x) != (b3*p))
        {
            if ((b1*x)>(b3*p))
            {
                if ((b1*x)%(b3*p)==0)
                {
                    b3*=((b1*x)/(b3*p));
                }
             
                else
                {
                    b1*=p;
                    b3*=x;
                } 
             
            }
            else
            {
                 if ((b3*p)%(b1*x)==0)
                 {
                     b1=b1*((b3*p)/(b1*x));
                 }

                 else
                 {
                     b1*=p;
                     b3*=x;
                 }
               
            }
            
        }
        if((b2*y)!=(b3*q))
        {
            if ((b2*y)>(b3*q))
            {
                if ((b2*y)%(b3*q)==0)
                {
                    b3=b3*((b2*y)/(b3*q));
                }
                else
                {
                    b2*=q;
                    b3*=y;
                } 
        
            }
            else
            {
                 if ((b3*q)%(b2*y)==0)
                 {
                     b2=b2*((b3*q)/(b2*y));
                 }
                 else
                 {
                     b2*=q;
                     b3*=y;
                 }
                
            }
    
        }
       if (((b1*x)==(b3*p)) && ((b2*y)==(b3*q)))
       {
           t--;
       }
       
    }
    int max1;
    max1=max(b1,b2);
    max1=max(b1,b3);
    max1=max(b2,b3);
    for (int i = 2; i < max1; i++)
    {
        if((b1%i==0)&&(b2%i==0)&&(b3%i==0))
        {
            b1/=i;
            b2/=i;
            b3/=i;
        }
    }
    
    cout<<b1<<" "<<b2<<" "<<b3;
    return 0;
}