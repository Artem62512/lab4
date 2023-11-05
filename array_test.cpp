#include <iostream>
using namespace std;
 
int main(int argc, char* argv[])
{
    int array1[10]; // объявляем целочисленный массив
    cout << "Enter elementi massiva: " << endl;
    int x = 0;
    for ( int counter = 0; counter < 10; counter++ ) // цикл для считывания чисел
        cin >> array1[counter];  // считываем вводимые с клавиатуры числа
    cout << "array1 = {";
    for ( int counter = 0; counter < 10; counter++ ) // цикл для вывода элементов массива
        cout << array1[counter] << " ";  // выводим элементы массива на стандартное устройство вывода
    system("pause");
    return 0;
}