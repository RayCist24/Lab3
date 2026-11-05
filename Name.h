#ifndef LABS_NAME_H_
#define LABS_NAME_H_

#include <optional>
#include <string>

// Класс описывает имя человека: фамилия, личное имя, отчество.
// Любая из частей может быть не задана.
class Name {
public:
    // Конструктор по умолчанию: все части не заданы.
    Name();

    // Конструктор с параметрами. Любой параметр может быть std::nullopt.
    Name(std::optional<std::string> surname,
        std::optional<std::string> first_name,
        std::optional<std::string> patronymic);

    // Возвращает текстовое представление: "Фамилия Имя Отчество" (только заданные части).
    std::string ToString() const;

    // Выводит текстовое представление в stdout.
    void Print() const;

    // Геттеры и сеттеры.
    const std::optional<std::string>& GetSurname() const;
    void SetSurname(std::optional<std::string> surname);

    const std::optional<std::string>& GetFirstName() const;
    void SetFirstName(std::optional<std::string> first_name);

    const std::optional<std::string>& GetPatronymic() const;
    void SetPatronymic(std::optional<std::string> patronymic);

private:
    std::optional<std::string> surname_;      // Фамилия.
    std::optional<std::string> first_name_;   // Личное имя.
    std::optional<std::string> patronymic_;   // Отчество.
};

#endif  // LABS_NAME_H_