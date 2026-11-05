#ifndef LABS_PERSON_H_
#define LABS_PERSON_H_

#include <string>

// Класс описывает человека с именем и ростом.
class Person {
public:
	// Конструктор по умолчанию.
	Person();

	// Конструктор с параметрами.
	Person(const std::string& name, int height);

	// Возвращает текстовое представление: "Name, рост: height".
	std::string ToString() const;

	// Выводит текстовое представление в stdout.
	void Print() const;

	// Геттеры и сеттеры.
	const std::string& GetName() const;
	void SetName(const std::string& name);

	int GetHeight() const;
	void SetHeight(int height);

private:
	std::string name_;  // Имя человека.
	int height_;        // Рост в сантиметрах.
};

#endif  // LABS_PERSON_H_