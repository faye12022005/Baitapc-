#include <iostream>
#include <cstring>
using namespace std;

bool check(char str[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(str[i] == str[j]){
                return true;
            }
        }
    }
    return false;
}


int main(){
    char str[100];
    cin.getline(str,100);
    int n = strlen(str);
    cout<<str<<endl;
    if(check(str,n)){
        cout<<"True";
    }else{
        cout<<"False";
    }
}
