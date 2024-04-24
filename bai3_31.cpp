#include <iostream>
#include <string> 
using namespace std;

bool check_upper_lower(const string& str){
    int countup = 0;
    int countlow = 0;
    for(char c : str){
        if(isupper(c)){
            countup++;
        }else if(islower(c)){
            countlow++;
        }
    }
    if(countup == str.length() || countlow == str.length()){
        return true;
    }else{
        return false;
    }
}

int main(){
    string input = "NIKE";
    if(check_upper_lower(input)){
        cout<<"True!";
    }else{
        cout<<"False!";
    }
    return 0;
}