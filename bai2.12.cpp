
#include <iostream>
#include <cstring>
using namespace std;

long giaithua(int n){
    int* contro = new int;
    *contro = 1;
    for(int i=1;i<=n;i++){
        *contro = *contro * i;
    }
    long ketqua = *contro;
    delete contro;
    return ketqua;
}

int main(){
    int n;
    cout<<"Input a number: ";cin>>n;
    
    cout<<"The factorial of "<<n<<" is: "<<giaithua(n);
}