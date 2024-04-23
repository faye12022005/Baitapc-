#include <iostream>
#include <cstring>
using namespace std;
struct Employee{
    string Name;
    int ID;
};

int main(){
    Employee* nhanvien[1];
    Employee* Alex = new Employee;
    
    Alex->Name = "Alex";
    Alex->ID = 1002;
    
    nhanvien[0] = Alex;
    
    cout<<"Employee Name: "<<nhanvien[0]->Name<<endl;
    cout<<"Employee ID: "<<nhanvien[0]->ID<<endl;
    
    return 0;
}