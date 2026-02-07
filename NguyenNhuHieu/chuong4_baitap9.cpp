#include <iostream>

using namespace std;

int main() {
    int n;
    long long giaiThua = 1;

   
    cout << "Nhap mot so nguyen duong n: ";
    cin >> n;

 
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
    }

  
    int hangChuc = (giaiThua / 10) % 10;
    
 
    int hangTram = (giaiThua / 100) % 10;

    // Bước 4: Báo cáo kết quả
    cout << n << "! = " << giaiThua << endl;
    cout << "Chu so hang chuc: " << hangChuc << endl;
    cout << "Chu so hang tram: " << hangTram << endl;

    return 0;
}