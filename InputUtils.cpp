#include "InputUtils.h"

#include <iostream>
#include <limits>
#include <string>

namespace {

    // Сбрасывает состояние cin и очищает буфер до конца строки.
    void ClearInput() {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

}

int ReadInt(const std::string& prompt) {
    int value = 0;
    while (true) {
        std::cout << prompt;
        if (std::cin >> value) {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return value;
        }
        std::cout << "Ошибка: введите целое число.\n";
        ClearInput();
    }
}

bool TryReadInt(const std::string& prompt, int& out_value) {
    std::cout << prompt;
    if (std::cin >> out_value) {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return true;
    }
    ClearInput();
    return false;
}

std::string ReadLine(const std::string& prompt) {
    std::string line;
    while (true) {
        std::cout << prompt;
        std::getline(std::cin, line);
        if (!line.empty()) {
            return line;
        }
        std::cout << "Ошибка: строка не должна быть пустой.\n";
    }
}