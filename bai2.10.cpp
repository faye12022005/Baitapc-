#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char str[100];
    char* ptr;
    int length = 0;
    
    cout<<"nhap chuoi: ";
    cin.getline(str, 100);
    
    ptr = str;
    
    while(*ptr != '\0'){
        length++;
        ptr++;
    }
    
    cout<<"do dai cua chuoi "<<str<<" la: "<<length;
    
    return 0;
}
