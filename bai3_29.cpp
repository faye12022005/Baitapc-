#include <iostream>
#include <string>
using namespace std;

string thousands(const string& str){
    string result = str;
    int n = str.length() ;
    for(int i = n - 3;i > 0; i = i - 3){
        result.insert(i,",");
    }
    return result;
}

int main(){
    string input = "5000000";
    string output = thousands(input);
    cout<< input << " with commas as thousands separators is: " << output <<" $";
    return 0;
}