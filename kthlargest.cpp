#include <iostream>
#include <vector>
using namespace std;

// Function to partition the array according
// to pivot index element
void partition(vector<int> &arr)
{
        int n = arr.size();
        int pivot = arr[n - 1];

        // i acts as boundary between smaller and
        // larger element compared to pivot
        int i = -1;
        for (int j = 0; j < n; j++)
        {
        // If smaller element is found expand the
        // boundary and swapping it with boundary element.
        if (arr[j] < pivot)
        {
                i++;
                swap(arr[i], arr[j]);
        }
    }

        // place the pivot at its correct position
        swap(arr[i + 1], arr[n - 1]);
}

int main()
{
        int element, n, k;
        cout << "Enter Size of the Array : ";
        cin >> n;

        vector<int> arr;
        for(int i = 0; i < n; i++)
        {
                cin >> element;
                arr.push_back(element);
        }

        cout << "Enter Index of K : ";
        cin >> k;

        partition(arr); // Call Lomuto Partition

        if(k == 1)
        {
           cout << k << "st Smallest Element of an Array : " << arr[n - k] << endl;
        }
        else if(k == 2)
        {
           cout << k << "nd Smallest Element of an Array : " << arr[n - k] << endl;
        }
        else if(k == 3)
        {
           cout << k << "rd Smallest Element of an Array : " << arr[n - k] << endl;
        }
        else
        {
           cout << k << "th Smallest Element of an Array : " << arr[n - k] << endl;
        }
        return 0;
}
[24bcs169@mepcolinux ex5]$g++ kthlargest.cpp
[24bcs169@mepcolinux ex5]$./a.out
Enter Size of the Array : 5
12
34
65
1
23
Enter Index of K : 45
Segmentation fault (core dumped)
[24bcs169@mepcolinux ex5]$g++ kthlargest.cpp
[24bcs169@mepcolinux ex5]$./a.out
Enter Size of the Array : 5
12
34
56
78
87
Enter Index of K : 3
3rd Smallest Element of an Array : 56
[24bcs169@mepcolinux ex5]$./a.out
Enter Size of the Array : 4
12
34
12
34
Enter Index of K : 3
3rd Smallest Element of an Array : 12
