#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int count_Line(const string& FileName){
    ifstream input(FileName);
    if(!input.is_open()){
        cerr << "Can't open file!" << endl;
        return 0;
    }

    string lines;
    int count = 0;
    while(getline(input, lines)){
        count++;
    }

    input.close();
    return count;
}

int count_Word(const string& FileName){
    ifstream input(FileName);
    if(!input.is_open()){
        cerr << "Can't open file!" << endl;
        return 0;
    }

    string words;
    int count = 0;
    while(input >> words){
        count++;
    }

    input.close();
    return count;
}

bool Is_Vowel(char c){
    return (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o' ||
            c == 'A' || c == 'I' || c == 'U' || c == 'E' || c == 'O');
}

bool Is_Consonant(char c){
    return (!Is_Vowel(c) && isalpha(c));
}

int count_Vowel(const string& FileName){
    ifstream input(FileName);
    if(!input.is_open()){
        cerr << "Can't open file!" << endl;
        return 0;
    }

    char c;
    int count = 0;
    while(input.get(c)){
        if(Is_Vowel(c))
            count++;
    }

    input.close();
    return count;
}

int count_Consonant(const string& FileName){
    ifstream input(FileName);
    if(!input.is_open()){
        cerr << "Can't open file!" << endl;
        return 0;
    }

    char c;
    int count = 0;
    while(input.get(c)){
        if(Is_Consonant(c))
            count++;
    }

    input.close();
    return count;
}

int main(){
    string FileName = "merged_test_file.txt";
    
    cout<<"Number of lines      : "<<count_Line(FileName)<<endl;
    cout<<"Number of words      : "<<count_Word(FileName)<<endl;
    cout<<"Number of vowel      : "<<count_Vowel(FileName)<<endl;
    cout<<"Number of consonants : "<<count_Consonant(FileName);
    return 0;
}