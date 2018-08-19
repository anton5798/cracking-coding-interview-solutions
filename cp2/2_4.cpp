#include <cmath>
#include <cassert>
#include <cstdlib>
#include <iostream>
#include "2_4.h"

int countdigits(int sum) {
    int ret = 0;
    while (sum > 0) {
        ret++;
        sum = sum / 10;
    }
    return ret;
}

Node *createLinkedList(int data) {
    Node *curr = new Node;
    Node* newguy = curr;
    int digits = countdigits(data);
    for (int i = 0; i < digits - 1; i++) {
        int number = (data / (int) pow(10.0, (double) digits - (double) (i + 1))) % 10;
        curr->data = number;
        curr->next = new Node;
        curr = curr->next;
    }
    curr->data = data % 10;
    curr->next = nullptr;
    return newguy;
}

int list_to_int(Node* first){
    int ret = 0;
    while (first != nullptr) {
        ret *= 10;
        ret += first->data;
        first = first->next;
    }
    return ret;
}

Node *addLists(Node *first, Node *second) {
    int num1 = list_to_int(first);
    int num2 = list_to_int(second);
    int sum = num1 + num2;
    Node* newguy = createLinkedList(sum);
    return newguy;
}

int runtests(){
    std::cout << "RUNNING TESTS FOR 2_4" << std::endl;
    for(int i = 0; i < 10; i++) {
        int a1 = rand() % 1000000;
        int a2 = rand() % 1000000;
        Node *f = createLinkedList(a1);
        Node *s = createLinkedList(a2);
        Node *newguy = addLists(f, s);
        assert(list_to_int(newguy) == a1 + a2);
        clearLinkedList(f);
        clearLinkedList(s);
        clearLinkedList(newguy);
    }
    return 0;
}

void test_2_4() {
    runtests();
}


