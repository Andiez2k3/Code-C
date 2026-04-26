#include <iostream>
using namespace std;
int main() {
   string name;
   string ten, diachi;
   int dob;
   name = "CodeLearn";
   dob = 2026;
   int a = 8343;
   int b = 6453;
   int  difference = a - b;
   cout << "a - b = " << difference << "\n";
    cout << "Nhap ten: " << "\n";
    getline(cin, ten);
    cout << "Nhap address: " << "\n";
    getline(cin, diachi);
    cout << "--- Ket qua ---" << "\n";
    cout << "Ten: " << ten << "\n";
    cout << "Address: " << diachi << "\n"; // Sẽ không bao giờ ra số 0 nếu là string
      cout << "Ten :" << name << "\n";
   cout << "Nam Sinh :" << dob << "\n";
    system("pause");
    return 0;

}