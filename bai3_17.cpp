#include <iostream>
#include <vector>
using namespace std;


void Parenthesis(int open, int close, int n, string current, vector<string>& combinations) {
    
    if (open == n && close == n) {
        combinations.push_back(current);
        return;
    }

    if (open < n) {
        Parenthesis(open + 1, close, n, current + "[", combinations);
    }

    if (close < open) {
        Parenthesis(open, close + 1, n, current + "]", combinations);
    }
}

int main() {
    int n;
    cout << "Nhap so luong cap ngoac vuong (n): ";
    cin >> n;

    vector<string> combinations;
    Parenthesis(0, 0, n, "", combinations);

    cout << "Cac ket hop cua " << n << " cap ngoac vuong la:" << endl;
    for (const string& comb : combinations) {
        cout << comb << " ";
    }
    cout << endl;

    return 0;
}

