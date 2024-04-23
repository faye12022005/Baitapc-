#include <cstring>
#include <iostream>
using namespace std;
void DaoNguoc(char* chuoi){
    int len = strlen(chuoi);
    char* start = chuoi;
    char* end = start + len - 1;
    
    while(start < end){
        char temp = *start;
        *start = *end;
        *end = *temp;
        
        start++;
        end--;
    }
}

int main()
{
    char chuoi[100];
    cout<<"Nhập chuỗi: ";
    cin.getline(chuoi,100);
    DaoNguoc(chuoi);
    cout<<"Chuỗi sau khi đảo ngược: ";
    cout<<chuoi;
    return 0;
}
