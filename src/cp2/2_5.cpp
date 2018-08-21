//
// Created by Anton Lykov on 8/19/18.
//

#include <unordered_map>
#include <iostream>
#include "2_5.h"
using namespace std;

Node *getFirst(Node *llist) {
    std::unordered_map<Node*, int> table;
    while(llist != nullptr){
        if(table.find(llist) != table.end()){
            return llist;
        }
        else{
            table[llist] = 1;
        }
        llist = llist->next;
    }
    return nullptr;
}

int test_2_5() {
    std::cout << "RUNNING TESTS FOR 2_5" << std::endl;
    int testData[7] = {1, 2, 3, 4, 5, 6, 7};
    Node *llist = listFromArray(testData, 7);
    llist->next->next->next->next->next->next->next = llist->next->next->next;
    Node *result = getFirst(llist);
    assert(result->data = 4);
    clearCircularList(llist, 7);
    return 0;
}