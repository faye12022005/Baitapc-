#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void Find_pos_line(const string& Filename,string& findWord){
    ifstream inputFILE(Filename);
    if(!inputFILE.is_open()){
        cerr << "Can't open file!" << endl;
        return;
    }
    int count_line = 0;
    string line;
    while(getline(inputFILE,line)){
        count_line++;
        if(line.find(findWord) != string::npos){
            break;
        }
    }
    if(count_line == 0){
        cout<<"Not found "<<findWord<<" in file"<<endl;
    }else{
        cout<<"The word '"<<findWord<<"' has been found in the line "<<count_line;
    }
    inputFILE.close();
}

int main(){
    string Filename = "merged_test_file.txt";
    string findWord = "C programming language";

    Find_pos_line(Filename,findWord);
    
    return 0;
}