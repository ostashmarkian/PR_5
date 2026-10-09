#include <iostream>
#include <cmath>

using namespace std;

double g(const double x, const double y); // прототип

int main()
{
	double r, s;
	cout << "r = "; cin >> r;
	cout << "s = "; cin >> s;
	
	double c = (g(1, r) + g((pow(s, 2) - 1), pow(r, 2))) / g(s,(1 + r));
	cout << "c = " << c << endl;
}
double g(const double x, const double y) // визначення функції g(x, y)
{
	return (pow(x, 2) + pow(y, 2) + sin(x * y)) / (1 + abs(x * y)); 
}