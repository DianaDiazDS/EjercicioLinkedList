//
// Created by DIANA on 10/11/2021.
//

#include "ManejarFruta.h"

ManejarFruta::ManejarFruta() {}

Fruta *ManejarFruta::findFruta(std::string name) {
    for(Fruta* fruta : frutas){
        if(fruta->getName().compare(name)==0){
            return fruta;
        }

    }

}
