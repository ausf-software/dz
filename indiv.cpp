#include <iostream>

float fact(int n)
{
    if (n == 1) return 1;
    return n * fact(n - 1);
}

void sumRad()
{
    int n, x;
    float sum = 0;

    std::cout << "N: ";
    std::cin >> n;
    std::cout << "X: ";
    std::cin >> x;

    std::cout << "Ряд:" << std::endl;
    for (int i = 1; i <= n; i++)
    {
        float znac = (pow((x), 2 * i) * fact(i + 1)) / (pow((x + 1), 3 * i) * fact(x * 2));
        std::cout << znac << " ";
        sum += znac;
    }
    std::cout << std::endl << "Сумма ряда: " << sum;
}

float sredArrPol(float *a, int n)
{
    float sum = 0;
    int nu = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0) {
            sum += a[i];
            nu++;
        }
    }
    return sum / nu;
}

void arr()
{
    int n;
    std::cout << "Дан одномерный массив, увеличить все нечетные элементы на среднее арифметическое положительных элементов" << std::endl;
    std::cout << "N: ";
    std::cin >> n;

    float* a = new float[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    float sred = sredArrPol(a, n);
    for (int i = 0; i < n; i++)
    {
        if (int(a[i]) % 2 == 1)
        {
            a[i] += sred;
        }
        std::cout << a[i] << " ";
    }
    delete[]a;
}

void printLine(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

void arrReplace(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0)
        {
            a[i] = pow(a[i], i);
        }
    }
}

void funct()
{
    int n, m;
    std::cout << "Дан двумерный массив, возвести кратные 3 элементы в степень порядкового номера элемента в строке" << std::endl;
    std::cout << "N: ";
    std::cin >> n;
    std::cout << "M: ";
    std::cin >> m;

    int** a = new int*[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[m];
        for (int j = 0; j < m; j++)
        {
            std::cin >> a[i][j];
        }
    }
    std::cout << std::endl;
    for (int i = 0; i < n; i++)
    {
        arrReplace(a[i], m);
        printLine(a[i], m);
    }

    for (int i = 0; i < n; i++)
    {
        delete[]a[i];
    }
    delete[]a;
}

bool isDvuz(int a)
{
    return a < -9 && a > -100;
}

void posl()
{
    std::cout << "Дана последовательность оканчивающаяся 0. найти сумму квадратов двухначных отрицательных чисел, за которыми следует четное число" << std::endl;
    int a = 1;
    int b = 0;
    int sum = 0;

    std::cout << "Введите последовательность: " << std::endl;
    while (a)
    {
        std::cin >> a;
        if (b)
        {
            if (abs(a) % 2 == 0 && isDvuz(b))
            {
                sum += b * b;
            }
        }
        b = a;
    }
    std::cout << "Сумма: " << sum;
}

int main()
{
    setlocale(LC_ALL, "RUS");

    std::cout << "1. сумма ряда" << std::endl;
    std::cout << "2. массивы" << std::endl;
    std::cout << "3. Функции" << std::endl;
    std::cout << "4. последовательности" << std::endl;

    int number;
    std::cin >> number;

    switch (number)
    {
    case 1:
        sumRad();
        break;
    case 2:
        arr();
        break;    
    case 3:
        funct();
        break;    
    case 4:
        posl();
        break;
    default:
        break;
    }
}