#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void Adjust_text(const string& iFileName, const string& oFileName) {
    ifstream input(iFileName);
    if (!input.is_open()) {
        cerr << "Can't open file!" << endl;
        return;
    }

    ofstream output(oFileName);
    if (!output.is_open()) {
        cerr << "Can't open file!" << endl;
        return;
    }

    string adjustedText;
    string text;
    bool capitalizeNext = true; 
    while(getline(input, text)){
        for (char c : text) {
            if (isalpha(c)) { 
                if (capitalizeNext) {
                    adjustedText += toupper(c); 
                    capitalizeNext = false;
                } else {
                    adjustedText += tolower(c); 
                }
            } else if (c == '.' || c == '?' || c == '!') {
                capitalizeNext = true;
                adjustedText += c;
            } else {
                adjustedText += c; 
            }
        }
        output<< adjustedText;
    }

    input.close();
    output.close();
}

int main() {
    string inputFileName = "merged_test_file.txt";
    string outputFileName = "Exercise 4_18.txt";

    Adjust_text(inputFileName, outputFileName);

    return 0;
}
