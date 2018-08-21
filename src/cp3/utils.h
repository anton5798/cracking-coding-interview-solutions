//
// Created by Anton Lykov on 8/21/18.
//

#ifndef CTCI_UTILS_H
#define CTCI_UTILS_H

class Stack{
public:
    Stack(int cap){ capacity = cap; this->items = new int[capacity]; index = -1; };
    ~Stack() { delete [] this->items; };
    bool push(int x);
    int pop();
    bool isEmpty();
    bool operator ==(const Stack &b) const;
private:
    int index;
    int* items;
    int capacity;
};


#endif //CTCI_UTILS_H
