#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream inputFile("File from Exercise 4_1.txt");

    if(!inputFile.is_open()){
        cerr << "Not found the file!" << endl;
        return 1;
    }
    string output;
    while(getline(inputFile,output)){
        cout<<output<<endl;
    }
    inputFile.close();
    return 0;
}