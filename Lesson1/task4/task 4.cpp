﻿// task 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
 
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter a " << endl;
    cin >> a;
    cout << "Enter b " << endl;
    cin >> b;
    cout << "Enter c " << endl;
    cin >> c;
    int D;
    D = b * b - 4 * a * c;
    cout << " D=";
    cout << D=<< endl;
        if (D > 0) {
            double x1, x2;
            x1 = -b - sqrt(D) / 2; 
            cout << x1 << endl;
            x2 = -b + sqrt(D) / 2;
            cout << x2 << endl;
        }
        if (D < 0) {
        cout << "There is no roots" << endl;
        }
        if (D < 0) {
            double x;
            x = -b - sqrt(D) / 2;
        }
}
