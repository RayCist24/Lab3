#include <windows.h>

#include <clocale>
#include <iostream>

#include "InputUtils.h"
#include "Task1_2.h"
#include "Task1_3.h"

namespace {

    // Печатает меню.
    void PrintMenu() {
        std::cout << "\n=== Лабораторная работа: ООП ===\n"
            << " 1. Задание 1_2: Человек\n"
            << " 2. Задание 1_3: Имена\n"
            << " 0. Выход\n";
    }

}  // namespace

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    std::cin.clear();
    std::cin.sync();
    while (true) {
        PrintMenu();

        int choice = 0;
        if (!TryReadInt("Выберите пункт: ", choice)) {
            std::cout << "Ошибка: введите число.\n";
            continue;
        }

        switch (choice) {
        case 1:
            RunTask1_2();
            break;
        case 2:
            RunTask1_3();
            break;
        case 0:
            std::cout << "Выход.\n";
            return 0;
        default:
            std::cout << "Нет такого пункта меню.\n";
            break;
        }
    }
}