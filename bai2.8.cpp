#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
void swap(char *a,char *b){
	char t = *a;
	*a = *b;
	*b = t;
}
void Hoan_vi(char *a,int start,int end){
	if(start == end){
		cout<<a<<" ";
	}else{
		for(int i=start;i<=end;i++){
			swap(a + start, a + i);
			Hoan_vi(a,start+1,end);
			swap(a+ start, a + i);
		}
	}
	
}
using namespace std;
int main(){
	char a[] = "abc";
	int n = strlen(a);
	cout<<"cac hoan vi cua chuoi: "<<endl;
	Hoan_vi(a,0,n-1);
	return 0;
}
