
#include "dragon.h"

// геттеры
std::string Dragon::getName() const { return name; }
int Dragon::getTailLength() const { return tail_length; }
int Dragon::getAge() const { return age; }
int Dragon::getMagicPower() const { return magic_power; }
bool Dragon::isRegistered() const { return is_registered; }
Dragon::Type Dragon::getType() const { return type; }

Dragon::AgeCategory Dragon::getAgeCategory() const {
    if (age <= 5) return AgeCategory::BABY;
    if (age <= 20) return AgeCategory::YOUNG;
    if (age <= 100) return AgeCategory::ADULT;
    return AgeCategory::ANCIENT;
}

void Dragon::registerDragon() {
    // your code here
}

void Dragon::train() {
    // your code here
}

void Dragon::ageUp() {
    // your code here
}

void Dragon::printInfo() const {
    // your code here
}

bool Dragon::canBreatheFire() const {
    // your code here
}

Dragon::AgeCategory Dragon::getAgeCategory() const {
    // your code here
}
