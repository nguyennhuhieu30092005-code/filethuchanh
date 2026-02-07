#include <iostream>
using namespace std;

int main(){
    int pheptoan;
    double so1, so2;
    cout << "vui long nhap 2 so" << endl;
    cin >> so1 >> so2;
    cout << "vui long chon phep toan" << endl;
    
    cout << "vui long nhap phep toan";
    cout << "\n1  phep cong";
    cout << "\n2  phep nhan";
    cout << "\n3  phep chia" << endl;
    cin >> pheptoan;
    switch (pheptoan)
    {
    case 1:
        cout << "Tong 2 so la: " << so1 + so2 << endl;
        break;
    case 2:
        cout << "Tich 2 so la: " << so1 * so2 << endl;
        break;
    case 3:
        cout << "Thuong 2 so la: " << so1 / so2 << endl;    
        break;
    }

    return 0;
}