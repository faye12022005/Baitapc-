#include <iostream>
using namespace std;

void Input(int **arr,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
}
void Output(int **arr,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
int DCC(int **a,int n){
	int s = 0;
	for(int i=0;i<n;i++){
		s = s + a[i][i];
	}
	return s;
}
int main(){
	int n;
	cout<<"nhap vao n: ";cin>>n;
	int **arr = new int*[n];
	
	for(int i=0;i<n;i++){
		arr[i] = new int[n];
	}
	
	Input(arr,n);
	Output(arr,n);
	cout<<"tong duong cheo chinh = "<<DCC(arr,n);
	
	for (int i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
	return 0;
}
