#include <iostream>
#include <string>
#include <stack>
using namespace std;

void checkS(string chuoi_math){
    stack<char> str;
    int count = 0;
    int n = chuoi_math.length();
    for(int i =0;i<n;i++){
        if( chuoi_math[i] == '[' ){
            str.push(chuoi_math[i]);
        }else if( chuoi_math[i] == ']' ){
            if(!str.empty()){
                count = count + 2;
                str.pop();
            }
        }
    }
    cout<<count<<endl;
}

int main(){
    string str = "[[]]][]";
    cout<<str<<endl;
    checkS(str);
    
}
