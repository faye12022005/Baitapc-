#include <iostream>
#include <string>
using namespace std;

string Print(const string& str1, const string& str2){
    string result;
    for(int i = 0 ; i < str1.length(); i++){
        if(islower(str1[i])){
            result = result + str2[i];
        }
        if(i == str2.length())
            break;
    }
    return result;
}

int main(){
    string str1 = "Dev c++";
    string str2 = "Java";
    string output = Print(str1,str2);
    cout<<output;
    return 0;
}