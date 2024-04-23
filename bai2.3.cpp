#include <iostream>
using namespace std;
int main(){
	int m = 300;
	long double fx = 300.600006;
	int z;
	char cht = 'z';
	
	cout<<"address of m  : "<<&m<<endl;
	cout<<"address of fx : "<<&fx<<endl;
	cout<<"address of cht: "<<(void*)&cht<<endl;
	cout<<"--------------------------------------"<<endl;
	
	int *a = &m;
	long double *b = &fx;
	char *c = &cht;
	cout<<"value at address of m   :"<<*(&m)<<endl;
	cout<<"value at address of fx  :"<<*(&fx)<<endl;
	cout<<"value at address of cht :"<<*(&cht)<<endl;
	cout<<"--------------------------------------"<<endl;
	
	cout<<"address of m  : "<<a<<endl;
	cout<<"address of fx : "<<b<<endl;
	cout<<"address of cht: "<<(void*)c<<endl;
	cout<<"--------------------------------------"<<endl;
	
	cout<<"value at address of m   :"<<*a<<endl;
	cout<<"value at address of fx  :"<<*b<<endl;
	cout<<"value at address of cht :"<<*c<<endl;
	cout<<"--------------------------------------"<<endl;
	return 0;
}
