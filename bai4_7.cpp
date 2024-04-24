#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void append_data(const string& Filename,string& data){
    ofstream outputFile(Filename,ios::app);
    if(!outputFile.is_open()){
        cerr << "Can't open file!" << endl ;
        return;
    }

    outputFile << "\n" << data;
    outputFile.close();

}

using namespace std;
int main(){
    string Filename = "CPlus.txt";
    string data;
    cout << "Enter the data you want to append: ";
    getline(cin,data);
    append_data(Filename,data);
    cout<<"The data has been appended to the end of the file successfully!";

}