#include <iostream>
using namespace std;
 
int main(int argc, char* argv[])
{
    cout << "obrabotka massiva" << endl;
    int array1[16]; // объявление и инициализация одномерного массива
    cout << "indeks" << "\t\t" << "element massiva" << endl; // печать заголовков
    for (int counter = 0; counter < 16; counter++)  //начало цикла
    {
        array1[counter] = counter;
    //вывод на экран индекса ячейки массива, а затем содержимого этой ячейки, в нашем случае - это целое число
     cout << "array1[" << counter << "]" << "\t\t" << array1[counter] << endl;
    }
    system("pause");
    return 0;
}