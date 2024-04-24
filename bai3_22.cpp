#include <iostream>
#include <string>
using namespace std;

bool Special(char c){
    return !(isalnum(c) || c == ' ');
}

string Remove_Special_Characters(const string& str){
    string result;
    for(char c : str){
        if(!Special(c)){
            result = result + c;
        }
    }
    return result;
}

int main() {
    string input = "abcd $ js# @acde$";
    //getline(cin,input);
    cout<<input<<endl;
    cout<<"New string after removing the special characters from the said string: "<<Remove_Special_Characters(input);
    return 0;
}

