#include<iostream>
#include<string>

using namespace std;

void gen(int n, string s)
{
	if (n == s.size())
	{
		cout << s << endl;
		return;
	}
	gen(n, s + '0');
	if (s.empty() || s.back() != '1')
		gen(n, s + '1');
	
}

long long G(int n)
{
	if (n == 2) { return 3;  }
	if (n == 1) { return 2;  }

	return G(n - 1) + G(n - 2);
}

int main()
{
	int n;
	cout << "n = "; cin >> n;
	gen(n, "");
	cout << "count = " << G(n) << endl;
}