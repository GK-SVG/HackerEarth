#include<stdio.h>
//using namespace std;
#define ll long long
int main()
{
    ll int n,q,x,b,unit=0;
    scanf("%lld",&n);
    ll int arr[n],temparr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    scanf("%lld",&q);
   ll int arr2[q][2],arr3[q];
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%lld",&arr2[i][j]);
        }
        
    }

    for (int k = 0; k < q; k++)
    {
        unit=0;
        arr[arr2[k][0]-1]=arr2[k][1];
        for (int i = 0; i < n; i++)
        {
           if (arr[i]!=i+1)
           {
              for (int j = 1; j < n; j++)
              {
                 temparr[j-1]=arr[j];
              }
              temparr[n-1]=arr[0];
              unit++;
              break;
           }
         
        }
        for (int i = 0; i < n; i++)
        {
            if ((temparr[i]!=i+1) && (unit<2))
            {
                temparr[i]=i+1;
                unit++;
                break;
            }
            
        }
        arr3[k]=unit;
    }
    for (int i = 0; i < q; i++)
    {
        printf("%lld\n",arr3[i]);
    }
    
}


