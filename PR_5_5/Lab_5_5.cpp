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

long long G(int n, int level, int& depth)
{
	if (level > depth)
		depth = level;
	cout << "G(" << n << ")  level = " << level << endl;

	if (n == 2) { return 3; }
	if (n == 1) { return 2; }

	return G(n - 1, level + 1, depth) + G(n - 2, level + 1, depth);
}

int main()
{
	int n;
	cout << "n = "; cin >> n;

	cout << endl << "Numbers without 11:" << endl;
	gen(n, "");
	cout << "depth gen = " << n + 1 << endl;

	cout << endl << "Recursion levels of G:" << endl;
	int depthG = 0;
	long long count = G(n, 1, depthG);

	cout << endl << "count  = " << count << endl;
	cout << "depthG = " << depthG << endl;
}