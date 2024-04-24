#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void Merge_Files(const string& outputFilename, const string Files[], int numFiles){
    ofstream outputFile(outputFilename);
    if(!outputFile.is_open()){
        cerr << "Can't open file" << endl;
        return;
    }
    outputFile << "Content of the merged file: " << endl;
    for(int i = 0; i < numFiles; i++){
        ifstream inputFile(Files[i]);
        if(!inputFile.is_open()){
            cerr << "Can't open file!" << endl;
            continue;
        }

        string lines;
        while(getline(inputFile,lines)){
            outputFile << lines << endl;
        }
        inputFile.close();
    }
    outputFile.close();
}

int main(){
    const int numFiles = 4;
    string Files[numFiles] = {"file1.txt", "file2.txt", "file3.txt", "file4.txt" };
    string outputFilename = "merged_test_file.txt";

    cout<<"Files merged successfully"<<endl;

    Merge_Files(outputFilename,Files,numFiles);

    
    return 0;
}