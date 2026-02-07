#include <iostream>
#include <cmath> // Thư viện để dùng lệnh pow (tính lũy thừa -1 mũ N)

using namespace std;

int main() {
    int N;
    double S = 1.0; // Bắt đầu từ 1 theo đề bài

    cout << "Nhap so nguyen duong N: ";
    cin >> N;

    // Vòng lặp hành quân từ 1 đến N
    for (int i = 1; i <= N; i++) {
        // Tính giá trị của phân số tại bước i: 1 / (i * (i + 1))
        double phanSo = 1.0 / (i * (i + 1));

        // Kiểm tra tín hiệu để quyết định Cộng hay Trừ
        // Công thức (-1)^i giúp ta đổi dấu: i lẻ thì Trừ, i chẵn thì Cộng
        if (i % 2 != 0) {
            S = S - phanSo; // Bước lẻ: Trừ
        } else {
            S = S + phanSo; // Bước chẵn: Cộng
        }
    }

    cout << "Tong S la: " << S << endl;

    return 0;
}