#include <iostream>
using namespace std;
int main(){
    int so, tam; 
    cout << "xin moi nhap so:" << endl;
    cin >> so;
    cout << endl;
    tam = so;
    if (so <0)
        so = -so;
        cout << "gia tri tuyet doi cua" << tam << " " << "la" << " " << so << endl;
        return 0;
}