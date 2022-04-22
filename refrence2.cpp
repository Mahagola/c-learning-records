#include <iostream>
using namespace std;
int main()
{
    int a = 45;
    int b = 43;
    int c = a + b;
    int &g = c;
    int &j = g;
    int &k = j;
    cout << "sum is:" << k;
    return 0;
}