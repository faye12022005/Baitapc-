#include <iostream>
#include <string>
using namespace std;

void Change(string& str){
    bool Hoa;
    if(isupper(str[0])){
        Hoa = false;
    }else{
        Hoa = true;
    }

    for(char& c : str){
        if(isalpha(c)){
            if(Hoa){
                c = toupper(c);
            }else{
                c = tolower(c);
            }
        }
        Hoa = !Hoa;
    }
}

int main(){
    string str = "javaScript";
    Change(str);
    cout<<str;
    return 0;
}