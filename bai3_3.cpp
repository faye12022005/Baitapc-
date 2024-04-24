#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char chuoi[100] = "cpp string exercises";
	// cout<<"Enter string: ";
	// cin.getline(chuoi,100);
	if(chuoi[0] == '\0'){
		cout<<"Empty";
	}else{
		if(chuoi[0] >= 97 && chuoi[0] <= 123){
			chuoi[0] = chuoi[0] - 32;
		}
		for(int i = 1; chuoi[i] != '\0';i++){
			if(chuoi[i-1] == ' '){
				if(chuoi[i] >= 97 && chuoi[i] <= 123){
					chuoi[i] = chuoi[i] - 32;
				}
			}
		}
	}
	cout<<chuoi;
	return 0;
}

