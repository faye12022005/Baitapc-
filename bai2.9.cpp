#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

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
    
    // find maxElement
    int maxElement = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] > maxElement)
            maxElement = a[i];
    }
    
    cout<<"Phan tu lon nhat trong mang: "<<maxElement;
    return 0;
}
