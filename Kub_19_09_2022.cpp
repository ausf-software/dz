
#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    int a = 0, n = 1;

    std::cout << "#1" << std::endl;
    std::cin >> a;
    for(int i = 1; i <= a; i++)
    {
        n *= i;
    }
    std::cout << "n! = " << n << std::endl;

    std::cout << std::endl << "#2" << std::endl;
    n = 0;
    std::cin >> a;
    a = abs(a);
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0) 
        {
            n += i;
            if (i != 1)
            {
                std::cout << " + " << i;
            }
            else
            {
                std::cout << i;
            }
        }
    }
    std::cout << " = " << n << std::endl;
    if (n == a)
    {
        std::cout << "Совершенно" << std::endl;
    }
    else
    {
        std::cout << "Несовершенно" << std::endl;
    }

    std::cout << std::endl << "#3" << std::endl;
    n = 0;
    std::cin >> a;
    a = abs(a);
    std::cout << "Делители: ";
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0 && i % 2 == 0)
        {
            if (n != 0)
            {
                std::cout << ", " << i;
            }
            else
            {
                std::cout << i;
            }
            n++;
        }
    }
    std::cout << std::endl << n << std::endl;

}
