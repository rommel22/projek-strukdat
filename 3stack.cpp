#include <iostream>
#include "test.cpp"
#include "2queue.cpp"
#pragma once

int peek(stack top)
{
    return top->noKtp;
}

bool isEmpty(stack top)
{
    if (top == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void createStack(stack &top)
{
    top = nullptr;
}

void createElementStack(nodePtr &newStack)
{
    int noKtp;
    std::string nama;
    std::string alamat;
    int umur;
    int noWork;
    int priority;
    std::cout << "Masukkan data pasien " << std::endl;
    std::cin >> noKtp;
    std::cin >> nama;
    std::cin >> alamat;
    std::cin >> umur;
    std::cin >> noWork;
    nodePtr newNode = create_node(noKtp, nama, alamat, umur, noWork, priority);
}
    

// void limitStack(int lim){
//     std::cout << "Masukkan jumlah vaksin : ";
//     std::cin >> lim;
// }

void push(stack &top, nodePtr newstack, queue &gol1)
{
    if (newstack->noWork == 1)
    {
        enQueue(gol1, newstack);
    }
    else
    {
        std::cout << "push stack\n";
        if (isEmpty(top))
        {
            top = newstack;
        }
        else
        {
            newstack->next = top;
            top = newstack;
        }
    }
}

void pop(stack &top, nodePtr &pDel)
{
    if (isEmpty(top))
    {
        std::cout << "stack underflow\n";
        pDel = nullptr;
    }
    else if (top->next == nullptr)
    {
        pDel = top;
        top = nullptr;
    }
    else
    {
        pDel = top;
        top = top->next;
        pDel->next = nullptr;
    }
}

void traversal(stack top)
{
    nodePtr pHelp = top;
    if (isEmpty(top))
    {
        std::cout << "stack is empty.\n";
    }
    else
    {
        std::cout << "TOP\n^\n|\n";
        do
        {
            std::cout << pHelp->noKtp << " " << pHelp->nama << " " << pHelp->alamat << " " << pHelp->umur << " " << pHelp->noWork << " ";
            pHelp = pHelp->next;
        } while (pHelp != nullptr);
    }
}