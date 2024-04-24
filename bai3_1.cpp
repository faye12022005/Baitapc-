#include <iostream>
#include <string>
using namespace std;
void swap(char &a,char &b){
    char temp = a;
    a = b;
    b = temp;
}

void reverseWord(string& str){
    int left = 0;
    int right = str.length() - 1;
    while(left < right){
        swap(str[left],str[right]);
        left++;
        right--;
    }
}

int main(){
    string input = "SaiGonUniversity";
    reverseWord(input);
    cout<<input;
}
