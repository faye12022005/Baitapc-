#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <algorithm>
using namespace std;
void sort(int* a,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j])
                swap(a[i],a[j]);
        }
    }
}
int main() {
    int n;
    cout<<"Nhap so luong phan tu: ";cin>>n;
    int* a = new int[n];
    
    srand((int)time(0));
    for(int i=0; i<n; i++){
        a[i] = rand()%100;
    }
    
    // print 
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    sort(a,n);
    
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
