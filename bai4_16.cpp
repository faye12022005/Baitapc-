#include <iostream>
#include <fstream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void Selection_Sort(int *a, int n){
    for(int i = 0; i < n - 1; i++){
        int min_index = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min_index]){
                min_index = j;
            }
        }
        if(min_index != i){
                swap(a[i],a[min_index]);
        }
    }
}

int findmax(int *a,int n){
    int max = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] > max)
            max = a[i];
    }
    return max;
}

int findmin(int *a,int n){
    int min = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] < min)
            min = a[i];
    }
    return min;
}

double findAverage(int *a, int n){
    double sum;
    for(int i = 0; i < n; i++){
        sum = sum + a[i];
    }
    double average = sum / n;
    return average;
}

int main(){
    ifstream inputFile("Exercise 4_16.txt");
    if(!inputFile.is_open()){
        cerr << "Can't open file!" << endl;
        return 1;
    }

    int n;
    inputFile >> n;
    cout<<n<<endl;
    int* a = new int[n];
    for(int i = 0; i < n; i++){
        inputFile >> a[i];
    }
    Selection_Sort(a,n);
    for(int i = 0; i < n; i++){
        cout<<a[i]<<endl;
    }
    cout<<"Min : "<<findmin(a,n)<<endl;
    cout<<"Max : "<<findmax(a,n)<<endl;
    cout<<"Ave : "<<findAverage(a,n);

    inputFile.close();
    return 0;
}