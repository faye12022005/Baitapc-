#include <iostream>
#include <string>
using namespace std;

string Longest_Binary(const string& str){
    int curr_len = 0;
    int max_len = 0;
    int start_index = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '1'){
            curr_len++;
        }else{
            if(curr_len > max_len){
                max_len = curr_len;
                start_index = i - curr_len;
            }
            curr_len = 0;
        }
    }
    if(curr_len > max_len){
        max_len = curr_len;
        start_index = str.length() - curr_len;
    }
    return str.substr(start_index,max_len);

}

int main(){
    string input ;
    cout << "Enter Binary string: ";
    getline(cin,input);
    cout << input << endl;
    
    string result = Longest_Binary(input);
    cout << "Longest sequence of consecutive ones of the said binary string: " << result;
    return 0;
}
