#include <iostream>

bool isDvuz(int a)
{
    return a < -9 && a > -100;
}

int main()
{
    int a = 1;
    int b = 0;
    int sum = 0;
    while(a)
    {
        std::cin >> a;
        if (b)
        {
            if (a % 2 == 0 && isDvuz(b))
            {
                sum += b * b;
            }
        }
        b = a;
    }
    std::cout << sum;
}
