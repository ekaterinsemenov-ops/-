#include <iostream>
#include <windows.h>  

using namespace std;

int main() {
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num1, num2;

    cout << "Введите первое целое число: ";
    cin >> num1;

    cout << "Введите второе целое число: ";
    cin >> num2;

#ifdef VARIANT_ODD
    int result = num1 * num2;
    cout << "Произведение чисел " << num1 << " и " << num2
        << " равно: " << result << endl;
#else
    int result = num1 + num2;
    cout << "Сумма чисел " << num1 << " и " << num2
        << " равна: " << result << endl;
#endif

    system("pause"); 
    return 0;
}
