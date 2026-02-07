#include <iostream>

using namespace std;

int main() {
    float n;
    float max, min;
    bool laSoDauTien = true; 

    cout << "--- MAX/MIN ---" << endl;
    cout << "Nhap cac so thuc: " << endl;

   
    while (true) {
        cout << "Nhap so: ";
        cin >> n;

    
        if (n == 0) {
            break; 
        }

       
        if (laSoDauTien) {
            max = n;
            min = n;
            laSoDauTien = false; 
        } else {
            if (n > max) max = n; 
            if (n < min) min = n; 
        }
    }

   
    if (!laSoDauTien) {
        cout << "-----------------------------------" << endl;
        cout << "Bao cao: So lon nhat la: " << max << endl;
        cout << "Bao cao: So nho nhat la: " << min << endl;
    } else {
        cout << "Khong co du lieu de bao cao!" << endl;
    }

    return 0;
}
