#include <iostream>
using namespace std;
int main() {
 int a,b,c;
 c = 0;
 cin >> a >> b;
 for(int i = a; i <= b; i++) {
    if(i % 3 == 0) {
        cout << i << "  ";
        c++;
    }
 }
 cout << "\nNumber of multiples of 3: " << c << endl;
 system("pause");
  return 0;
}