// PROBLEM 3.4 from the CCI

// Created by Anton Lykov


#include <vector>
#include <cassert>
#include <ctime>
#include <iostream>

#include "3_4.h"
using namespace std;


void hanoiTowers(Stack &a, Stack &b, Stack &c, int n){
    if(n == 0) return;
    hanoiTowers(a, c, b, n-1);
    c.push(a.pop());
    hanoiTowers(b, a, c, n-1);
    return;

}

int test_3_4(){
    cout << "TESTING 3_4" << endl;
    const int NUM_DISKS = 25;
    Stack* a = new Stack(100);
    Stack* b = new Stack(100);
    Stack* c = new Stack(100);
    Stack* result = new Stack(100);
    for(int i = NUM_DISKS; i > 0 ; i--){
        a->push(i);
        result->push(i);
    }
    std::clock_t start;
    start = std::clock();
    double duration;
    hanoiTowers(*a, *b, *c, NUM_DISKS);
    duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
    cout << "Time elapsed for " << NUM_DISKS << " disks is: " << duration << endl;
    assert(*c == *result);
    assert(*b == *a);
    delete a;
    delete b;
    delete c;
    delete result;
    return 0;
}
