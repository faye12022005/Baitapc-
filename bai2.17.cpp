
#include <iostream>
#include <cstring>
using namespace std;

void print_nguoc(int* a,int n){
    int* contro = a + n - 1;
    int i = 0;
    while(contro>=a){
        cout<<"element - "<<i+1<<" : "<<*contro<<endl;
        contro--;
        i++;
    }
}

int main(){
    int x;
    cout<<"Input the number of element to store in the array (max 15): ";cin>>x;
    int a[x];
    cout<<"Input "<<x<<" numbers of elements in the array: "<<endl;
    for(int i=0;i<x;i++){
        cout<<"element - "<<i+1<<" : ";cin>>a[i];
    }
    
    cout<<"The element of array in reverse order are :"<<endl;
    print_nguoc(a,x);
    return 0;
}
