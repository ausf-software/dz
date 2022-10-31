#include <iostream>

int main()
{
    std::cout << std::endl << std::endl << "#6" << std::endl;
    int a[20][20], n;
    int count = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                int sum = 0;
                for (int k = 2; k < a[i][j]; k++)
                {
                    if (a[i][j] % k == 0)
                    {
                        sum += k;
                    }
                }
                if (sum == a[i][j])
                {
                    count += a[i][j];
                }
            }
        }
    }
    std::cout << count;


    std::cout << std::endl << std::endl << "#7" << std::endl;
    count = 1;
    bool flag = false;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> a[i][j];
            if (!flag)
            {
                int b = a[i][j];
                while (b)
                {
                    if (b % 10 == 5)
                    {
                        true;
                        break;
                    }
                    b /= 10;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!flag)
            {
                if (a[i][j] % 2 == 1)
                {
                    count *= a[i][j];
                }
            }
        }
    }
    std::cout << count;

    std::cout << std::endl << std::endl << "#9" << std::endl;
    count = 0;
    int b = 0;
    flag = false;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                count += a[i][j];
            }
            if (i > j)
            {
                b += a[i][j];
            }
        }
    }
    std::cout << count / b;

    std::cout << std::endl << std::endl << "#10" << std::endl;
    count = 1;
    flag = false;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> a[i][j];
            if (!flag)
            {
                bool prost = true;
                for (int k = 2; k < a[i][j]; k++)
                {
                    if (a[i][j] % k == 0)
                    {
                        prost = true;
                        break;
                    }
                }
                if (a[i][j] == 1 || a[i][j] == 0) prost = false;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > j && n - 1 - j < i)
            {
                count *= a[i][j];
            }
        }
    }
    std::cout << count;

}
