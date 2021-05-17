#include <iostream>
// #include "1linkedlist.cpp"
// #include "2queue.cpp"
// #include "3stack.cpp"
#include "projek3.cpp"

int main(){
    nodePtr n;
    stack s;
    queue q;
    list l;
    l.head = nullptr;
    l.tail = nullptr;
    createStack(s);
    createQueue(q);

    createElementStack(n);
    push(s,n,q);
    createElementStack(n);
    push(s,n,q);
    traversal(s);
    std::cout << std::endl;
    printQueue(q);
    std::cout << std::endl;
    dequeue(q,l);
    std::cout << std::endl;
    printQueue(q);
    std::cout << std::endl;
    PrintList(l);
    std::cout << std::endl;
}