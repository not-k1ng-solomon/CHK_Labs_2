// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;


int main() {
	stack <char> open;

	char symbol;

	scanf("%c", &symbol);

	while (symbol != 0 && symbol != '\n' && symbol != EOF) {
		if (symbol == '{' || symbol == '[' ||  symbol == '(') {
			open.push(symbol);
		}
		else {
			if (!open.empty()) {
				if ((int)symbol - (int)open.top() == 1 || (int)symbol - (int)open.top() == 2) {
					open.pop();
					scanf("%c", &symbol);
					continue;
				}
				else {
					cout <<"false"<<endl;
					return 0;
				}
			}
			else {
				cout << "missing opening bracket or invalid character entered" << endl;
				return 0;
			}
		}
		scanf("%c", &symbol);
	} 
	if (open.empty())
		cout <<"true"<<endl;
	else
		cout <<"false"<<endl;
	cin.get();
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
