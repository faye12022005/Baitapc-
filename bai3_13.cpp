#include <iostream>
#include <string>
using namespace std;

string Change(const string& input){
    string result = input;
    for(char& c : result){
        if(isupper(c)){
            c = tolower(c);
        }else if(islower(c)){
            c = toupper(c);
        }
    }
    return result;
}

int main() {
    string input;
    getline(cin,input);
    
    string result = Change(input);
    cout<<result;
    
    
    return 0;
}

