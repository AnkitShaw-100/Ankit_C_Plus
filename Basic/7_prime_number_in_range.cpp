//Prime number within given range
#include <iostream>
using namespace std;

int main() {
    int m, n, i, j, count;

    cout << "Enter the starting point: ";
    cin >> m;
    cout << "Enter the ending point: ";
    cin >> n;

    cout << "Prime numbers between " << m << " and " << n << " are: ";

    for (i = m; i <= n; i++) {
        if (i == 0 || i == 1) {
            continue;
        }
        count = 0;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                count++;
                break;
            }
        }
        if (count == 0) {
            cout << i << " ";
        }
    }

    return 0;
}
