#include <iostream>
#include<cmath>

int main()
{
    setlocale(LC_ALL, "RUS");

    std::cout << std::endl << "# 1" << std::endl;
    int a, s;
    s = 0;
    std::cin >> a;
    while (a) 
    {
        if ((a % 10) % 2 != 0) 
        {
            s += abs(a % 10);
        }
        a /= 10;
    }
    std::cout << s << std::endl;
    
    std::cout << std::endl << "# 2" << std::endl;
    int counter;
    s = 0;
    counter = 0;
    std::cin >> a;
    if (a == 0)
    {
        counter = 1;
    }
    while (a)
    {
        if ((a % 10) % 2 != 0)
        {
            s += abs(a % 10);
        }
        counter++;
        a /= 10;
    }
    std::cout << "Сумма " << s << "; количество цифр " << counter << std::endl;

    std::cout << std::endl << "# 3" << std::endl;
    std::cin >> a >> s;
    counter = 0;
    if (a < 0 && s < 0) {
        a = abs(a);
        s = abs(s);
    }
    while (s > 0 || a > 0)
    {
        if (s > 0) 
        {
            counter += a;
            s--;
        }
        else
        {
            counter += s;
            a--;
        }
    }
    std::cout << counter << std::endl;

    std::cout << std::endl << "# 4" << std::endl;
    float b = 1;
    counter = 0;
    while (!(b >= 2))
    {
        b *= 1.05f;
        counter++;
    }
    std::cout << counter << std::endl;

    std::cout << std::endl << "# 5" << std::endl;
    std::cin >> a >> s;
    counter = 0;
    while (a - s >= 0 && s != 0)
    {
        a -= s;
    }
    std::cout << a << std::endl;

    std::cout << std::endl << "# 6" << std::endl;
    s = 0;
    int g = 0;
    std::cin >> a;
    counter = 0;
    while (a)
    {
        g = abs(a % 10);
        if (g % 2 != 0 && g != 9) {
            g++;
        }
        if (g == 9)
        {
            g = 2;
        }
        s += g * pow(10, counter);
        counter++;
        a /= 10;
    }
    std::cout << s << std::endl;

    std::cout << std::endl << "# 7" << std::endl;
    std::cin >> a >> g;
    s = a;
    a++;
    while (a <= g)
    {
        s *= a;
        a++;
    }
    std::cout << s << std::endl;
}
