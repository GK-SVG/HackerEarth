#include<stdio.h>
int main()
{
    int testcase;
    scanf("%d",&testcase);
while (testcase--)
{
     int n,a,b,c,min=230000;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            a=arr[i] & arr[j];
            b=arr[i] | arr[j];
            c=a^b;
            if(c<min) 
            min=c;
            
        }
        
    }
    printf("%d\n",min);
}
return 0;
}
