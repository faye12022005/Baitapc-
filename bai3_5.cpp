#include <iostream>
#include <cstring>
using namespace std;

void Sort_string(char str[]){
    int n = strlen(str);
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(str[i] > str[j]){
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main(){
    char chuoi[100] = "python";
    cout<<"before sort: "<<chuoi<<endl;
    Sort_string(chuoi);
    cout<<"after sort: "<<chuoi<<endl;
    return 0;
}

