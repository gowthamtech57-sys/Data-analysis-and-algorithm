[24bcs169@mepcolinux ex4]$cat insert.cpp
#include <iostream>
using namespace std;

void insertionSort(int A[], int n) {
    for (int i = 1; i < n; i++) {
        int v = A[i];
        int j = i - 1;

        while (j >= 0 && A[j] > v) {
            A[j + 1] = A[j];
            j = j - 1;
        }

        A[j + 1] = v;
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int A[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    insertionSort(A, n);

    cout << "\nSorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << "\n" << endl;
    return 0;
}
[24bcs169@mepcolinux ex4]$g++ insert.cpp
[24bcs169@mepcolinux ex4]$./a.out
Enter number of elements: 5
Enter elements:
12
45
67
89
34

Sorted array:
12 34 45 67 89

[24bcs169@mepcolinux ex4]$./a.out
Enter number of elements: 5
Enter elements:
23
45
67
89
12

Sorted array:
12 23 45 67 89
