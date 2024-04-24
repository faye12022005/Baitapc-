#include <iostream>
#include <string>
using namespace std;

bool Is_Vowle(char c){
    return (c == 'e' || c == 'o' || c == 'a' || c == 'i' || c == 'u');
}

void PrintVowel(const string& str,int n){
    string result;
    int count = 0;
    for(char c : str){
        if(Is_Vowle(c)){
            result = result + c;
            count++;
            if(n <= count){
                break;
            }
        }
    }
    if(n <= count){
        cout<< "Extract the first n number of vowels from the said string: " <<result;
    }else{
        cout<<"The number of vowels present in the string is less than n";
    }
}

int main(){
    string input = "Sai Gon University";
    int n;
    cout<<"Enter the numbers of vowel you want extract: ";cin>>n;
    PrintVowel(input,n);
    return 0;
}