//
// Created by Anton Lykov on 8/21/18.
//

#include <iostream>
#include "utils.h"

bool Stack::push(int x){
    if (index < capacity-1){
        items[++index] = x;
        return true;
    }
    else{
        return false;
    }
}

bool Stack::isEmpty(){
    return (index == -1);
}

int Stack::pop(){
    return items[index--];
}

bool Stack::operator ==(const Stack &b) const {
    if(this->index != b.index) return false;
    for(int i = 0; i < index + 1; i++){
        if(this->items[i] != b.items[i]) return false;
    }
    return true;
}
