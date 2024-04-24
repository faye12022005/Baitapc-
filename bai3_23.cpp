#include <iostream>
#include <string>
using namespace std;

const int MAX_CHAR = 256;

int dem(const string& str) {
    int count = 0;
    for(int i=0;i<str.length() - 1;i++){
        for(int j=i+1;j<str.length();j++){
            if(str[i] == str[j]){
                count++;
                break;
            }
        }
    }
    return str.length() - count;
}

int main() {
    string str1, str2;
    cout<<"Enter string1 : ";
    getline(cin, str1);
    cout<<"Enter string2 : ";
    getline(cin, str2);
    
    string str = str1 + str2;

    int uniqueCount = dem(str);

    cout<<"Total number of unique characters of the said two strings: "<<uniqueCount<<endl;

    return 0;
}

