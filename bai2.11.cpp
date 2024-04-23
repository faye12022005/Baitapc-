
#include <iostream>
#include <cstring>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a[3];
    for(int i=0;i<3;i++){
        cout<<"Element "<<i+1<<" : ";cin>>a[i];
    }cout<<endl;
    
    cout<<"The value before swapping are: "<<endl;
    for(int i=0;i<3;i++){
        cout<<"Element "<<i+1<<" : "<<a[i]<<endl;
    }cout<<endl;
    
    swap(&a[0],&a[2]);
    swap(&a[1],&a[2]);
    
    cout<<"The value after swapping are: "<<endl;
    for(int i=0;i<3;i++){
        cout<<"Element "<<i+1<<" : "<<a[i]<<endl;
    }
    return 0;
}
