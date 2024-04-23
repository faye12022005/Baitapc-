#include <iostream>
using namespace std;
int main(){
	int m,n;
	int *a;
	int *b;
	cout<<"Enter m: ";cin>>m;
	cout<<"Enter n: ";cin>>n;
	a = &m;
	b = &n;
	int c = *a + *b;
	cout<<"sum of m and n = "<<c;
}
