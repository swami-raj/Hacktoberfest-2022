#include <iostream>
using namespace std;
unsigned int factorial(unsigned int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    int num = n;
    cout << "Factorial of "<< num << " is " << factorial(num) << endl;
    return 0;
}
