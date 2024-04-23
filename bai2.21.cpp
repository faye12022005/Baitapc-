#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char* contro;
    char Bangchucai[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    contro = Bangchucai;
    while(*contro != '\0'){
        cout<<*contro<<" ";
        contro++;
    }
    return 0;
}