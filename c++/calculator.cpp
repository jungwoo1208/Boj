#include <iostream>
#include <cmath>

using namespace std;

double calculate_savings(double present_value, double monthly_payment, double annual_interest_rate, int year) {
    double monthly_interest_rate = annual_interest_rate / 12;
    int num_of_payments = year * 12;
    double future_value = present_value;
    for (int i = 0; i < num_of_payments; ++i) {
        future_value += monthly_payment;
        future_value *= (1 + monthly_interest_rate / 100);
    }
    return future_value;
}

int main() {
    double present_value;
    double monthly_payment;
    double annual_interest_rate;
    int year;

    cout << "현재 계좌 잔액: ";
    cin >> present_value;
    cout << "매월 저축할 액수: ";
    cin >> monthly_payment;
    cout << "연 이율: ";
    cin >> annual_interest_rate;
    cout << "몇 년간 저축하실가요?: ";
    cin >> year;

    double future_value = calculate_savings(present_value, monthly_payment, annual_interest_rate, year);


    return 0;
}
