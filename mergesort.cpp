[24bcs169@mepcolinux exp3]$cat mergesort.cpp
#include <iostream>
using namespace std;

// We create a temp array large enough to handle up to 100 elements
int temp[100];

void merge(int arr[], int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid)
       temp[k++] = arr[i++];
    while (j <= right)
       temp[k++] = arr[j++];

    for (int p = left; p <= right; p++)
    {
        arr[p] = temp[p];
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main()
{
    int n;

    // 1. Ask the user for the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // 2. Take array elements as input
    cout << "Enter " << n << " numbers: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }

    // 3. Run the sort
    mergeSort(arr, 0, n - 1);

    // 4. Print the result
    cout << "MergeSorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
[24bcs169@mepcolinux exp3]$g++ mergesort.cpp
[24bcs169@mepcolinux exp3]$./a.out
Enter the number of elements: 5
Enter 5 numbers:
3
4
5
6
7
MergeSorted array: 3 4 5 6 7
[24bcs169@mepcolinux exp3]$./a.out
Enter the number of elements: 5
Enter 5 numbers:
12
54
76
32
65
MergeSorted array: 12 32 54 65 76
