#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){

    ofstream outputFlie("File from Exercise 4_1.txt");
    if(!outputFlie.is_open()){
        cerr << "Can't open the file!"<<endl;
        return 1;
    }

    string input = "Không có việc gì khó\nChỉ sợ lòng không bền\nĐào núi và lấp biển\nQuyết chí ắt làm nên";
    outputFlie << input;
    outputFlie.close();
    cout<<"The data was written to the file successfully."<<endl;
    return 0;
}