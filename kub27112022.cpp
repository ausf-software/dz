#include <iostream>

bool delCount(int a, int count)
{
    int temp = 0;

    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 1 && a % i == 0)
        {
            temp++;
        }
    }

    return temp == count;
}

bool tr(int a)
{
    int sum = 0;
    while (a)
    {
        sum += a % 10;
        a / 10;
    }
    return a > 20;
}

void z7()
{
    int n, m;
    std::cin >> n >> m;
    int** a = new int*[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[m];
        for (int j = 0; j < m; j++)
        {
            std::cin >> a[i][j];
        }
    }

    int min, num = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        bool f = true;
        for (int j = 0; j < m; j++)
        {
            sum += a[i][j];
            if (!tr(a[i][j])) f = false;
        }

        if (i == 0)
        {
            min = sum;
        }

        if (f)
        {
            if (min >= sum)
            {
                min = sum;
                num = i + 0;
            }
        }
    }

    std::cout << num;

    for (int i = 0; i < n; i++)
    {
        delete[]a[i];
    }
    delete[]a;
}

void z5()
{
    int n;
    std::cin >> n;
    bool flag = true;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
        if (!flag && delCount(a[i], 2)) flag = false;
    }
    if (flag)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (delCount(a[i], 3)) sum += a[i];
        }
        std::cout << sum;
    }
    else
    {
        std::cout << "no";
    }
    delete[]a;
}

bool ch(int a)
{
    int sum = 0;
    while (a)
    {
        sum += a % 10;
        a / 10;
    }
    return sum % 2 == 0;
}

void z6()
{
    int n;
    std::cin >> n;
    bool flag = true;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        if ((ch(a[i - 1]) && ch(a[i])) || !(ch(a[i - 1]) && ch(a[i])))
        {
            flag = false;
            break;
        }
    }

    std::cout << flag;

    delete[]a;
}

int main()
{
    
}