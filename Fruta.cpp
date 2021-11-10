//
// Created by DIANA on 10/11/2021.
//

#include "Fruta.h"

Fruta::Fruta() {}

Fruta::Fruta(const std::string &name, const std::string &color, const std::string &sabor) : name(name), color(color),
                                                                                            sabor(sabor) {}



const std::string &Fruta::getName() const {
    return name;
}

void Fruta::setName(const std::string &name) {
    Fruta::name = name;
}

const std::string &Fruta::getColor() const {
    return color;
}

void Fruta::setColor(const std::string &color) {
    Fruta::color = color;
}

const std::string &Fruta::getSabor() const {
    return sabor;
}

void Fruta::setSabor(const std::string &sabor) {
    Fruta::sabor = sabor;
}

std::ostream &operator<<(std::ostream &os, const Fruta &fruta) {
    os << "name: " << fruta.name << " color: " << fruta.color << " sabor: " << fruta.sabor;
    return os;
}
