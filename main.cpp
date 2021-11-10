
///////////

#include <iostream>
#include "LinkedList.cpp"
#include "Fruta.h"
#include "ManejarFruta.h"

using namespace std;



void mngFruta() {
    ManejarFruta *mng= new ManejarFruta();
    mng->addFruta("piña", "amarilla", "agria");
    cout << "frutas  " << mng->getFruta().size() <<endl;

    for(Fruta* fruta : mng->getFruta()){
        cout<<fruta<<endl;
    }


    delete (mng);
}

int main() {

    LinkedList <Fruta> *todaFruta = new LinkedList<Fruta>();
    todaFruta->addNodeLast(Fruta("piña", "amatillo", "agrio"));
    todaFruta->addNodeLast(Fruta("fresa", "roja", "dulce"));


    cout<<"1-Crear Mouse\n2-Buscar Mouse\n3-Mostrar Mouse\n5-Salir";

    cout<<"\nescriba opcion|";
    int opcion;
    cin >> opcion;
    switch (opcion) {
        case 1: {
            string name;
            string color;
            string sabor;
            cout<<""<<endl;
            cout<<"ingrese el nombre"<<endl;
            cin>> name;
            cout<<"ingrese el color"<<endl;
            cin>> color;
            cout<<"ingrese el sabor"<<endl;
            cin>> sabor;

            Fruta *fruta = new Fruta(name,color,sabor);

            linked->addNodeFirst(*fruta);

        }
        case 2: {

        }
        case 3: {

        }
        case 5: {

        }
    }



/////-----------------
    Fruta mango("mango","amarillo","dulce");
    Fruta pera("pera","verde","dulce");

    cout<<mango.getName()<<endl;
    cout<<mango.getColor()<<endl;
    cout<<mango.getSabor()<<endl;

    cout<<mango<<endl;
    cout<<pera<<endl;

    mngFruta();//agregar uno

    return EXIT_SUCCESS;

}
/*
int main() {

    LinkedList<char>* linkFirst = new LinkedList<char>();
    LinkedList<char>* linkLast = new LinkedList<char>();
 // nuevo mensaje final que
    //D-C-B-A

    linkFirst->addNodeFirst('A');
    linkFirst->addNodeFirst('B');
    linkFirst->addNodeFirst('C');
    linkFirst->addNodeFirst('D');

    //A-B-C-D
    linkLast->addNodeLast('A');
    linkLast->addNodeLast('B');
    linkLast->addNodeLast('C');
    linkLast->addNodeLast('D');

    for( char val : linkFirst->getLinkedList() ){
        cout<<val<<"-";
    }

    cout<<endl;

    for( char val : linkLast->getLinkedList() ){
        cout<<val<<"-";
    }

    cout<<endl;

    delete(linkFirst);

    delete( linkLast );


    return EXIT_SUCCESS;
}
 */