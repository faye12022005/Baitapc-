#include <iostream>
#include <string>
using namespace std;

bool IsPalindrome(const string& input,int left,int right){
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

string Longest_Palindrome(const string& str){
    int n = str.length();
    int max_len = 0;
    int start_index = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(IsPalindrome(str,i,j)){
                int length = j - i + 1;
                if(length > max_len){
                    max_len = length;
                    start_index = i;
                }
            }
        }
    }
    return str.substr(start_index,max_len);

}

int main(){
    string input = "abddddeeff";
    //getline(cin,input);
    cout << input << endl;
    
    string result = Longest_Palindrome(input);
    int n = result.length();
    cout << "Length of the longest palindrome of the said string: " << n <<endl;
    return 0;
}
