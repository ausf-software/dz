#include <iostream>

bool isT(int a[], int n)
{
    int count = 0;
    bool temp = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0 && a[i] % 5 == 0)
        {
            count++;
        }
        if (count == 2)
        {
            return true;
        }
    }
    return false;
}

bool chet(int a)
{
    int sum = 0;
    while (a)
    {
        sum += a % 10;
        a /= 10;
    }
    return sum % 2 == 0;
}

bool sov(int a)
{
    int sum = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            sum += i;
        }
    }
    return sum == a;
}

void z6()
{
    int n, m, count = 0;
    std::cin >> n >> m;
    for (int i = n; i <= m; i++)
    {
        if (chet(i)) count++;
    }
    std::cout << count;
}

void z7()
{
    int n, count = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        std::cin >> temp;
        if (sov(temp)) count++;
    }
    std::cout << float(count / n);
}

int main()
{
    std::cout << "Hello World!\n";
}