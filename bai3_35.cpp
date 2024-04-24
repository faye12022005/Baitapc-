#include <iostream>
#include <string>
using namespace std;

void swap(char &a, char &b){
    char temp = a;
    a = b;
    b = temp;
}

void Reverse(string& str){
    int left = 0;
    int right = str.length() - 1;
    while(left < right){
        swap(str[left],str[right]);
        left++;
        right--;
    }
}

string reverseString(const string& str){
    string word,result;
    int start = 0;
    for(int i = 0; i <= str.length(); i++){
        if(i == str.length() || str[i] == ' '){
            word = str.substr(start, i - start);
            if(word.length() % 2 == 1){
                Reverse(word);
            }
            result = result + word + ' ';
            start = i + 1;
        }
    }
    return result;
}

int main(){
    string input = "Duong Nguyen Minh Khang";
    string output = reverseString(input);
    cout<<output;
    return 0;
}