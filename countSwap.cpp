/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,count=0,temp;
        scanf("%d",&n);
        int arr1[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr1[i]);
        }
        for(int i=0;i<n;i++)
        {
           if(arr1[i]>0)
         {
            for(int j=i+1;j<n;j++)
           { 
             if(arr1[j]<0)
             {
                swap(arr1[i],arr1[j]);
                count++;
                break;
             }  
           }
         }
        }
        printf("%d\n",count);
        
    }
}