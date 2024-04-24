#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
    ifstream inputFile("File from Exercise 4_1.txt");
    if(!inputFile.is_open()){
        cerr << "Can't found the file!" << endl;
        return 1;
    }

    int count = 0;
    string input;
    while(getline(inputFile,input)){
        count++;
    }
    cout<<"Numbers of lines in file : "<<count<< " lines"<<endl;
    inputFile.close();
    return 0;
}