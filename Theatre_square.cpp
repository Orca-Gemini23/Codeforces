#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    long n, m, a, number;
    cin >> n >> m >> a;
    number = ((n + a - 1)) / a * ((m + a - 1) / a);
    cout << number << endl;
    return 0;
}