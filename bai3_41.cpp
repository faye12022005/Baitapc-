#include <iostream>
#include <string>
using namespace std;

int Apear_Duoble(string& str, const string& ToFind){
    int pos1 = str.find(ToFind,0);
    if(pos1 != string::npos){
        int pos2 = str.find(ToFind,pos1 + ToFind.length());
        if(str.find(ToFind) != string::npos){
            return pos2;
        }
    }
    return -1;
}

int main(){
    string str = "the qu qu";
    string ToFind = "qu";
    int output = Apear_Duoble(str,ToFind);
    cout<<output;
    return 0;
}