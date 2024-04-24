#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ifstream inputFile("File from Exercise 4_1.txt");
    if(!inputFile.is_open()){
        cerr << "Can't open the file!";
        return 1;
    }

    string word;
    int count = 0;
    while(inputFile >> word){
        count++;
    }

    cout << "Number of word in the file : " << count << " words";
}