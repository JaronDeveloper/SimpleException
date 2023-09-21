#include <iostream>
#include <Windows.h>

int function(std::string str, int forbidden_length) {
	if (forbidden_length != str.length()) {
		return forbidden_length;
	}	
	throw "bad_length";	
}

int main() {
	int a,sizeString;
	std::string word;	

	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Введите запретную длину: ";
	std::cin >> a;

	char s = '"',d='"';

	while (true)
	{
		std::cout << "Введите слово: ";
		std::cin >> word;
		try {
			function(word, a);					
		}
		catch (...) {
			std::cout << "Вы ввели слово запретной длины! До свидания" << std::endl;	
			break;
		}
		std::cout << "Длина слова " << s << word << d << " равна " << word.length() << std::endl;		
	}
}