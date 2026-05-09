[24bcs169@mepcolinux ex6]$cat floyd.cpp
#include <iostream>
using namespace std;

// Function to display the matrix
void displayMatrix(int D[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (D[i][j] == 9999)
                cout << "INF\t";
            else
                cout << D[i][j] << "\t";
        }
        cout << "\n";
    }
}

// Main Floyd's Algorithm Function
void floydAlgorithm(int W[][100], int D[][100], int n) {
    // Step 1: Initialize D with W
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            D[i][j] = W[i][j];
        }
    }

    // Step 2: Floyd's Algorithm
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (D[i][k] != 9999 && D[k][j] != 9999) {
                    if (D[i][k] + D[k][j] < D[i][j]) {
                        D[i][j] = D[i][k] + D[k][j];
                    }
                }
            }
        }
    }
}

// Main Function
int main() {
    int n;

    cout << "Enter number of vertices: ";
    cin >> n;

    int W[100][100];

    cout << "\nEnter weight matrix values (9999 for INF):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "W[" << i << "][" << j << "]: ";
            cin >> W[i][j];
        }
    }

    int D[100][100];

    cout << "\n=== FLOYD'S ALGORITHM ===\n\n";
    cout << "Original Matrix:\n";
    displayMatrix(W, n);

    floydAlgorithm(W, D, n);

    cout << "\nShortest Path Matrix:\n";
    displayMatrix(D, n);

    return 0;
}

[24bcs169@mepcolinux ex6]$g++ floyd.cpp
[24bcs169@mepcolinux ex6]$./a.out
Enter number of vertices: 4

Enter weight matrix values (9999 for INF):
W[0][0]: 0
W[0][1]: 5
W[0][2]: 100
W[0][3]: 10
W[1][0]: 100
W[1][1]: 0
W[1][2]: 3
W[1][3]: 100
W[2][0]: 100
W[2][1]: 100
W[2][2]: 0
W[2][3]: 1
W[3][0]: 100
W[3][1]: 100
W[3][2]: 100
W[3][3]: 0

=== FLOYD'S ALGORITHM ===

Original Matrix:
0       5       100     10
100     0       3       100
100     100     0       1
100     100     100     0

Shortest Path Matrix:
0       5       8       9
100     0       3       4
100     100     0       1
100     100     100     0
[24bcs169@mepcolinux ex6]$./a.out
Enter number of vertices: 4

Enter weight matrix values (9999 for INF):
W[0][0]: 10
W[0][1]: 100
W[0][2]: 03
W[0][3]: 2
W[1][0]: 3
W[1][1]: 100
W[1][2]: 3
W[1][3]: 0
W[2][0]: 100
W[2][1]: 100
W[2][2]: 100
W[2][3]: 1
W[3][0]: 0
W[3][1]: 100
W[3][2]: 100
W[3][3]: 100

=== FLOYD'S ALGORITHM ===

Original Matrix:
10      100     3       2
3       100     3       0
100     100     100     1
0       100     100     100

Shortest Path Matrix:
2       100     3       2
0       100     3       0
1       100     4       1
0       100     3       2
[24bcs169@mepcolinux ex6]$exit
exit
