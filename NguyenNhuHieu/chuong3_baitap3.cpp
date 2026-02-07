#include <iostream>

using namespace std;

int main()
{
    int so;
    cout << "vui long dien so:" << endl;
    cin >> so;
    if((so % 2) == 0 ){
        cout << "so chan: "<< so << endl;
        
    }else if ((so % 3) == 1)
     {
        cout << "so le" << so << endl;
    }else{
        cout << "vui long nhap lai" << endl;
    }

    return 0;
}