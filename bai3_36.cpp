#include <iostream>
#include <string>
using namespace std;

bool check(const string& str){
    for(int i = 0; i < str.length(); i++){
        if(str[i] == str[i + 1]){
            return true;
        }
    }
    return false;
}

int main(){
    string input = "Yellow";
    if(check(input)){
        cout<<"1";
    }else{
        cout<<"0";
    }
    return 0;
}