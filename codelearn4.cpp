#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if (a <= b && b <= c) {
        cout << "increasing" << endl;
    } else {
        cout << "decreasing" << endl;
    }
    system("pause");
    return 0;
}