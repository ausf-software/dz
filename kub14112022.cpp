#include <iostream>

int n;
int* a;

void read()
{
    std::cin >> n;
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
}

void z61()
{
    std::cout << std::endl << "#6.1" << std::endl;
    read();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 3 != 0)
        {
            bool prost = true;
            for (int k = 2; k < a[i]; k++)
            {
                if (a[i] % k == 0) { prost = false; break; }
            }
            if (a[i] == 1 || a[i] == 0) prost = false;
            if (prost) sum += a[i];
        }
    }
    std::cout << sum;
}

void z62()
{
    std::cout << std::endl << "#6.2" << std::endl;
    read();
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            std::cout << a[i] << " ";
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            std::cout << a[i] << " ";
        }
    }
}

void z7()
{
    std::cout << std::endl << "#7" << std::endl;
    read();
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 17 == 0)
        {
            a[i] = 0;
        }
        std::cout << a[i] << " ";
    }
}

void z5()
{
    std::cout << std::endl << "#5" << std::endl;
    read();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 == 0 && a[i] > 0)
        {
            sum += a[i];
        }
    }
    std::cout << sum;
}

void z4()
{
    std::cout << std::endl << "#4" << std::endl;
    read();
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            sum += a[i];
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            a[i] += sum / count;
        }
        std::cout << a[i] << " ";
    }
}

void z3()
{
    std::cout << std::endl << "#3" << std::endl;
    read();
    std::cout  << "X: ";
    int x;
    std::cin >> x;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 5 != 0 && a[i] > x)
        {
            sum += a[i];
        }
    }
    std::cout << sum;
}

void z1()
{
    std::cout << std::endl << "#1" << std::endl;
    read();
    int max = 0;
    int b = a[0];
    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        if (max < a[i] && a[i] < 0)
        {
            max = a[i];
        }
        if (a[i] < b)
        {
            flag = false;
            break;
        }
    }
    if (flag && max < 0)
    {
        std::cout << max;
    }
    else
    {
        std::cout << "NO";
    }
}

void z2()
{
    std::cout << std::endl << "#2" << std::endl;
    read();
    int count = 0;
    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] * a[i] > 0)
        {
            flag = false;
            break;
        }
    }
    if (!flag)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                count++;
            }
        }
        std::cout << count;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                a[i] /= 2;
            }
            else
            {
                a[i] *= 2;
            }
            std::cout << a[i] << "";
        }
    }
}

int main()
{
    std::cout << "№-? ..." << std::endl;
    int number;
    std::cin >> number;
    switch (number)
    {
    case 61:
        z61();
        break;
    case 62:
        z62();
        break;    
    case 7:
        z7();
        break;    
    case 5:
        z5();
        break;    
    case 4:
        z4();    
    case 3:
        z3();
        break;    
    case 2:
        z2();
        break;    
    case 1:
        z1();
        break;
    default:
        break;
    }
    delete[]a;
    return 0;
}