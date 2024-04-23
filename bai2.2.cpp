#include <iostream>
using namespace std;
int main(){
	int m = 29;
	int *ab = &m;
	cout<<"value of m  : "<<m<<endl;
	cout<<"address of m: "<<ab<<endl;
	cout<<"------------------------"<<endl;
	*ab = 34;
	cout<<"value of m  : "<<m<<endl;
	cout<<"address of m: "<<ab<<endl;
	cout<<"------------------------"<<endl;
	*ab = 7;
	cout<<"value of m  : "<<m<<endl;
	cout<<"address of m: "<<ab;
}
