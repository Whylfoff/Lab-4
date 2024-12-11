#include <iostream>
using namespace std;

int main()

{
    cout << "Exercise 1\n";
    int a,b,c;
    cin >> a >> b >> c;
    if ((a < b) && (b < c))
    {
        cout << c - b - a;
    }
    else if (a % c == 0)
    {
        cout << 1.00 * a / c + b;
    }
    else cout << a + b + c << endl;

    cout << "Exercise 2\n";
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Banana" << endl;
        break;
    case 2:
        cout << "Grape" << endl;
        break;
    case 3:
        cout << "Potato" << endl;
        break;
    case 4:
        cout << "Cucumber" << endl;
        break;
    case 5:
        cout << "Radish" << endl;
        break;
    default:
        cout << "Неизвестный код товара" << endl;
        break;
    }
    cout << "Exercise 3\n";
    int x;
    cin >> x;
    if (x == 1)
    {
       cout << "Positive number"; 
    }
    else cout << "Negative number";
    /*Так как переменная принимает два значения, можно спокойно написать if-else
    Они будут исключать друг друга */
}