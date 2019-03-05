/*

Problem link = https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list/problem

This challenge is part of a MyCodeSchool tutorial track and is accompanied by a video lesson.

If you're new to linked lists, this is a great exercise for learning about them. Given a pointer to the head node of a linked list, print its elements in order, one element per line. If the head pointer is null (indicating the list is empty), don’t print anything.

Input Format

The first line of input contains
, the number of elements in the linked list.
The next

lines contain one element each, which are the elements of the linked list.

Note: Do not read any input from stdin/console. Complete the printLinkedList function in the editor below.

Constraints

, where is the

    element of the linked list.

Output Format

Print the integer data for each element of the linked list to stdout/console (e.g.: using printf, cout, etc.). There should be one element per line.

Sample Input

2
16
13

Sample Output

16
13

Explanation

There are two elements in the linked list. They are represented as 16 -> 13 -> NULL. So, the printLinkedList function should print 16 and 13 each in a new line.
*/

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

typedef struct SinglyLinkedListNode SinglyLinkedListNode;
typedef struct SinglyLinkedList SinglyLinkedList;

struct SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;
};

struct SinglyLinkedList {
    SinglyLinkedListNode* head;
    SinglyLinkedListNode* tail;
};

SinglyLinkedListNode* create_singly_linked_list_node(int node_data) {
    SinglyLinkedListNode* node = malloc(sizeof(SinglyLinkedListNode));

    node->data = node_data;
    node->next = NULL;

    return node;
}

void insert_node_into_singly_linked_list(SinglyLinkedList** singly_linked_list, int node_data) {
    SinglyLinkedListNode* node = create_singly_linked_list_node(node_data);

    if (!(*singly_linked_list)->head) {
        (*singly_linked_list)->head = node;
    } else {
        (*singly_linked_list)->tail->next = node;
    }

    (*singly_linked_list)->tail = node;
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head) {
    while(head != NULL){
        printf("%d\n",head->data);
        head = head->next;
    }
}

int main()
{
    SinglyLinkedList* llist = malloc(sizeof(SinglyLinkedList));
    llist->head = NULL;
    llist->tail = NULL;

    char* llist_count_endptr;
    char* llist_count_str = readline();
    int llist_count = strtol(llist_count_str, &llist_count_endptr, 10);

    if (llist_count_endptr == llist_count_str || *llist_count_endptr != '\0') { exit(EXIT_FAILURE); }

    for (int i = 0; i < llist_count; i++) {
        char* llist_item_endptr;
        char* llist_item_str = readline();
        int llist_item = strtol(llist_item_str, &llist_item_endptr, 10);

        if (llist_item_endptr == llist_item_str || *llist_item_endptr != '\0') { exit(EXIT_FAILURE); }

        insert_node_into_singly_linked_list(&llist, llist_item);
    }

    printLinkedList(llist->head);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}
