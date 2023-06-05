# C - More singly linked lists

## General

- How to use linked lists
- Start to look for the right source of information without too much help

## Data structure used in tis project :

`/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;`

