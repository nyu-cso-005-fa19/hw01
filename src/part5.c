#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <assert.h>

#include "part5.h"

// Your task: implement functions length, reverse

void init(Node** head) {
  *head = NULL;
}

Node* get_next(Node* curr) {
  return curr->next;
}

int get_data(Node* curr) {
  return curr->data;
}

int has_next(Node* curr) {
  return curr != NULL;
}

void clear(Node** head) {
  Node* curr = *head;

  while (curr != NULL) {
    Node* tmp = curr;
    curr = curr->next;
    free(tmp);
  }
  
  *head = NULL; // not strictly necessary, but good practice
}

Node* new_node(int d, Node* n) {
  Node* node = malloc(sizeof(Node));
  if (node == NULL) assert(0); // insert meaningful error handling here

  node->data = d;
  node->next = n;

  return node;
}

void insert(Node** head, int d) {
  Node* node = new_node(d, *head);
  *head = node;
}

// Return the length of a linked list, starting from the
// given head pointer.
//
// As an example, consider the following linked list:
//
// |---------|      |---------|      |---------|
// |    0    |  /-> |    1    |  /-> |    2    |  
// |---------| /    |---------| /    |---------| 
// |       ----     |       ----     |   NULL  |
// |---------|      |---------|      |---------|
//
// If the head node pointer refers to the node with the value 0,
// length(head) should return 3.  If the head node pointer
// refers to the node with the value 1, length(head) should
// return 2, etc.
size_t length(Node* head)
{
  // TODO: Replace the following with your code
  assert(0);
  return 0;
}


// Return a pointer to the last node in a linked list, starting
// from the given head node.  If the list is empty, then
// simply return the head node pointer.
//
// As an example, consider the following linked list:
//
// |---------|      |---------|      |---------|
// |    0    |  /-> |    1    |  /-> |    2    |
// |---------| /    |---------| /    |---------|
// |       ----     |       ----     |  NULL   |
// |---------|      |---------|      |---------|
//
// If the head node pointer refers to the node with the value 0,
// last(head) should return a pointer to the node with the
// value of 2.
Node* last(Node* head)
{
  // TODO: Replace the following with your code
  assert(0);
  return NULL;
}


// Reverse a linked list, starting from the given head pointer.
//
// As an example, consider the following linked list:
//
// |---------|      |---------|      |---------|
// |    0    |  /-> |    1    |  /-> |    2    |  
// |---------| /    |---------| /    |---------| 
// |       ----     |       ----     |   NULL  |
// |---------|      |---------|      |---------|
//
// If the head node pointer refers to the node with the value 0,
// reverse(head) should return a pointer to the node with value 2 in a list:
//
// |---------|      |---------|      |---------|
// |    2    |  /-> |    1    |  /-> |    0    |  
// |---------| /    |---------| /    |---------| 
// |       ----     |       ----     |   NULL  |
// |---------|      |---------|      |---------|
//
// Your implementation should modify the input inplace list rather than allocate
// a new list.
Node* reverse(Node* head)
{
  // TODO: Replace the following with your code
  assert(0);
  return 0;
}

