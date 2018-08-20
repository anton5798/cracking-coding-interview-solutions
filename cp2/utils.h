//
// Created by Anton Lykov on 8/19/18.
//

#ifndef CP2_UTILS_H
#define CP2_UTILS_H

struct Node {
    int data;
    Node *next;

    Node(int d, Node *n) {
        data = d;
        next = n;
    }

    Node() {
        data = 0; next = nullptr;
    }
};

void clearLinkedList(Node *list);
void clearCircularList(Node *list, int size);
Node *listFromArray(int *data, int size);

#endif //CP2_UTILS_H
