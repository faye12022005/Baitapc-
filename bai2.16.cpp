
#include <iostream>
#include <cstring>
using namespace std;

void daonguoc(int* a,int n){
    int* start = a;
    int* end = a + n - 1;
    
    while(start < end){
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void print(int* a,int n){
    for(int i=0;i<n;i++){
        cout<<"element - "<<i+1<<" : "<<a[i]<<endl;
    }
    cout<<endl;
}
int main(){
    int x;
    cout<<"Input the number of element to store in the array (max 10): ";cin>>x;
    int a[x];
    cout<<"Input "<<x<<" numbers of elements in the array: "<<endl;
    for(int i=0;i<x;i++){
        cout<<"element - "<<i+1<<" : ";cin>>a[i];
    }
    
    cout<<"The element of array in reverse order are :"<<endl;
    daonguoc(a,x);
    print(a,x);
    return 0;
}