#include <iostream>

int main()
{

    std::cout << "1" << std::endl << std::endl;
    int a[20];
    int n;
    int max = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) 
    {
        std::cin >> a[i];
        if (a[i] % 7 == 0)
        {
            if (i == 0) {
                max = a[i];
            }
            if (a[i] > max)
            {
                max = a[i];
            }
        }
    }
    if (max != 0)
    {
        std::cout << max << std::endl;
    }
    else
    {
        std::cout << "no" << std::endl;
    }

    std::cout << "2" << std::endl << std::endl;
    max = 0;
    int c = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
        if (a[i] >= 0)
        {
            max += a[i];
            c++;
        }
    }
    if (max != 0)
    {
        std::cout << float(max / c) << std::endl;
    }
    else
    {
        std::cout << "no" << std::endl;
    }

    std::cout << "3" << std::endl << std::endl;
    max = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
        if (a[i] >= 0)
        {
            max += a[i];
        }
    }
    if (max != 0)
    {
        std::cout << max << std::endl;
    }
    else
    {
        std::cout << "no" << std::endl;
    }


    std::cout << "4" << std::endl << std::endl;
    max = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
        if (a[i] < 0)
        {
            if (i == 0) {
                max = a[i];
            }
            if (a[i] < max)
            {
                max = a[i];
            }
        }
    }
    if (max != 0)
    {
        std::cout << max << std::endl;
    } 
    else
    {
        std::cout << "no" << std::endl;
    }

    
}
