#include <iostream>
#include <string>
using namespace std;

const int MAX_CHAR = 256;

int count_duplicate(const string& str) {
    int count = 0;
    int time_apear[MAX_CHAR] = {0};

    for (char c : str) {
        time_apear[c]++;
    }

    for (int i = 0; i < MAX_CHAR; i++) {
        if (time_apear[i] > 1)
            count = count + time_apear[i] - 1;
    }
    return count;
}


int main() {
    string str = "Total number of unique characters of the said two strings.";
    cout<<str<<endl;

    cout<<"Number of duplicate characters in the said string: "<<count_duplicate(str);

    return 0;
}

