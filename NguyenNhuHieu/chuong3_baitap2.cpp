#include <iostream>
using namespace std;

int main()
{
    double temp, result,
    char type;

    cin >> temp;
    cin >> type;
    if (type == f){
        result = (5.0 / 9.0)* (temp - 32.0)
        cout << "day la fahren" << result << endl;
    }
        else if(type == c) {
            result = (9.0 / 5.0) * temp + 32.0;
            cout << "day la celsius" << result << endl;
        }
        else{
            cout << "gia tri khong hop le:"; endl;
        }
        

    
    return 0;
}