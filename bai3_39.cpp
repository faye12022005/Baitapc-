#include <iostream>
#include <string>
using namespace std;

bool check(const string& str){
    for(int i = 0; i <= str.length() - 1; i++){
        for(int j = i + 1; j <= str.length(); j++){
            if(str[i] == str[j])
                return false;
        }
    }
    return true;
}

int main(){
    string str = "DEV C++";
    cout<<check(str);
    return 0;
}