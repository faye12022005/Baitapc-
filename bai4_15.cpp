#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream inputFile("Exercise 4_15.txt");
    if(!inputFile.is_open()){
        cerr << "Can't open file!" <<endl;
        return 1;
    }
    int data;
    double sum;
    int count = 0;
    while(inputFile >> data){
        count++;
        sum = sum + data;
    }

    if(count == 0){
        cout<<"File has no data!";
    }else{
        double average = sum / count;
        cout<<"Average : "<<average;
    }

    inputFile.close();
    return 0;
}