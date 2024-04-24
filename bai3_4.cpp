#include <iostream>
#include <cstring>
using namespace std;

string find_Long(const string& str){
    string current;
    string Longest;
    int n = str.length();
    for(int i = 0; str[i] != '\0'; i++){
        if(isalpha(str[i])){
            current = current + str[i];
        }else{
            if(current.length() > Longest.length()){
                Longest = current;
            }
            current = '\0';
        }
    }
    if(current.length() > Longest.length()){
        Longest = current;
    }
    return Longest;
}

int main(){
    char chuoi[100] = "C++ is a general-purpose programming language";
    cout<<chuoi<<endl;
    cout<<"The Longest string is: "<<find_Long(chuoi);
    return 0;
}

