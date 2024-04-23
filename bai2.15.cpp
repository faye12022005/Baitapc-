
#include <iostream>
#include <cstring>
using namespace std;
int* larger(int* a,int* b){
    return (*a>*b)?a:b;
}
int main(){
    int n,m;
    cout<<"Input the first number : ";cin>>n;
    cout<<"Input the second number: ";cin>>m;
    
    cout<<"The number "<<*larger(&n,&m)<<" is larger";
    return 0;
}

/*
#include <iostream>
#include <cstring>
using namespace std;
int* larger(int* a,int* b){
    return (*a>*b)?a:b;
}

int* tong(int a[],int x){
    int sum = 0;
    int* contro = &sum;
    for(int i =0;i<x;i++){
        sum = sum + a[i];
    }
    return contro;
}

int main(){
    int n,m;
    cout<<"Input the first number : ";cin>>n;
    cout<<"Input the second number: ";cin>>m;
    cout<<"The number "<<*larger(&n,&m)<<" is larger"<<endl;
    
    int x;
    cout<<"Input the number of element to store in the array (max 10): ";cin>>x;
    int a[x];
    for(int i=0;i<x;i++){
        cout<<"element - "<<i+1<<" : ";cin>>a[i];
    }
    cout<<"The sum of array is: "<<*tong(a,x);
    
    return 0;
}*/