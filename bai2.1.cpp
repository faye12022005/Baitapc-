#include <iostream>
using namespace std;
int main(){
	int m=10,o,n;
	cout<<"dia chi cua m: "<<&m<<endl;
	int *z = &m;
	cout<<"dia chi cua m: "<<z<<endl;
	cout<<"dia chi cua n: "<<&n<<endl;
	cout<<"dia chi cua o: "<<&o<<endl;
	return 0;
	
}
