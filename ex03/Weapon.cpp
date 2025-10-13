#include "Weapon.hpp"

Weapon::Weapon() {this->_type = "NULL";}

Weapon::Weapon(std::string TypeInput) {Weapon::setType(TypeInput);}

Weapon::~Weapon() {}

const std::string Weapon::getType() {return this->_type;}

void    Weapon::setType(std::string input) {this->_type = input;}