#include <iostream>
#include <string>
using namespace std;

bool La_nguyen_am(char c){
    return (c == 'a' || c == 'o' || c == 'e' || c == 'u' || c == 'i' ||
            c == 'A' || c == 'O' || c == 'E' || c == 'U' || c == 'I' );
}

string Reverse_nguyen_am(const string& str){
    string nguyen_am;
    for(char c : str){
        if(La_nguyen_am(c)){
            nguyen_am = nguyen_am + c;
        }
    }
    
    int left = 0;
    int right = nguyen_am.length() - 1;
    while(left < right){
        char temp = nguyen_am[left];
        nguyen_am[left] = nguyen_am[right];
        nguyen_am[right] = temp;
        left++;
        right--;
    }

    string result;
    int pos_nguyen_am = 0;
    for(char c : str){
        if(La_nguyen_am(c)){
            result = result + nguyen_am[pos_nguyen_am];
            pos_nguyen_am++;
        }else{
            result = result + c;
        }
    }
    return result;
}

int main(){
    string input = "SaiGonUniversity";
    string output = Reverse_nguyen_am(input);
    cout<<output;
    return 0;
}