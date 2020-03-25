#include<iostream>
using namespace std;
int main()
{
    int n,totalhandshake=0;
    int arr[10][10]={0};
    int arr2[10];
    cin>>n;
    int num=n-1;
    for(int i=1;i<n;i++)
    {
        totalhandshake+=num;
        num--;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i < 10; i++)
    {
        arr2[i]=arr[i][0];
    }
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            if(arr[i][j]>0)
            totalhandshake--;
           for (int k = 0; k < 10; k++)
           {
               if(arr[i][j]==arr2[k])
               {
                   for (int l = 1; l < 10; l++)
                   {
                       if(arr[k][l]==arr2[i])
                       {
                           arr[k][l]=0;
                           break;
                       }
                   }
                   break;
               }
           }
              
        }   
    }
    cout<<totalhandshake<<endl;
    return 0;
    
}