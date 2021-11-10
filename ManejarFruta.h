//
// Created by DIANA on 10/11/2021.
//

#ifndef EJERCICIOLINKEDLIST_MANEJARFRUTA_H
#define EJERCICIOLINKEDLIST_MANEJARFRUTA_H
#include "Fruta.h"
#include <vector>

class ManejarFruta {
public:
    ManejarFruta();



    Fruta* findFruta(std::string);
    bool addFruta(std::string,std::string,std::string);
    std::vector<Fruta*> getFruta();

    virtual ~ManejarFruta();


private:
    std::vector<Fruta*> frutas;
};


#endif //EJERCICIOLINKEDLIST_MANEJARFRUTA_H
