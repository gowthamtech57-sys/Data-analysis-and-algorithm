#include <iostream>
using namespace std;

int main()
{
    int n, temp, minIndex;
    int * a;

    cout << "Enter number of elements: ";
    cin >> n;

    a = new int[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
    {
       cin >> a[i];
    }

        cout << "Before Sorting:\n";
    for(int i = 0; i < n; i++)
    {
       cout << a[i] << " ";
    }

    cout << endl;

    for(int i = 0; i < n-1; i++)
    {
        minIndex = i;

        for(int j = i+1; j < n; j++)
        {
            if(a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }


        if(minIndex != i)
        {
            temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] = temp;
        }
    }

    cout << "Sorted array:\n";
    for(int i = 0; i < n; i++)
    {
       cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}
[24bcs169@mepcolinux exp1]$g++ select.cpp
[24bcs169@mepcolinux exp1]$./a.out
Enter number of elements: 5
Enter elements:
12
34
56
12
34
Before Sorting:
12 34 56 12 34
Sorted array:
12 12 34 34 56
[24bcs169@mepcolinux exp1]$./a.out
Enter number of elements: 5
Enter elements:
56
78
90
67
45
Before Sorting:
56 78 90 67 45
Sorted array:
45 56 67 78 90
