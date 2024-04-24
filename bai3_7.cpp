#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int dem_nguyen_am(const string& input){
    int count = 0;
    for(char c : input){
        char lower = tolower(c);
        if(lower == 'o' || lower == 'u' || lower == 'e' || lower == 'a' || lower == 'i')
            count++;
    }
    return count;
}

int main() {
    string input;
    cout << "Nhap chuoi: ";
    getline(cin, input);
    
    int dem = dem_nguyen_am(input);
    cout << "number of vowels " << " -> " << dem << endl;

    return 0;
}

