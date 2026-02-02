#include <iostream>
using namespace std;
int main()
{
    double thunhap, thue;
    cin >> thunhap;
    if (thunhap <= 20000.0)
    {
        thue = 0.02*thunhap;
    }
        else {
            thue = 400.0 + 0.025 * (thunhap - 20000.0);
        }

    cout << "thue phai dong la: " << thue << endl;
        

    
    return 0;
}