#include <iostream>
#include <cmath>
using namespace std;

double f(double i)
{
    return (cos(i) + sin(i)) / (1.0 + cos(i) * sin(i));
}
double S0(const int K, int i, double t)
{
    t = t + f(i);
    if (i <= K)
        return t;
    else
        return S0(K, i - 1, t);
}

double S1(const int N, int i, double t)
{
    t = t + f(i);
    if (i >= N)
        return t;
    else
        return S1(N, i + 1, t);
}
double S2(const int K, const int i)
{
    if (K > i)
        return 0;
    else
        return f(i) + S2(K, i - 1);
}
double S3(const int N, const int i)
{
    if (i > N)
        return 0;
    else
        return f(i) + S3(N, i + 1);
}
double S4(const int K, const int N)
{
    double s = 0;
    for (int i = K; i <= N; i++)
        s += f(i);
    return s;
}
int main()
{
    int K;
    int N = 20;
    cout << "K = "; cin >> K;
    cout << "(rec down --) S0 = " << S0(K, N, 0) << endl;
    cout << "(rec down ++) S1 = " << S1(N, K, 0) << endl;
    cout << "(rec up --) S2 = " << S2(K, N) << endl;
    cout << "(rec up ++) S3 = " << S3(N, K) << endl;
    cout << "(iter) S0 = " << S4(K, N) << endl;
    cin.get();
}