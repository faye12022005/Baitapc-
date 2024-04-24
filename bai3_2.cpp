#include <iostream>
#include <cstring>
using namespace std;

void Replace(char  *str){
    int n = strlen(str);
    for(int i=0;i<n;i++){
        if(isalpha(str[i])){
            if(str[i] == 'Z'){
                str[i] = 'A';
            }else if(str[i] == 'z'){
                str[i] = 'a';
            }else{
                str[i]++;    
            }
        }
    }
}

int main(){
    char chuoi[100] = "SaiGonUniversity";
    cout<<"before replace: "<<chuoi<<endl;
    Replace(chuoi);
    cout<<"after replace: "<<chuoi<<endl;
    return 0;
}

