#include <iostream>
#include <string>
using namespace std;

string Remove_Word(const string& str,const string& To_Remove){
    string result = str;
    int pos = str.find(To_Remove);

    if(pos != string::npos){
        result.erase(pos,To_Remove.length());

        while(result[pos] == ' '){
        result.erase(pos, 1);
        }

        while(result[pos - 1] == ' '){
            result.erase(pos - 1, 1);
            pos--;
        }
    }
    return result;
}

int main(){
    string input = " Duong Nguyen Minh Khang ";
    string toremove = "Khang";

    string output = Remove_Word(input,toremove);
    cout<<output;

    return 0;
}