// Thomas McLean
// June 13, 2020
// Implementation of singly linked list.

// ---INCLUDES---
#include <iostream>
#include "Linked_Lists.cpp"

// ---MAIN---
int main() {
    Singly singlyLinked;
    singlyLinked.Push(1, 345);
    singlyLinked.Pop();

    Doubly doublyLinked;
    doublyLinked.Push(3, 688756);
    doublyLinked.Pop();

    return 0;
}