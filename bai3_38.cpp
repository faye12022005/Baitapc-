#include <iostream>
#include <string>
using namespace std;

void Delete_element(string& str,char ToDelete){
    for(int i = 0; i <= str.length(); i++){
        if(str[i] == ToDelete)
            str.erase(i,1);
    }
}

int main(){
    string str = "Duong Nguyen Minh Khang";
    char input;
    cout<<"Enter the character you want to delete: ";
    cin>>input;
    Delete_element(str,input);
    cout<<str;
    return 0;
}