#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double A(const double x, const int n, const double prev);   // наступний доданок
double S(const double x, const double eps, int& n);         // сума ряду

int main()
{
    double xp, xk, dx, eps;

    cout << "xp = ";  cin >> xp;
    cout << "xk = ";  cin >> xk;
    cout << "dx = ";  cin >> dx;
    cout << "eps = "; cin >> eps;

    if (dx <= 0 || eps <= 0 || xp > xk)
    {
        cout << "Error: need dx > 0, eps > 0, xp <= xk" << endl;
        return 1;
    }

    cout << fixed;
    cout << "+---------+-------------+-------------+-------+" << endl;
    cout << "|" << setw(8) << "x" << " |"
        << setw(12) << "exp(-x)" << " |"
        << setw(12) << "S" << " |"
        << setw(6) << "n" << " |" << endl;
    cout << "+---------+-------------+-------------+-------+" << endl;

    for (int i = 0; xp + i * dx <= xk + 1e-9; i++)
    {
        double x = xp + i * dx;     // без накопичення похибки від x += dx
        int n;
        double s = S(x, eps, n);

        cout << "|" << setw(8) << setprecision(2) << x << " |"
            << setw(12) << setprecision(5) << exp(-x) << " |"
            << setw(12) << setprecision(5) << s << " |"
            << setw(6) << n << " |" << endl;
    }
    cout << "+---------+-------------+-------------+-------+" << endl;

    return 0;
}

// наступний доданок за рекурентним співвідношенням: a(n) = a(n-1) * R, R = -x/n
double A(const double x, const int n, const double prev)
{
    return prev * (-x / n);
}

// сума ряду з точністю eps; повертає суму, через n - кількість доданків
double S(const double x, const double eps, int& n)
{
    n = 0;
    double a = 1;                   // перший доданок (n = 0): 1
    double s = a;
    do {
        n++;
        a = A(x, n, a);
        s += a;
    } while (abs(a) >= eps);
    return s;
}