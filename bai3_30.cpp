#include <iostream>
#include <string>
using namespace std;
string MissingLetter(const string& str) {
    string miss;
    bool check[26] = {false};
    int n;
    for (char ch : str) {
        if (ch >= 'a' && ch <= 'z') {
            check[ch - 'a'] = true;
        }
        n = ch - 'a';
    }

    for (int i = 0; i < n - 2; ++i) {
        if (!check[i]) {
            miss += ('a' + i);
        }
    }

    if (miss.empty()) {
        return "There is no missing letter!";
    } else {
        return "Identify the missing letter in the said string: " + miss;
    }
}

int main() {
    string input = "acegk";
    // cout<<"Original string: ";
    // cin>>input;

    cout<<"Output: "<<MissingLetter(input)<<endl;

    return 0;
}
