#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int** assign_value(const string& FileName,int &row, int &column){
    ifstream input(FileName);
    if(!input.is_open()){
        cerr << "Can't open file!" << endl;
        return nullptr;
    }
    input >> row >> column;
    int **a = new int*[row];
    for(int i = 0; i < row; i++){
        a[i] = new int[column];
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            input >> a[i][j];
        }    
    }
    input.close();
    return a;
}

void Print(const string& FileName,int **a, int row, int column){
    ofstream output(FileName, ios::app);
    if(!output.is_open()){
        cerr << "Can't open file!" << endl;
        return;
    }
    output << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            output << a[i][j] << " ";
        }
        output << endl;    
    }
    output.close();
}

void Sum_Row(const string& FileName,int **a, int row, int column){
    ofstream output(FileName, ios::app);
    if(!output.is_open()){
        cerr << "Can't open file!" << endl;
        return;
    }
    output<< "Total Row: " << endl;
    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < column; j++){
            sum = sum + a[i][j];
        }
        output<<"Total Row "<<i+1<<" : "<<sum<<endl;
    }
    output.close();
}

void Sum_Columns(const string& FileName,int **a, int row, int column){
    ofstream output(FileName, ios::app);
    if(!output.is_open()){
        cerr << "Can't open file!" << endl;
        return;
    }
    output<< "Total Columns: " << endl;
    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < column; j++){
            sum = sum + a[j][i];
        }
        output<<"Total Column "<<i+1<<" : "<<sum<<endl;
    }
    output.close();
}

void Sum_All(const string& FileName, int **a, int row, int column){
    ofstream output(FileName, ios::app);
    if(!output.is_open()){
        cerr << "Can't open file!" << endl;
        return;
    }
    int sum = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            sum = sum + a[i][j];
        }
    }
    output<<"Total All : "<<sum<<endl;
    output.close();
}

void Sum_MainDiagonal_SecondaryDiagonal(const string& FileName, int **a, int row, int column){
    ofstream output(FileName, ios::app);
    if(!output.is_open()){
        cerr << "Can't open file!" << endl;
        return;
    }
    
    int Smain = 0;
    int Ssecondary = 0;
    for(int i = 0; i < row; i++){
        Smain = Smain + a[i][i];
    }
    output<<"Total Main Diagonal: "<<Smain<<endl;
    for(int i = 0; i < row; i++){
        Ssecondary = Ssecondary + a[i][row - i - 1];
    }
    output<<"Total Secondary Diagonal: "<<Ssecondary<<endl;
    output.close();
}

void Find_Max_Min(const string& FileName, int **a, int row, int column){
    ofstream output(FileName, ios::app);
    if(!output.is_open()){
        cerr << "Can't open file!" << endl;
        return;
    }
    int max = a[0][0];
    int min = a[0][0];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if(a[i][j] > max)
                max = a[i][j];
            if(a[i][j] < min)
                min = a[i][j];
        }
    }
    output << "Max : "<<max<<endl;
    output << "Min : "<<min<<endl;

    output.close();
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void Sort1(int **a, int row, int column){
    int total = row * column;
    int *singleD = new int[total];
    int index = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0 ; j < column; j++){
            singleD[index++] = a[i][j]; 
        }
    }

    for(int i = 0; i < total - 1; i++){
        for(int j = 0; j < total - i - 1; j++){
            if(singleD[j] > singleD[j+1]){
                swap(singleD[j], singleD[j+1]);
            }
        }
    }

    index = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0 ; j < column; j++){
            a[i][j] = singleD[index++]; 
        }
    }
}

void Sort2(int **a, int row, int column){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column - 1; j++){
            for(int k = 0; k < column - j - 1; k++){
                if(a[i][k] > a[i][k+1]){
                    swap(a[i][k],a[i][k+1]);
                }
            }
        }
    }
}

void Sort3(int **a, int row, int column){
    for(int i = 0; i < column; i++){
        for(int j = 0; j < row - 1; j++){
            for(int k = 0; k < row - j - 1; k++){
                if(a[k][i] > a[k+1][i]){
                    swap(a[k][i],a[k+1][i]);
                }
            }
        }
    }
}

void deleteRow(int **a, int& row, int column) {
    int columnToDelete;
    cout<<"Enter the row you want delete: ";cin>>columnToDelete;
    if (columnToDelete < 0 || columnToDelete >= row) {
        cout << "Invalid row index!" << endl;
        return;
    }

    for (int i = columnToDelete; i < row - 1; i++) {
        for (int j = 0; j < column; j++) {
            a[i][j] = a[i + 1][j];
        }
    }

    delete[] a[row - 1];
    row--;
}

void deleteColumn(int **a, int& row, int& column) {
    int columnToDelete;
    cout << "Enter the column you want to delete: ";
    cin >> columnToDelete;
    if (columnToDelete < 0 || columnToDelete >= column) {
        cout << "Invalid column index!" << endl;
        return;
    }

    for (int i = 0; i < row; i++) {
        for (int j = columnToDelete; j < column - 1; j++) {
            a[i][j] = a[i][j + 1];
        }
    }

    column--;
}

bool IsPrime(int n){
    if(n < 2)
        return false;
    double k = sqrt(n);
    for(int i = 2; i <= k; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int CountPrime(int **a, int row, int column){
    int count = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if(IsPrime(a[i][j]))
                count++;
        }
    }
    return count;
}

int main(){
    string FileName = "exercise 4_19.txt";
    int row,column;
    int** a = assign_value(FileName,row,column);
    ofstream output(FileName);
    if(!output.is_open()){
        cerr << "Can't open file!" << endl;
        return 1;
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            output << a[i][j] << " ";
        }
        output << endl;    
    }

    // Sum_Row(FileName, a, row, column);
    // Sum_Columns(FileName, a, row, column);
    // Sum_All(FileName, a, row, column);
    // Sum_MainDiagonal_SecondaryDiagonal(FileName,a,row,column);
    // Find_Max_Min(FileName,a,row,column);

    //sắp xếp không phân biệt dòng(cột)
    // Sort1(a,row,column);
    // Print(FileName,a,row,column);

    //sắp xếp theo dòng
    //Sort2(a,row,column);
    //Print(FileName,a,row,column);

    //sắp xếp theo cột
    // Sort3(a,row,column);
    // Print(FileName,a,row,column);

    // deleteRow(a,row,column);
    // Print(FileName,a,row,column);

    // deleteColumn(a,row,column);
    // Print(FileName,a,row,column);

    int count = CountPrime(a,row,column);
    if(count == 0){
        output<< "There are not Prime number!";
    }else{
        output<<"In the array there are "<<count<<" prime numbers"<<endl;
    }

    output.close();
    for (int i = 0; i < row; i++) {
        delete [] a[i];
    }
    delete [] a;
    return 0;
}