#include <iostream>
#include <string>
using namespace std;
string insert_between(const string& input){
    string result = input;
    for(int i=0;i<result.length();i++){
        if((result[i - 1] - '0') % 2 == 1 && (result[i] - '0') % 2 == 1){
            result.insert(i,"-");
        }
    }
    return result;
}

int main() {
    string input;
    cout<<"Nhap chuoi ki tu so : ";
    getline(cin,input);
    
    string output = insert_between(input);
    cout<<output;

    return 0;
}

