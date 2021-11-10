//
// Created by DIANA on 10/11/2021.
//

#ifndef EJERCICIOLINKEDLIST_LINKEDLIST_H
#define EJERCICIOLINKEDLIST_LINKEDLIST_H





/////


#include <vector>
#include "Node.h"

template <class T>
class LinkedList {
public:

    LinkedList();

    bool isEmpty();

    void addNodeFirst( T );

    void addNodeLast( T );

    std::vector<T> getLinkedList();

    virtual ~LinkedList();

private:
    Node<T>* head;
};

#endif //EJERCICIOLINKEDLIST_LINKEDLIST_H