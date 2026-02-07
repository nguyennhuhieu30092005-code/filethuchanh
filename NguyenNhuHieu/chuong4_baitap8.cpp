#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    int N;
    double S = 0; 

    cout << "Nhap vao so nguyen duong N: ";
    cin >> N;

   
    for (int i = 1; i <= N; i++) {
       
        S = S + (1.0 / (i * i));
    }

   
    cout << fixed << setprecision(5);
    cout << "Tong cac nghich dao binh phuong S = " << S << endl;

    return 0;
}
