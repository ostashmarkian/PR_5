
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double h(const double x);

int main()
{
    double rp, rk, z;
    int n;

    cout << "rp = "; cin >> rp;
    cout << "rk = "; cin >> rk;
    cout << "n = "; cin >> n;

    double dr = (rk - rp) / n;

    cout << fixed;
    cout << "-----------------------------" << endl;
    cout << "|" << setw(7) << "r" << "     |"
        << setw(9) << "z" << "        |" << endl;
    cout << "-----------------------------" << endl;

    double r = rp;

    while (r <= rk)
    {
        z = h(1 + sqrt(r)) + pow(h(1 + r + pow(h(r), 2)), 2);
        cout << "|" << setw(9) << setprecision(3) << r << "   |"
            << setw(14) << setprecision(5) << z << "   |" << endl;
        r += dr;
    }
    cout << "-----------------------------" << endl;

    return 0;
}

double h(const double x)
{
    if (abs(x) >= 1)
        return (1 + cos(x)) / exp(-2 * x);
    else
    {
        double S = 0;
        int j = 0;
        double a = x;
        S = a;
        do
        {
            j++;
            double R = x * x * x / ((3 * j - 1) * (3 * j) * (3 * j + 1));
            a *= R;
            S += a;
        } while (j < 5);
        return S;
    }
}