#include <iostream>

using namespace std;

int main() {
    int a, n;
    long long ketQua = 1; // Kho chứa kết quả, bắt đầu từ 1

    // Nhập dữ liệu từ "trinh sát"
    cout << "Nhap co so a: ";
    cin >> a;
    cout << "Nhap so mu n: ";
    cin >> n;

    // Vòng lặp FOR: Chạy từ 1 đến n
    // Mỗi bước đi (i++), ta thực hiện nhân thêm một con số a vào kho
    for (int i = 1; i <= n; i++) {
        ketQua = ketQua * a; 
    }

    // Báo cáo kết quả cuối cùng
    cout << "Ket qua " << a << "^" << n << " = " << ketQua << endl;

    return 0;
}