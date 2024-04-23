#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
struct NhanVien{
    string Ten_NV, Ma_NV, Ma_phong;
    float HesoLuong, Luongcoso, Thanhtien;
    NhanVien* next;
};

void append(NhanVien *&danhsach,NhanVien* nv){
    if(danhsach == NULL){
        danhsach = nv;
    }else{	
        NhanVien* current = danhsach;
        while(current->next != NULL){
            current = current->next;
        }
        current->next = nv;
    }
}

NhanVien* Input(){
    NhanVien* danhsach = NULL;
    int n;
    cout<<"Nhập vào số lượng nhân viên: ";cin>>n;
    for(int i=0;i<n;i++){
        cin.ignore();
        cout<<"Nhập vào thông tin nhân viên thứ "<<i+1<<" : "<<endl;
        NhanVien* nv = new NhanVien();
        cout<<"Ten         : ";getline(cin,nv->Ten_NV);
        cout<<"Mã nhân viên: ";getline(cin,nv->Ma_NV);
        cout<<"Mã phòng    : ";getline(cin, nv->Ma_phong);
        cout<<"Hệ số lương : ";cin>>nv->HesoLuong;
        cout<<"Lương cơ sở : ";cin>>nv->Luongcoso;
        nv->Thanhtien = nv->HesoLuong * nv->Luongcoso;
        append(danhsach,nv);
    }
    return danhsach;
}

void Print_Information(NhanVien* nv){
    cout<<"Tên                 : "<<nv->Ten_NV<<endl;
    cout<<"Mã MV               : "<<nv->Ma_NV<<endl;
    cout<<"Mã phòng ban        : "<<nv->Ma_phong<<endl;
    cout<<"Hệ số lương         : "<<nv->HesoLuong<<endl;
    cout<<"Lương cơ sở         : "<<nv->Luongcoso<<"$"<<endl;
    cout<<"Thành tiền          : "<<nv->Thanhtien<<"$"<<endl;
}

int size_List(NhanVien* danhsach){
    int index = 0;
    NhanVien* current = danhsach;
    while(current != NULL){
        index++;
        current = current->next;
    }
    return index;
}

void Print(NhanVien* danhsach){
    NhanVien* current = danhsach;
    int i = 1;
    while(current != NULL){
        cout<<"Thông tin nhân viên thứ "<<i<<": "<<endl;
        Print_Information(current);
        current = current->next;
        i++;
    }
}

void Insert_at_index(NhanVien *&danhsach, NhanVien* nv,int index){
    if(index < 0){
        cout<<"Vị trí không hợp lệ: "<<endl;
    }
    if(index == 0){
        nv->next = danhsach;
        danhsach = nv;
    }
    
    NhanVien* current = danhsach;
    int count = 0;
    while(current != NULL && count < index - 1){
        current = current->next;
        count ++;
    }
    if(current == NULL){
        cout<<"Vị trí không hợp lệ: "<<endl;
    }
    nv->next = current->next;
    current->next = nv;
}

void Delete_at_index(NhanVien *&danhsach, NhanVien* nv,int index){
    if(index < 0){
        cout<<"Vị trí không hợp lệ: "<<endl;
    }
    if(index == 0){
        NhanVien* temp = danhsach;
        danhsach = danhsach->next;
        delete temp;
        return;
    }
    
    NhanVien* current = danhsach;
    int count = 0;
    while(current != NULL && count < index - 1){
        current = current->next;
        count ++;
    }
    if(current == NULL){
        cout<<"Vị trí không hợp lệ: "<<endl;
    }
    NhanVien* temp = current->next;
    current->next = current->next->next;
    delete temp;
}

void Tong_Luong_Theo_MaPhong(NhanVien* danhsach,string ma_phong) {
    float tong_luong = 0;
    NhanVien* current = danhsach;
    while (current != nullptr) {
        if (current->Ma_phong == ma_phong) {
                tong_luong = tong_luong + current->Thanhtien;
        }
        current = current->next;
    }
    cout << "Tổng lương nhân viên thuộc mã phòng: " << ma_phong << " la: " << tong_luong << endl;
}

int main(){
    NhanVien* danhsach = Input();
    Print(danhsach);
    
    int index;
    //int index = size_List(danhsach) / 2;//thêm nhân viên vào giữa danh sách
    cout<<"Nhập vào thông tin nhân viên muốn chèn: "<<endl;//thêm nhân viên vào vị trí tùy thích
    NhanVien* nv = Input();
    cout<<"Nhập vào vị trí muốn chèn: ";cin>>index;
    Insert_at_index(danhsach,nv,index);
    cout<<"Danh sách nhân viên sau khi chèn: "<<endl;
    Print(danhsach);
    
    int index1;
    //int index1 = size_List(danhsach) / 2; //xóa nhân viên ở giữa danh sách
    cout<<"Nhập vào vị trí muốn xóa: ";cin>>index1;//xóa nhân viên ở vị trí tùy thích
    Delete_at_index(danhsach,nv,index);
    cout<<"Danh sách nhân viên sau khi xóa: "<<endl;
    Print(danhsach);
    
    string ma_phong;
    cout<<"Nhập vào Mã phòng muốn tính tổng lương: ";
    cin>>ma_phong;
    Tong_Luong_Theo_MaPhong(danhsach,ma_phong);
    return 0;
}
