#ifndef LABS_INPUT_UTILS_H_
#define LABS_INPUT_UTILS_H_

#include <string>

// Читает целое число, пока пользователь не введёт корректное значение.
int ReadInt(const std::string& prompt);

// Пытается прочитать целое число один раз.
// Возвращает true при успехе (значение записывается в out_value), иначе false.
bool TryReadInt(const std::string& prompt, int& out_value);

// Читает непустую строку (может содержать пробелы).
std::string ReadLine(const std::string& prompt);

#endif  // LABS_INPUT_UTILS_H_