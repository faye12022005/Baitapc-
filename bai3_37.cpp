#include <iostream>
#include <string>
using namespace std;

int Count_Element(const string& str,char Tocount){
    int count = 0;
    for(char c : str){
        if(c == Tocount)
            count++;
    }
    return count;
}

int main(){
    string str = "Duong Nguyen Minh Khang";
    char input;
    cout<<"Enter the character you want to count: ";
    cin>>input;
    int count = Count_Element(str,input);
    cout<<count;
    return 0;
}