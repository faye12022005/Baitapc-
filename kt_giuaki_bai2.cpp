#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>
using namespace std;

struct Car {
    string Code, Brand, Type;
    int NamSX, Price;
    Car* next;
};

void append(Car*& list, Car* NewCar) {
    if (list == NULL) {
        list = NewCar;
    } else {
        Car* current = list;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = NewCar;
    }
}

Car* Input(const string& filename) {
    ifstream inputFile(filename);
    if (!inputFile) {
        cout << "Không thể mở tệp " << endl;
        return NULL;
    }

    Car* list = NULL;
    int n;
    cout << "Nhập vào số lượng Oto: ";
    inputFile >> n;
    inputFile.ignore();
    for (int i = 0; i < n; i++) {
        Car* NewCar = new Car();
        getline(inputFile, NewCar->Code);
        getline(inputFile, NewCar->Brand);
        getline(inputFile, NewCar->Type);
        inputFile >> NewCar->NamSX;
        inputFile >> NewCar->Price;
        NewCar->next = NULL;
        append(list, NewCar);
        inputFile.ignore();
    }
    inputFile.close();
    return list;
}

void Print_Imf(Car* Oto) {
    cout << "Mã xe : " << Oto->Code << endl;
    cout << "Hãng xe: " << Oto->Brand << endl;
    cout << "Loại xe : " << Oto->Type << endl;
    cout << "Năm sản xuất : " << Oto->NamSX << endl;
    cout << "giá tiền : " << Oto->Price << endl;
}

void Print_of_brand(Car* list) {
    string brand = "Honda";
    Car* current = list;
    int i = 0;
    cout << "Các xe của hãng Honda: " << endl;
    while (current != NULL) {
        if (current->Brand == brand) {
            Print_Imf(current);
            i++;
        }
        current = current->next;
    }
    if(i == 0){
        cout<<"Không tìm thấy: "<<endl;
    }
}

void Print(Car* list){
    Car* current = list;
    int i = 1;
    while(current != NULL){
        cout<<"Thông tin xe số "<<i<<endl;
        Print_Imf(current);
        current = current->next;
    }
    cout<<endl;
}

void sortCar(Car*& list) {
    Car* current = list;
    Car* prev = nullptr;
    while (current != nullptr && current->next != nullptr) {
        Car* nextNode = current->next;
        if (current->Price > nextNode->Price || (current->Price == nextNode->Price && current->NamSX > nextNode->NamSX)) {
            if (current == list) {
                list = nextNode;
            } else {
                prev->next = nextNode;
            }
            current->next = nextNode->next;
            nextNode->next = current;
            current = list;
            prev = nullptr;
        } else {
            prev = current;
            current = current->next;
        }
    }
}

void delete_Car_of_brand(Car*& list){
    Car* current = list;
    Car* prev = NULL;
    while(current != NULL){
        if(current->Brand == "Honda"){
            if(prev == NULL){
                list = current->next;
            } else {
                prev->next = current->next;
            }
            Car* temp = current;
            current = current->next;
            delete temp;
        }else{
            prev = current;
            current = current->next;
        }        
    }
}



int main() {
    Car* list = Input("input.txt");
    Print(list);
    //sortCar(list);
    //Print(list);
    //Print_of_brand(list);
    delete_Car_of_brand(list);
    Print(list);
    return 0;
}
