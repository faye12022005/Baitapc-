#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void Print(const string& Filename){
    ifstream inputFile(Filename);
    if(!inputFile.is_open()){
        cerr << "Can't open file1" << endl;
        return;
    }

    string lines;
    while(getline(inputFile, lines)){
        string token;
        size_t pos = 0;
        while((pos = lines.find(',')) != string::npos){
            token = lines.substr(0, pos);
            cout<<token<<"\t";
            lines.erase(0,pos + 1);
        }
        cout<<" "<<lines<<endl;
    }

    inputFile.close();
}

int main(){
    string Filename = "Exercise 4_14_csv.txt";
    Print(Filename);
    return 0;
}