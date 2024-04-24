#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ifstream inputFile("File from Exercise 4_1.txt");
    if(!inputFile.is_open()){
        cerr << "Can't open the file!"<<endl;
        return 1;
    }

    ofstream destinationFile("test_copy.txt");
    if(!destinationFile.is_open()){
        cerr << "Can't open the file!" << endl;
        return 1;
    }

    string copy;
    while(getline(inputFile,copy)){
        destinationFile << copy << endl;
    }

    cout<<"The data was copied successfully! "<<endl;
    cout<<"The new file is test_copy.txt."<<endl;

    inputFile.close();
    destinationFile.close();
    return 0;
}