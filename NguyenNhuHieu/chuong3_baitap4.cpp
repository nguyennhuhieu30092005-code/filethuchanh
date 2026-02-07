#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double monthlySales, income;
    cout << "Enter the value of monthlysales: " << endl;
    cin >> monthlySales;
    if (monthlySales >= 50000.00){
        income = 375.00 + 16*monthlySales;

    }else if (monthlySales >= 40000.00){
        income = 350.00 + 14*monthlySales;

    }else if (monthlySales >= 30000.00){
        income = 325.00 + 12*monthlySales;

    }else if (monthlySales >= 20000.00){
        income = 300.00 + 9*monthlySales;

    }else if (monthlySales >= 10000.00){
        income = 250.00 + 5*monthlySales;

    }else{
        income = 200.00 + 3*monthlySales;
    }
    cout << income << endl;



    return 0;
}