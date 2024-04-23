#include <iostream>
using namespace std;
int sum(int *a,int *b){
	int s = *a + *b;
	return s;
}
int main(){
	int m,n;
	cout<<"Enter m: ";cin>>m;
	cout<<"Enter n: ";cin>>n;
	int *a = &m;
	int *b = &n;
	cout<<"sum of m and n = "<<sum(a,b);
}
