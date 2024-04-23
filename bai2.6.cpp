#include <iostream>
using namespace std;
int main(){
	int a,b;
	int *num1 = &a;
	int *num2 = &b;
	cout<<"Enter a : ";cin>>*num1;
	cout<<"Enter b : ";cin>>*num2;
	int larger = (*num1 > *num2)? *num1:*num2 ;
	cout<<"so lon nhat trong hai so: "<<larger;
}
