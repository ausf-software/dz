﻿#include <iostream>

int main()
{
    
    // изначально не понимал почему сразу после ввода меняется значение n, 
    // затем только решил проверить вместительность изначальной записи
    // long int = long = 4 байт, т.е. = обчному int
    // long long уже вмещает в себя 8 байт
    long long n, k = 0;
    
    bool f = true;
    std::cin >> n;

    while (n != 0) {
        
        if (n % 10 == 7 || n % 10 == 4) 
        { 
            k++; 
        }
        n /= 10;
    }

    // данное условие обязательно, т.к. если количество 4 или 7 будет рано 0, то не будет выполняться следующий цикл
    // к слову на java код после добавления только лишь этого условия отрабатывает полностью
    if (k == 0)
    {
        f = false;
    }

    while (k != 0) {
        if (k % 10 != 4 && k % 10 != 7) 
        { 
            f = 0; 
        }
        k /= 10;
    }

    if (f == 1) 
    { 
        std::cout << "YES"; 
    }
    else 
    { 
        std::cout << "NO"; 
    }

}