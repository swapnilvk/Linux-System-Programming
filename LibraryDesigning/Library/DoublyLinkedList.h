//Header file for doubly Linked List library
#ifndef __DoublyLinkedList__
#define __DoublyLinkedList__

#include<iostream>

typedef struct dll_node{
    void *pData;
    dll_node* pPrev;
    dll_node* pNext;
}dll_node_t;

typedef struct dll_{
    dll_node_t *pHead;
}dll_t;

//Create and return new doubly linked list 
dll_t * get_new_dll();
#endif
