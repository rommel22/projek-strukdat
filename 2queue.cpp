#include <iostream>
#include "test.cpp"
#include "1linkedlist.cpp"
#pragma once

bool isEmpty(queue q)
{
    if (q.head == nullptr && q.tail == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void createQueue(queue &q)
{
    q.head = nullptr;
    q.tail = nullptr;
}

void createQElement(nodePtr &newQ, int priority)
{
    int noKtp;
    std::string nama;
    std::string alamat;
    int umur;
    int noWork;
    std::cout << "Masukkan data pasien " << std::endl;
    std::cin >> noKtp;
    std::cin >> nama;
    std::cin >> alamat;
    std::cin >> umur;
    std::cin >> noWork;
    nodePtr newNode = create_node(noKtp, nama, alamat, umur, noWork, priority);
}

void enQueue(queue &q, nodePtr newQ)
{
    nodePtr pRev = nullptr;
    nodePtr pHelp = q.head;
    if (isEmpty(q))
    {
        q.head = newQ;
        q.tail = newQ;
    }
    else
    {
        while (newQ->priority >= pHelp->priority)
        {
            if (pHelp->next == nullptr)
                break;
            pRev = pHelp;
            pHelp = pHelp->next;
        }
        if (pHelp == q.head && newQ->priority < pHelp->priority)
        {
            newQ->next = pHelp;
            q.head = newQ;
        }
        else if (pHelp == q.tail && newQ->priority > pHelp->priority)
        {
            pHelp->next = newQ;
            q.tail = newQ;
        }
        else
        {
            pRev->next = newQ;
            newQ->next = pHelp;
        }
    }
}

void dequeue(queue &q, list &l)
{
    nodePtr delElement;
    if (isEmpty(q))
    {
        delElement = nullptr;
    }
    else if (q.head->next == nullptr)
    {
        delElement = q.head;
        q.head = nullptr;
        q.tail = nullptr;
    }
    else
    {
        delElement = q.head;
        q.head = q.head->next;
        delElement->next = nullptr;
    }
    push_back(l, delElement);
}

void printQueue(queue &q)
{
    nodePtr curr = q.head;
    while (curr != nullptr)
    {
        std::cout << curr->noKtp << " " << curr->nama << " " << curr->alamat << " " << curr->umur << " " << curr->noWork << " "<<std::endl;
        curr = curr->next;
    }
}