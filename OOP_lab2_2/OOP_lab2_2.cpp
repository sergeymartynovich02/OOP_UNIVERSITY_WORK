#include <iostream>
#include <stdio.h>

using namespace std;

void fun1(char* line) {

    int last =0;
    int mas[255];

    for (int i = 0; i < strlen(line); i++) { //записываем числа в отдельный массив
        if (isdigit(line[i]))
        {
            mas[last] = line[i] - '\0';
            last++;

        }
    }

    for (int i = 0; i < strlen(line); i++) {//производим сортировку чисел в массиве
        for (int j = i + 1; j < strlen(line); j++) {
            if (mas[j] > mas[i])
            {
                last = mas[j];
                mas[j] = mas[i];
                mas[i] = last;
            }
        }
    }

    last = 0;

    for (int i = 0; i < strlen(line); i++)//обратное преобразование в строку 
        if (isdigit(line[i]))
        {
            line[i] = mas[last];
            last++;
        }
    cout << "Обработанный текст: " << line << " \n";

}
int main()
{
    setlocale(0, "");

    char line[255];
    char str[255];
    cout << "Введите строку: ";
    cin.getline(line, 255);
    memset(str, 0, 255);

    int k = 0;
    for (int i = 0; i < strlen(line) + 1; i++) {
        str[k] = line[i];

        k++;
        if (line[i] == ' ' || line[i] == '\0' || line[i] == ',')
        {
            fun1(str);
            memset(str, 0, 255);
            k = 0;
        }

    }
    return 0;
}
