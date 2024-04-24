#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void Decode_Data(const string& File){
    ifstream inputFile(File);
    if(!inputFile.is_open()){
        cerr << "Can't open file!" << endl;
        return;
    }

    int data;
    string lines;
    while(inputFile >> data){
        char c = static_cast<char>(data);
        lines = lines + c;
    }
    inputFile.close();

    ofstream outputFile(File, ios::trunc);
    if(!outputFile.is_open()){
        cerr << "Can't open file!" << endl;
        return;
    }
    outputFile << lines;
    cout<<"The data in file have been decoded successfully!";
    outputFile.close();
}

int main(){
    string File = "encrypted_test.txt";
    Decode_Data(File);
    return 0;
}