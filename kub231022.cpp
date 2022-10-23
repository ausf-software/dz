#include <iostream>

int main()
{
    std::cout << std::endl << std::endl << "#1" << std::endl;
    int a[20], n;
    int c = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
        if (c != 2)
        {
            bool prost = true;
            for (int j = 2; j < n; j++)
            {
                if (a[i] % j == 0)
                {
                    prost = false;
                }
            }
            if (a[i] == 0 || a[i] == 1) prost = false;
            if (prost) c++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (c == 2)
        {
            if (a[i] % 5 == 0)
            {
                a[i] = 1;
            }
        }
        std::cout << a[i] << " ";
    }

    std::cout << std::endl << std::endl << "#2" << std::endl;
    c = 1;
    int count = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] * a[i+1] > 0)
        {
            c = 0;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (c)
        {
            int sum = 0;
            while (a[i])
            {
                sum += a[i] % 10;
                a[i] /= 10;
            }
            if (sum % 2 == 0) count++;
        } 
        else 
        {
            bool prost = true;
            for (int j = 2; j < n; j++)
            {
                if (a[i] % j == 0)
                {
                    prost = false;
                }
            }
            if (a[i] == 0 || a[i] == 1) prost = false;
            if (prost) count++;
        }
    }
    std::cout << count;

    std::cout << std::endl << std::endl << "#3" << std::endl;
    c = 1;
    count = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0) c = a[i];
        if (c > a[i]) c = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int k = 1; k < n; k++)
        {
            if (a[i] % k == 0)
            {
                sum += k;
            }
        }
        if (sum == a[i])
        {
            a[i] = abs(c);
        }

        std::cout << a[i] << " ";
    }

    std::cout << std::endl << std::endl << "#4" << std::endl;
    c = 0;
    count = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
        if (a[i] % 3 == 0) count++;
        int sum = 0;
        while (a[i])
        {
            sum += a[i] % 10;
            a[i] /= 10;
        }
        if (sum % 12 == 0) c++;
    }
    if (c >= 3)
    {
        std::cout << count;
    }
    else
    {
        std::cout << "no";
    }
    
    

}