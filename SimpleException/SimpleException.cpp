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

	std::cout << "������� ��������� �����: ";
	std::cin >> a;

	char s = '"',d='"';

	while (true)
	{
		std::cout << "������� �����: ";
		std::cin >> word;
		try {
			function(word, a);					
		}
		catch (...) {
			std::cout << "�� ����� ����� ��������� �����! �� ��������" << std::endl;	
			break;
		}
		std::cout << "����� ����� " << s << word << d << " ����� " << word.length() << std::endl;		
	}
}