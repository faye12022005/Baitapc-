#include <iostream>
#include <string>
using namespace std;

string longest_Common_Prefix(string arr_string[], int arr_size){
    int size = arr_size;
    string str = arr_string[0];
    if(size == 1)
        return str;
    string result = "";
    int j = 1;
    for(int i = 0; i < size; i++){
        while(j < size){
            if(str[i] == arr_string[j][i]){
                j++;
            }else{
                return result;
            }
        }
        result = result + str[i];
        j = 1;
    }
    return result;
}

int main() {
    string arr[] =  {"Padas", "Packed", "Pace", "Pacha"};
    int size = sizeof(arr) / sizeof(arr[0]);
    string prefix = longest_Common_Prefix(arr, size);
    cout << "Longest common prefix: " << prefix << endl;
    return 0;
}
