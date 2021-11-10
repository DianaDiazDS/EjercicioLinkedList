//
// Created by DIANA on 10/11/2021.
//

#ifndef EJERCICIOLINKEDLIST_NODE_H
#define EJERCICIOLINKEDLIST_NODE_H





//#endif //EJERCICIOLINKEDLIST_NODE_H
//

//#ifndef EXAMPLECPP_NODE_H
//#define EXAMPLECPP_NODE_H

#include <cstdlib>

template <class T> class LinkedList;

template <class T>
class Node {

    friend class LinkedList<T>;

public:
    Node(T info) : info(info) {
        next = NULL;
    }

    virtual ~Node() {

    }

private:
    T info;
    Node<T>* next;
};

#endif //EJERCICIOLINKEDLIST_NODE_H
//#endif //EXAMPLECPP_NODE_H
