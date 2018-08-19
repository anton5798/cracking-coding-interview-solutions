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