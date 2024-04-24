#include <iostream>
#include <string>
using namespace std;

bool Is_Title(const string& str){
    bool istitle = true;
    bool firstchar = true;
    for(char c : str){
        if(firstchar && !isupper(c) && !isspace(c)){
            istitle = false;
            break;
        }
        if(firstchar && isspace(c)){
            continue;
        }
        if(isspace(c)){
            firstchar = true;
        }else{
            firstchar = false;
        }
    }
    return istitle;
}

int main(){
    string input = "Duong Nguyen Minh Khang" ;
    //cout << "Enter string: ";
    //getline(cin,input);
    cout << input << endl;
    if(Is_Title(input)){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}
