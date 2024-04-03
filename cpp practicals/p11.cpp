// Write a C program to demonstrate the use of Friend Keyword.
#include <stdio.h>
struct B;

struct A {
    int valueA;
    void (*showValue)(struct A*, struct B*);
};

struct B {
    int valueB;
    void (*showValue)(struct A*, struct B*);
};

void showValue(struct A* objA, struct B* objB) {
    printf("Value of A: %d\n", objA->valueA);
    printf("Value of B: %d\n", objB->valueB);
}

int main() {

    printf("Name : Sandesh Babasaheb Dadibude\n");
    printf("Roll No : 104\n");

    struct A objA = {5, showValue};
    struct B objB = {10, showValue}; 
    objA.showValue(&objA, &objB);

    return 0;
}
