#include <iostream>
#include <vector>
#include <string>
using namespace std;


template <typename... Args>
void print(Args... args) {
    ((cout << args << " "), ...);
    cout << endl;
}

vector<int> range(int stop) {
    vector<int> result;
    for (int i = 0; i < stop; i++) result.push_back(i);
    return result;
}

vector<int> range(int start, int stop) {
    vector<int> result;
    for (int i = start; i < stop; i++) result.push_back(i);
    return result;
}


int len(const vector<int>& v) {
    return v.size();
}


int sum(const vector<int>& v) {
    int s = 0;
    for (int x : v) s += x;
    return s;
}

string input(const string& prompt) {
    cout << prompt;
    string s;
    getline(cin, s);
    return s;
}
int _int(const string& s) {
    return stoi(s);
}


int main() {
    string name = input("Як тебе звати? ");
    print("Привіт,", name);

    int n = _int(input("Скільки чисел? "));

    for (int i : range(n)) {
        print("i =", i);
    }

    vector<int> nums = range(1, n + 1);
    print("Довжина:", len(nums));
    print("Сума:", sum(nums));

    for (int i : range(1, 6)) {
        if (i % 2 == 0) print(i, "- парне");
        else print(i, "- непарне");
    }

    return 0;
}