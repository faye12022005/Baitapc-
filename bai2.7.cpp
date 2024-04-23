#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter n: ";cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int *temp;
	for(temp = a;temp < a + n;temp++){
		cout<<*temp<<" ";
	}
	return 0;
}
