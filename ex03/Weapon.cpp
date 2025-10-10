#include "Weapon.hpp"

Weapon::Weapon() {this->_type = "NULL";}

Weapon::Weapon(std::string TypeInput) {Weapon::setType(TypeInput);}

Weapon::~Weapon() {}

std::string Weapon::getType() {return _type;}

void    Weapon::setType(std::string input) {_type = input;}