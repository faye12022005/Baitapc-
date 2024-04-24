#include <iostream>
#include <string>
using namespace std;

bool IsPalindrome(const string& input){
    int left = 0;
    int right = input.length() - 1;
    while (left < right)
    {
        if(input[left] != input[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
    
}

int main(){
    string input;
    cout<<"Enter string:";
    getline(cin,input);
    if(IsPalindrome(input)){
        cout<<"True !";
    }else{
        cout<<"False !";    
    }
}
