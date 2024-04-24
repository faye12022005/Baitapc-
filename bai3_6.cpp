#include <iostream>
#include <string>
using namespace std;

int countPairs(const string& input){
    int count = 0;
    int n = input.length();
    for(int i=0;i<n;i++){
        if(input[i] == 'e'){
            for(int j=i+1;j<n;j++){
                if(input[j] == 'g' && j - i == 2){
                    count++;
                    break;
                }
            }
        } else if(input[i] == 'g'){
            for(int j=i+1;j<n;j++){
                if(input[j] == 'e' && j - i == 2){
                    count++;
                    break;
                }
            }
        }
    }
    return count;
}

int main() {
    string input = "eagerer";
    // cout << "Nhap chuoi: ";
    // getline(cin, input);

    int pairCount = countPairs(input);

    cout << "Output: " << input << " -> " << pairCount << endl;

    return 0;
}

