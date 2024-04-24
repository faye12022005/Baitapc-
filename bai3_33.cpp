#include <iostream>
#include <string>
using namespace std;

bool Find(const string& first, const string& second){
    for(char s : second){
        bool found = false;
        for(char f : first){
            if(s == f){
                found = true;
                break;
            }
        }
        if(!found)
            return false;
    }
    return true;
}

int main(){
    string first = "Check first string";
    string second = "ckstNg";

    bool result = Find(first, second);
    
    if(result){
        cout<<"True";
    }else{
        cout<<"False !";
    }

    return 0;
}