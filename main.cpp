
///////////

#include <iostream>
#include "LinkedList.cpp"

using namespace std;

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