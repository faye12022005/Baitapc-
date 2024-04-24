#include <iostream>
#include <string>
using namespace std;

bool IsDigit(char c){
    if(c >= '0' && c <= '9')
        return true;
    return false;
}

int Char_to_int(char c){
    return (c - '0');
}

int SumofNumbers(const string& str){
    int sum = 0;
    for(int i = 0; i < str.length() - 1; i++){
        if(IsDigit(str[i])){
            int num = Char_to_int(str[i]);
            
            while(IsDigit(str[i+1]) &&  i + 1 < str.length()){
                num = num*10 + Char_to_int(str[i+1]);
                i++;
            }
            sum = sum + num;
        }
        
    }
    return sum;
}

int main() {
    string input = "SaiGon273 from 2008";
    //getline(cin,input);
    
    cout << "Sum of the numbers: " << SumofNumbers(input);
    
    return 0;
}

