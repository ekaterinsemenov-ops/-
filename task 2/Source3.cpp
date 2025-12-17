#include <iostream>
#include <locale.h>
#include <stdexcept> 
#include <exception> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    cout << "=== Задание 2: исключение (деление на ноль) ===" << endl;

   
    int a = 10;
    int b = 0;

    try
    {
        cout << "a = " << a << ", b = " << b << endl;

       
        if (b == 0)
        {
        
            throw std::runtime_error("Деление на ноль");
        }

        int c = a / b; 
        cout << "Результат деления: c = " << c << endl;
    }
    catch (const std::exception& ex)
    {
        cout << "Исключение перехвачено: " << ex.what() << endl;
    }

    cout << "Нажмите Enter для выхода..." << endl;
    cin.get();

    return 0;
}
