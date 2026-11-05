#include "Person.h"

#include <iostream>
#include <string>

Person::Person() : name_("Безымянный"), height_(0) {}

Person::Person(const std::string& name, int height)
    : name_(name), height_(height) {
}

std::string Person::ToString() const {
    return name_ + ", рост: " + std::to_string(height_);
}

void Person::Print() const {
    std::cout << ToString() << std::endl;
}

const std::string& Person::GetName() const { return name_; }
void Person::SetName(const std::string& name) { name_ = name; }

int Person::GetHeight() const { return height_; }
void Person::SetHeight(int height) { height_ = height; }