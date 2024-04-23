//permutation Problem
#include <iostream>
using namespace std;

const int MAX_N = 100;
int x[MAX_N], b[MAX_N], n;

void output() {
    for (int i = 1; i <= n; i++)
        cout << x[i] << " ";
    cout << endl;
}

void permutation(int i) {
    for (int j = 1; j <= n; j++) {
        if (b[j] == 1) {
            x[i] = j;
            b[j] = 0;
            if (i == n)
                output();
            else
                permutation(i + 1);
            b[j] = 1;
        }
    }
}

int main() {
    cout << "Enter n = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
        b[i] = 1;

    permutation(1);

    return 0;
}
