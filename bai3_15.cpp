#include <iostream>
#include <string>

using namespace std;

string numberToWords(int num) {
    string ones[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string teens[] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if (num >= 1 && num <= 9) {
        return ones[num];
    } else if (num >= 11 && num <= 19) {
        return teens[num - 10];
    } else if (num >= 20 && num <= 99) {
        int tensDigit = num / 10;
        int onesDigit = num % 10;
        return tens[tensDigit] + (onesDigit > 0 ? ("_" + ones[onesDigit]) : "");
    } else {
        return "Số nhập không hợp lệ!";
    }
}

int main() {
    int inputNumber;
    cout << "Nhập một số (từ 1 đến 99): ";
    cin >> inputNumber;

    string result = numberToWords(inputNumber);
    cout << "Chuỗi tiếng Anh tương ứng: " << result << endl;

    return 0;
}
