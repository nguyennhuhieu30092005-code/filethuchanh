#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double tienLuong, tientheogio, giolam;
    cout << fixed << showpoint << setprecision;
    cout << "xin moi nhap gio lam va tien theo gio:";
    cin >> giolam >> tientheogio;
    if (giolam > 40.0)
        tienLuong = 40.0 * tientheogio + 1.5 * tientheogio * (giolam - 40.0);
        else
            tienLuong = giolam * tientheogio;
    cout << endl;
    cout << "tien luong cua ban la:" << tienLuong << endl;


    return 0;
}