#include <iostream>
#include <cstring>
using namespace std;

int count_word(char* str){
    int count = 0;
    for(int i = 0;str[i] != '\0';i++){
        if((str[i] != ' ') && (str[i + 1] == ' ' || str[i + 1] == '\0')){
            count++;
        }
    }
    return count;
}

int main(){
    char chuoi[100] = " Sai Gon University ";
    cout<<"Number of words : "<<count_word(chuoi);
    return 0;
}

