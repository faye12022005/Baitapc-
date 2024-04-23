
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char chuoi[100];
    cout<<"Input a string: ";
    cin.getline(chuoi,100);
    char* contro;
    int nguyenam = 0;
    int phuam = 0;
    
    contro = chuoi;
    
    while(*contro != '\0'){
        if(*contro == 'a' ||*contro == 'e'||*contro == 'o' ||*contro == 'u'||*contro == 'i' ){
            nguyenam++;
        } else if(*contro >='a' && *contro <= 'z'){
            phuam++;
        }
        contro++;
    }
    
    cout<<"number of vowels: "<<nguyenam<<endl;
    cout<<"number of constant : "<<phuam;
    return 0;
}