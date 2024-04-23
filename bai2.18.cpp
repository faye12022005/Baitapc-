
#include <iostream>
#include <cstring>
using namespace std;
struct ConNguoi{
    string Ten;
    string Diachi;
};


int main(){
   ConNguoi John;
   ConNguoi* p = &John;
   
   p->Ten = "John Alter";
   p->Diachi = "Court Street";
   
   cout<<p->Ten<<" form "<<p->Diachi;
}
