#include <iostream>
#include <string>
using namespace std;
//Hàm tìm từ có số lượng ký tự lặp lại nhiều nhất
string findMost(const string& str) {
    string result;
    int maxRepeatCount = 0;
    int start = 0;
    while(start < str.length()){
        int end = str.find(' ',start);
        if(end == string::npos){
            end = str.length();
        }

        string word = str.substr(start, end - start);
        int count[26] = {0};
        for(char c : word){
            if(isalpha(c)){
                count[tolower(c) - 'a']++;
            }
        }

        int maxcount = 0;
        for(int i = 0; i < 26; i++){
            if(count[i] >= 2){
                maxcount = maxcount + count[i];
            }
        }

        if(maxcount > maxRepeatCount){
            maxRepeatCount = maxcount;
            result = word;
        }
        start = end + 1;
    }
    return result;
}

int main() {
    string input = "Print a welcome text in a separate line";

    string result = findMost(input);
    if (!result.empty()) {
        cout << "TWord which has the highest number of repeated letters: " << result << endl;
    } else {
        cout << "Not found!" << endl;
    }

    return 0;
}
