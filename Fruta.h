//
// Created by DIANA on 10/11/2021.
//

#ifndef EJERCICIOLINKEDLIST_FRUTA_H
#define EJERCICIOLINKEDLIST_FRUTA_H

#include <string>
#include <ostream>


class Fruta {

public:
    Fruta();

    Fruta(const std::string &name, const std::string &color, const std::string &sabor);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getColor() const;

    void setColor(const std::string &color);

    const std::string &getSabor() const;

    void setSabor(const std::string &sabor);


    friend std::ostream &operator<<(std::ostream &os, const Fruta &fruta);

private:

    std::string name;
    std::string color;
    std::string sabor;





};


#endif //EJERCICIOLINKEDLIST_FRUTA_H
