#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void swap(char &a, char &b){
    char temp = a;
    a = b;
    b = temp;
}

void BSort(string str[],int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(str[j] > str[j+1]){
                swap(str[j],str[j+1]);
            }
        }
    }
}

void line_count(const string& Filename, int &count){
    ifstream inputFile(Filename);
    if(!inputFile.is_open()){
        cerr << "Can't open file!";
        return;
    }
    string line;
    while(getline(inputFile,line)){
        count++;
    }

    inputFile.close();
}

void Sort_file(const string& Filename,int lineCount,string lines[]){
    ifstream inputFile(Filename);
    if(!inputFile.is_open()){
        cerr << "Can't open file!" << endl;
        return;
    }
    for(int i = 0; i < lineCount; i++){
        getline(inputFile,lines[i]);
    }
    BSort(lines,lineCount);
    inputFile.close();
}


void Print(const string& Filename,string lines[],int lineCount){
    ofstream outputFile(Filename);
    if(!outputFile.is_open()){
        cerr << "Can't open file!" << endl;
        return;
    }

    for(int i = 0; i < lineCount; i++){
        outputFile << lines[i] << endl;
    }

    outputFile.close();
}

int main(){
    string Filename = "File from Exercise 4_1.txt";

    int lineCount = 0;
    line_count(Filename,lineCount);

    string* lines = new string[lineCount];

    Sort_file(Filename,lineCount,lines);

    Print(Filename,lines,lineCount);

    delete[] lines;

    cout << "The lines in the file have been arranged in alphabetical order !";

    return 0;
}