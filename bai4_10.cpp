#include <iostream>
#include <string>
#include <fstream>
using namespace std;

streampos GetFileSize(const string& Filename){
    ifstream inputFile(Filename);

    if(!inputFile.is_open()){
        cerr << "Can't open file!" << endl;
        return -1;
    }
    inputFile.seekg(0, ios::end);
    return inputFile.tellg();
}

void Split_Files(const string& inputFilename,streampos FileSize){
    ifstream inputFile(inputFilename);
    if(!inputFile.is_open()){
        cerr << "Can't open file" << endl;
        return;
    }

    //cout<<"How many files do you want to split the original file into?: ";cin>>n;
    int size_each_file;
    cout<<"Enter size each file: ";
    cin>>size_each_file;
    int numFiles = (FileSize + size_each_file - 1) / size_each_file;
    for(int i = 0 ; i < numFiles; i++){
        string outputFilename = "split_file_" + to_string(i+1) +".txt";
        ofstream outputFile(outputFilename);
        if(!outputFile.is_open()){
            cerr << "Can't open file!" <<endl;
            continue;
        }
        //int chunksize = (int)FileSize / n; // các file được chia có kích thước bằng nhau
        //cout<<"Enter file size "<<i+1<<": ";cin>>chunksize; // mỗi file mỗi kích thước tùy thích
        char buffer;
        for(int i = 0; i < size_each_file; i++){
            inputFile.get(buffer);
            outputFile.put(buffer);
        }
        outputFile.close();
    }
    inputFile.close();

}

int main(){

    string inputFilename = "merged_test_file.txt";
    streampos FileSize = GetFileSize(inputFilename);
    if(FileSize != -1){
        cout<<"File size : "<<FileSize<<" bytes"<<endl;
    }

    Split_Files(inputFilename,FileSize);
    return 0;

}