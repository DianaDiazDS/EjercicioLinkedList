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
    return NULL;
}

bool ManejarFruta::addFruta(std::string name, std::string color, std::string sabor) {

    if(findFruta(name)== NULL){
        frutas.push_back( new Fruta(name,color, sabor));
        return true;
    }
    return false;
}

std::vector<Fruta*> ManejarFruta::getFruta() {
    return frutas;
}


ManejarFruta:: ~ManejarFruta(){
    for(Fruta* fruta : frutas){
        delete(fruta);
    }
}