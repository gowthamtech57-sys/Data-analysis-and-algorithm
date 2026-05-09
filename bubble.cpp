[24bcs169@mepcolinux exp1]$cat bubble.cpp
#include<iostream>
using namespace std;
int main()
{
   int * arr;
   int n,temp;
   cout << "Enter no.of elements: ";
   cin >> n;
   arr = new int[n];
   for(int i=0;i<n;i++)
   {
      cin >> arr[i];
   }
   for(int i=0;i<n-1;i++)
   {
      int flag=1;
      for(int j=0;j<n-1-i;j++)
      {
         if(arr[j] > arr[j+1])
         {
            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag=0;
         }
      }
      if(flag!=0)
      {
         break;
      }
   }
   cout << "Sorted Array: ";
   for(int i=0;i<n;i++)
   {
      cout << arr[i] << " ";
   }
   return 0;

}

[24bcs169@mepcolinux exp1]$g++ bubble.cpp
[24bcs169@mepcolinux exp1]$./a.out
Enter no.of elements: 5
12
34
56
12
34
Sorted Array: 12 12 34 34 56 [24bcs169@mepcolinux exp1]$./a.out
Enter no.of elements: 5
34
67
89
90
45
