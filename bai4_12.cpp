#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void Data_encrypted(const string& iFile,const string& oFile,int n){
    ifstream inputFile(iFile);
    if(!inputFile.is_open()){
        cerr << "Can't open file!" << endl;
        return;
    }
    ofstream outputFile(oFile);
    if(!outputFile.is_open()){
        cerr << "Can't open file!" << endl;
        return;
    }

    char c;
    while(inputFile.get(c)){
        int value = (int)c + n;// mã hóa thành dạng số
        if(value > 255)
            value = 0;
        outputFile << value << " ";
    }
    cout<<"The data in file have been encrypted successfully!";
    inputFile.close();
    outputFile.close();
}

int main(){
    string oFile = "encrypted_test.txt";
    string iFile = "merged_test_file.txt";
    int n;
    cout<<"Enter value of n: ";cin>>n;
    Data_encrypted(iFile,oFile,n);
    return 0;
}