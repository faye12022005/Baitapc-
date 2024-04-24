#include <iostream>
#include <string>

using namespace std;

string Insert_space(const string& str){
    string result;
    int n = str.length();
    for(int i = 0; i < n; i++){
        result = result + str[i];
        if(i > 0 && isupper(str[i]) && islower(str[i - 1])){
            result.insert(result.length() - 1, " ");
        }
    }
    return result;
}

int main(){
    string input = "DuongNguyenMinhKhang";
    string output = Insert_space(input);
    cout<<output;
    return 0;
}
