#include <iostream>
using namespace std;

int main()
{
    char text[100], pattern[50];
    int i, j, n, m;
    bool found = false;

    cout << "Enter the text: ";
    cin.getline(text, 100);

    cout << "Enter the pattern: ";
    cin.getline(pattern, 50);

    // Find length of text
    for (n = 0; text[n] != '\0'; n++);

    // Find length of pattern
    for (m = 0; pattern[m] != '\0'; m++);

    // Pattern Matching
    for (i = 0; i <= n - m; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (text[i + j] != pattern[j])
                break;
        }

        if (j == m)
        {
            if (!found) {
                cout << "\nPattern found at starting index(es):\n";
                found = true;
            }
            cout << i << endl;
        }
    }

    if (!found) {
        cout << "\nPattern not found." << endl;
    }

    return 0;
}

[24bcs169@mepcolinux ex2]$g++ pattern.cpp
[24bcs169@mepcolinux ex2]$./a.out
Enter the text: Basketball
Enter the pattern: ballpatmitan

Pattern not found.
[24bcs169@mepcolinux ex2]$./a.out
Enter the text: basketball
Enter the pattern: ballpatmitan

Pattern not found.
[24bcs169@mepcolinux ex2]$./a.out
Enter the text: hello
Enter the pattern: elll
