#include "Name.h"

#include <iostream>
#include <optional>
#include <string>
#include <vector>

Name::Name() = default;

Name::Name(std::optional<std::string> surname,
    std::optional<std::string> first_name,
    std::optional<std::string> patronymic)
    : surname_(std::move(surname)),
    first_name_(std::move(first_name)),
    patronymic_(std::move(patronymic)) {
}

std::string Name::ToString() const {
    std::vector<std::string> parts;
    if (surname_.has_value() && !surname_->empty()) {
        parts.push_back(*surname_);
    }
    if (first_name_.has_value() && !first_name_->empty()) {
        parts.push_back(*first_name_);
    }
    if (patronymic_.has_value() && !patronymic_->empty()) {
        parts.push_back(*patronymic_);
    }

    std::string result;
    for (size_t i = 0; i < parts.size(); ++i) {
        if (i > 0) {
            result += ' ';
        }
        result += parts[i];
    }
    return result;
}

void Name::Print() const {
    std::cout << ToString() << std::endl;
}

const std::optional<std::string>& Name::GetSurname() const { return surname_; }
void Name::SetSurname(std::optional<std::string> surname) {
    surname_ = std::move(surname);
}

const std::optional<std::string>& Name::GetFirstName() const { return first_name_; }
void Name::SetFirstName(std::optional<std::string> first_name) {
    first_name_ = std::move(first_name);
}

const std::optional<std::string>& Name::GetPatronymic() const { return patronymic_; }
void Name::SetPatronymic(std::optional<std::string> patronymic) {
    patronymic_ = std::move(patronymic);
}