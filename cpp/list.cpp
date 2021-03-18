//Simple linked-lists operation.

struct Data;
struct SingleLinkedList
{
  SingleLinkedList* next;
  Data *data;
};

struct DoubleLinkedList
{
  DoubleLinkedList *prev;
  DoubleLinkedList *next;  
  Data *data;
};

//Problem 1: Implement a function which gets SingleLinkedList and creates a DoubleLinkedList with the same data

//Problem 2: Implement a function which gets list and revert it (the first node becomes the last etc...). 
//Choose SingleLinkedList or DoubleLinkedList, whichever you like
