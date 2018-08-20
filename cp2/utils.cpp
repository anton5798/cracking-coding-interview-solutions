//
// Created by Anton Lykov on 8/19/18.
//

#include "utils.h"

void clearLinkedList(Node* list){
    while(list != nullptr){
        Node* temp = list;
        list = list->next;
        delete temp;
    }
}

void clearCircularList(Node* list, int size){
    for(int i = 0; i < 7; i++){
        Node* curr = list;
        list = list->next;
        delete curr;
    }
}

Node* listFromArray(int *data, int size){
    if(size == 0) return nullptr;
    Node* newguy = new Node(data[0], nullptr);
    Node* curr = newguy;
    for(int i = 1; i < size; i++){
        curr->next = new Node(data[i], nullptr);
        curr = curr->next;
    }
    return newguy;
}