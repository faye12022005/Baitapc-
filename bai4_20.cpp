#include <iostream>
#include <string> 
#include <fstream>
#define maxn 10000
using namespace std;

struct Product{
    string code;
    string name;
    int quantity;
    int price;
    int subtotal;
};

void Create_List(Product list[],int &n){
    cout<<"Enter the numbers of item: ";
    cin>>n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        cout<<"Enter Information of item "<<i+1<<" : "<<endl;
        cout << "Enter product code: ";
        getline(cin, list[i].code);
        cout << "Enter product name: ";
        getline(cin, list[i].name);
        cout << "Enter quantity: ";
        cin >> list[i].quantity;
        cout << "Enter price: ";
        cin >> list[i].price;
        cin.ignore();
        list[i].subtotal = list[i].quantity * list[i].price;
    }
}

void Update_File(const string& FileName,Product list[],int n){
    ofstream output(FileName);
    if(!output.is_open()){
        cout << "Cant't open File!";
        return;
    }
    output << n << endl;
    for(int i = 0; i < n; i++){
        output << list[i].code<<endl;
        output << list[i].name<<endl;
        output << list[i].quantity<<endl;
        output << list[i].price<<endl;
    }
    output.close();
}

void ReadFile_and_Print(const string& FileName){
    ifstream input(FileName);
    if(!input.is_open()){
        cout << "Cant't open File!";
        return;
    }
    int n;
    input >> n;
    Product list[maxn];
    input.ignore();
    for(int i = 0; i < n; i++){
        getline(input, list[i].code);
        getline(input, list[i].name);
        input>>list[i].quantity;
        input>>list[i].price;
        input.ignore();
        list[i].subtotal = list[i].quantity * list[i].price;
    }
    input.close();
    cout << n << endl;
    for(int i = 0; i < n; i++){
        cout << "Information of item " << i+1 <<" :"<<endl;
        cout << "code item      : " << list[i].code<<endl;
        cout << "name item      : " << list[i].name<<endl;
        cout << "quantity item  : " << list[i].quantity<<endl;
        cout << "price item     : " << list[i].price<<endl;
        cout << "subtotal item  : " << list[i].subtotal<<endl;
    }
}

void Display_Information(Product p){
    cout << "Information of item " << " :"<<endl;
    cout << "code item      : " << p.code<<endl;
    cout << "name item      : " << p.name<<endl;
    cout << "quantity item  : " << p.quantity<<endl;
    cout << "price item     : " << p.price<<endl;
    cout << "subtotal item  : " << p.subtotal<<endl;
}

void Print_special(Product list[],int n){
    string search;
    cout << "Enter the type of product you want to print : ";
    getline(cin, search);
    for(int i = 0; i < n; i++){
        size_t pos;
        if(pos = (list[i].name).find(search) != string::npos ){
            Display_Information(list[i]);
        }
    }
}

void Insert_Item(const string& FileName, Product list[], int n){
    int pos;
    cout << "Enter the position you want to insert: ";cin>>pos;
    if (pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return;
    }
    Product newItem;
    cout<<"Enter Information of item " << " : "<<endl;
    cin.ignore();
    cout << "Enter product code: ";
    getline(cin, newItem.code);
    cout << "Enter product name: ";
    getline(cin, newItem.name);
    cout << "Enter quantity: ";
    cin >> newItem.quantity;
    cout << "Enter price: ";
    cin >> newItem.price;
    newItem.subtotal = newItem.quantity * newItem.price;

    for (int i = n - 1; i >= pos - 1; i--) {
        list[i+1] = list[i];
    }
    list[pos - 1] = newItem;
    n++;
    Update_File(FileName,list,n);
}

void Delete_Item(const string& FileName, Product list[], int n){
    int pos;
    cout << "Enter the position you want to delete: ";cin>>pos;
    if (pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return;
    }

    for(int i = pos - 1; i < n; i ++){
        list[i] = list[i+1];
    }
    n--;
    Update_File(FileName,list,n);
}

int Find_pos(Product list[], int n, const string& find) {
    for (int i = 0; i < n; i++) {
        if (list[i].code == find)
            return i;
    }
    return -1;
}

void Change_price(const string& FileName,Product list[],int n){
    cout<<"Enter the code of product you want to change price: ";
    string code;
    cin>>code;
    int pos = Find_pos(list,n,code);
    if(pos != -1){
        cout<<"Enter the new price: ";
        int newprice;
        cin>>newprice;
        list[pos].price = newprice;
        list[pos].subtotal = list[pos].quantity * list[pos].price;
    }
    Update_File(FileName,list,n);
}

void Menu_Update_Product(const string& FileName,Product list[], int n){
    char choice;
    cout<<"-------------MENU-------------------"<<endl;
    cout<<"|1. Insert product                 |"<<endl;
    cout<<"|2. Delete product                 |"<<endl;
    cout<<"|3. Change Price product by code   |"<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<" What is your choice : ";
    cin>>choice;
    switch(choice){
        case '1':
            Insert_Item(FileName,list,n);
            break;
        case '2':
            Delete_Item(FileName,list,n);
            break;
        case '3':
            Change_price(FileName,list,n);
            break;
        default :
            cout<<"Invalid choice!"<<endl;
            return;
    }
}

int main(){
    int n;
    Product list[maxn];
    string FileName = "exercise 4_20.txt";
    Create_List(list,n);
    Update_File(FileName,list,n);

    // ReadFile_and_Print(FileName);
    // Print_special(list,n);
    // Insert_Item(FileName,list,n);
    // Delete_Item(FileName,list,n);

    //Menu_Update_Product(FileName,list,n);

    return 0;
}