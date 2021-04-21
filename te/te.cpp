#include <iostream>

using namespace std;

int main()
{
    //Инициализируем переменные
    int K, sum = 0;
    int a, b, c;
    cin >> K;
    a = 1;
    b = 1;
    while (K > 0)
    {
        K--;
        c = a + b;
        cout << a << " ";
        sum += a;
        a = b;
        b = c;
    }
    cout << "\n" << sum << "\n";
    return 0;
    cin.get();
}
