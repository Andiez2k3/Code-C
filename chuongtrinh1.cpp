#include <iostream>
using namespace std;
int main() {
wcout << "Xin Chao \n";
    double a,b,c,d;
    double cong,tru,chia,nhan;
    cout << "\nNhap vao 4 so thuc: ";
    cin >> a >> b >> c >> d;
    cong = a + b + c + d;
    tru = a - b - c - d;
    chia = a / b / c / d;
    nhan = a * b * c * d;
    cout << "Tong: " << cong << endl;
    cout << "Hieu: " << tru << endl;
    cout << "Thuong: " << chia << endl;
    cout << "Tich: " << nhan << endl;
}

