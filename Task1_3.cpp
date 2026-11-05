#include "Task1_3.h"

#include <iostream>
#include <optional>
#include <string>

#include "InputUtils.h"
#include "Name.h"

namespace {

    // Спрашивает у пользователя часть имени. Возвращает std::nullopt, если
    // пользователь ввёл пустую строку ("часть не задана").
    std::optional<std::string> ReadOptionalPart(const std::string& prompt) {
        std::cout << prompt;
        std::string line;
        std::getline(std::cin, line);
        if (line.empty()) {
            return std::nullopt;
        }
        return line;
    }

}  // namespace

void RunTask1_3() {
    std::cout << "\n=== Задание 1_3: Имя ===\n\n";

    // 1) Имена из задания.
    std::cout << "Имена из задания:\n";
    Name cleopatra(std::nullopt, "Клеопатра", std::nullopt);
    Name pushkin("Пушкин", "Александр", "Сергеевич");
    Name mayakovsky("Маяковский", "Владимир", std::nullopt);

    cleopatra.Print();
    pushkin.Print();
    mayakovsky.Print();

    // 2) Ручной ввод.
    std::cout << "\nВведите своё имя. Пустая строка = часть не задана.\n";
    std::optional<std::string> surname = ReadOptionalPart("Фамилия: ");
    std::optional<std::string> first_name = ReadOptionalPart("Личное имя: ");
    std::optional<std::string> patronymic = ReadOptionalPart("Отчество: ");

    Name custom(surname, first_name, patronymic);
    std::cout << "Результат: ";
    custom.Print();
}