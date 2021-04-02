#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	setlocale(LC_ALL, "Russian");
	cout << "Введите строку, которая закнчивается точкой:\n";
	getline(cin, str, '.');
	char c;
	//Сортировка пузырьком
	for (int j = 0; j < str.length() - 1; j++) {
		for (int i = 0; i < str.length() - 1; i++) {
			if (str[i] > str[i + 1]) {
				c = str[i + 1];
				str[i + 1] = str[i];
				str[i] = c;
			}
		}
	}
	cout << "Отсортированная строка:\n";
	cout << str << endl;
}

