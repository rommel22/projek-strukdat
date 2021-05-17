#include <iostream>
#include "test.cpp"

std::string peek(stack top)
{
    return top->nama;
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
    // std::cout << "Masukkan data pasien " << std::endl;
    // std::cout << "Nomor KTP : " << std::endl;
    std::cin >> noKtp;
    // std::cout << "Nama : " << std::endl;
    std::cin >> nama;
    // std::cout << "alamat : " << std::endl;
    std::cin >> alamat;
    // std::cout << "Umur : " << std::endl;
    std::cin >> umur;
    // std::cout << "Jenis Pekerjaan : " << std::endl;
    std::cin >> noWork;
    newStack = new node;
    newStack->noKtp = noKtp;
    newStack->nama = nama;
    newStack->alamat = alamat;
    newStack->umur = umur;
    newStack->noWork = noWork;
    newStack->next = nullptr;
}

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
    newQ = new node;
    newQ->noKtp = noKtp;
    newQ->nama = nama;
    newQ->alamat = alamat;
    newQ->umur = umur;
    newQ->noWork = noWork;
    newQ->priority = priority;
    newQ->next = nullptr;
}

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

std::string peekQ(queue q)
{
    return q.head->nama;
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

void PrintList(list n)
{
    nodePtr head = n.head;
    while (head != nullptr)
    {
        std::cout << head->noKtp << " " << head->nama << " " << head->alamat << " " << head->umur << " " << head->noWork << " " << std::endl;
        head = head->next;
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