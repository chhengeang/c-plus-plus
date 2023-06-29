#include<iostream>
#include<string>
using namespace std;

template<class T>
void swap(T& x, T& y)
{
    T temp = x;
    x = y;
    y = temp;
}

int main()
{
    int n = 60, m = 30;
    char ch1 = 'A', ch2 = 'D';
    double a = 2.45, b = 4.67;
    string S1 = "Morning";
    string S2 = "Evening";

    swap(a, b);
    swap(ch, ch2);
    swap(n, m);
    swap(S1, S2);

    cout << "a = " << a << "\tb = " << b << "\n";
    cout << "ch = " << ch << "\tch2 = " << ch2 << endl;
    cout << "n = " << n << "\tm = " << m << "\n";
    cout << "S1 = " << S1 << ", S2 = " << S2 << "\n";

    return 0;
}

