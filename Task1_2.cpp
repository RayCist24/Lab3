#include "Task1_2.h"

#include <iostream>
#include <string>

#include "InputUtils.h"
#include "Person.h"

void RunTask1_2() {
	std::cout << "\n=== Задание 1_2: Человек ===\n\n";

	// 1) Три человека из задания.
	std::cout << "Три человека из задания (конструктор с параметрами):\n";
	Person cleopatra("Клеопатра", 152);
	Person pushkin("Пушкин", 167);
	Person vladimir("Владимир", 189);

	cleopatra.Print();
	pushkin.Print();
	vladimir.Print();

	// 2) Конструктор по умолчанию.
	std::cout << "\nЧеловек по умолчанию:\n";
	Person unknown;
	unknown.Print();

	// 3) Ручной ввод.
	std::cout << "\nВведите данные своего человека.\n";
	std::string name = ReadLine("Имя: ");
	int height = ReadInt("Рост (см): ");

	Person custom(name, height);
	std::cout << "Результат: ";
	custom.Print();
}