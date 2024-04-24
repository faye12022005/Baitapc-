#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string inputFileName = "CPlus.txt";
    string searchWord = "1980";
    string replaceWord = "1985";

    fstream inputFile(inputFileName);
    if (!inputFile.is_open()) {
        cerr << "Can't open file! " << inputFileName << endl;
        return 1;
    }

    string content;
    char ch;
    while(inputFile.get(ch)){
        content = content + ch;
    }
    inputFile.close();

    size_t pos = content.find(searchWord);
    while (pos != string::npos) {
        content.replace(pos, searchWord.length(), replaceWord);
        pos = content.find(searchWord, pos + replaceWord.length()); // tìm từ đã bị thay thế để thoát khỏi vòng lặp
    }

    ofstream outputFile(inputFileName);
    if (!outputFile.is_open()) {
        cerr << "Can't open file! " << inputFileName << endl;
        return 1;
    }
    outputFile << content;
    outputFile.close();

    cout << "Word '" << searchWord << "' has been replaced by word '" << replaceWord << "' in the file " << inputFileName << endl;

    return 0;
}
