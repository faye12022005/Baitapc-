#include <iostream>
#include <string>
using namespace std;

bool ChuoiCon(const string& word, const string& subse){
    int pos = 0;
    for(char c : subse){
        pos = word.find(c,pos);
        if(pos == string::npos){
            return false;
        }
        pos++;
    }
    return true;
    
}

int main() {
    string word1 = "CGTTCGGCTATCGTACGTTCTATTCTATGATTTCTAA";
    string subse1 = "CGTTCGGCTATGCZTTCTACTTATTCTA";
    cout<<"Is subse1 is the subsequence of word1? ";
    cout<<ChuoiCon(word1,subse1);
    return 0;
}

