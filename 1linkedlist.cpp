#include <iostream>
#include "test.cpp"
#pragma once

void createList(nodePtr &n)
{
    nodePtr head,curr;
    int noKtp;
    std::string nama;
    std::string alamat;
    int umur;
    int noWork;
    n = new node;
    n->next = nullptr;
    n->prev = nullptr;
    n->noKtp = noKtp;
    n->nama = nama;
    n->alamat = alamat;
    n->umur = umur;
    n->noWork = noWork;

    if (head != nullptr)
    {
        curr = head;
        while (curr->next != nullptr)
        {
            curr = curr->next;
        }
        curr->next = n;
    }
    else
    {
        head = n;
    }
}

void insertList(nodePtr &n)
{
    int noKtp;
    std::string nama;
    std::string alamat;
    int umur;
    int noWork;
    int priority;
    n = new node;
    n->next = nullptr;
    n->prev = nullptr;
    n->noKtp = noKtp;
    n->nama = nama;
    n->alamat = alamat;
    n->umur = umur;
    n->noWork = noWork;
    nodePtr newNode = create_node(noKtp, nama, alamat, umur, noWork, priority);
}

void SearchList(char key, nodePtr &search, nodePtr head)
{
    nodePtr curr;
    search = head;
    bool found;
    found = false;
    while (search != NULL)
    {
        curr = curr->next;
        if (key = search->noKtp)
        {
            found = true;
            break;
        }
    }
}

void DeleteList(nodePtr head, char key)
{
    nodePtr search;
    SearchList(key, search, head);
    nodePtr delPtr = NULL;
    delPtr = search;
    if (delPtr == head)
    {
        delPtr = head;
        delPtr->next = head;
        delete delPtr;
    }
    else if (delPtr->next == NULL)
    {
        delPtr->prev = NULL;
        delete delPtr;
    }
    else
    {
        delPtr->prev->next = delPtr->next;
        delPtr->prev = NULL;
        delPtr->next->prev = delPtr->prev;
        delPtr->next = NULL;
    }
}

void PrintList(nodePtr n)
{
    nodePtr head = n;
    while (head != nullptr)
    {
        std::cout << head->noKtp << " " << head->nama << " " << head->alamat << " " << head->umur << " " << n->noWork << " " << std::endl;
        n = n->next;
    }
}

void Replace(int index, char noKtp, std::string nama, std::string alamat, char umur, int noWork, nodePtr n)
{
    nodePtr head,curr;
    if (head == nullptr)
    {
        return;
    }
    else
    {
        curr = head;
        if (index == 1)
        {
            head->noKtp = noKtp;
            head->nama = nama;
            head->umur = umur;
            head->noWork = noWork;
        }
        else
        {
            for (int i = 0; i < index - 1; i++)
            {
                if (curr->next == nullptr)
                {
                    std::cout << "\nIndex tidak ditemukan";
                    return;
                }
                curr = curr->next;
            }
            curr->noKtp = noKtp;
            curr->nama = nama;
            curr->umur = umur;
            curr->noWork = noWork;
        }
    }
}

bool is_Empty(list l)
{
    if (l.head == nullptr && l.tail == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void push_back(list &l, nodePtr &n)
{
    if (is_Empty(l)){
        l.head = n;
        l.tail = n;
    }
    
    else {
        n->prev = l.tail;
        l.tail->next = n;
        l.tail = n;
    }
}