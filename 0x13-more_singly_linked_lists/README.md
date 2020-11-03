#0x13-more_singly_linked_lists

##Intro
Directory for more holberton projects on singly linked lists.

##Projects

0. Print list [Mandatory]

Write a function that prints all the elements of a listint_t list.

Prototype: size_t print_listint(const listint_t *h);
Return: the number of nodes
Format: see example
You are allowed to use printf

File: 0-print_listint.c


1. List length [Mandatory]

Write a function that returns the number of elements in a linked listint_t list.

Prototype: size_t listint_len(const listint_t *h);

File: 1-listint_len.c


2. Add node [Mandatory]

Write a function that adds a new node at the beginning of a listint_t list.

Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

File: 2-add_nodeint.c


3. Add node at the end [Mandatory]

Write a function that adds a new node at the end of a listint_t list.

Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

File: 3-add_nodeint_end.c


4. Free list [Mandatory]

Write a function that frees a listint_t list.

Prototype: void free_listint(listint_t *head);

File: 4-free_listint.c


5. Free [Mandatory]

Write a function that frees a listint_t list.

Prototype: void free_listint2(listint_t **head);
The function sets the head to NULL

File: 5-free_listint2.cFile: 5-free_listint2.c

6. Pop [Mandatory]

Write a function that deletes the head node of a listint_t linked list, and returns the head nodes data (n).

Prototype: int pop_listint(listint_t **head);
if the linked list is empty return 0

File: 6-pop_listint.c

7. Get node at index [Mandatory]

Write a function that returns the nth node of a listint_t linked list.

Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
where index is the index of the node, starting at 0
if the node does not exist, return NULL

File: 7-get_nodeint.c


8. Sum list [Mandatory]

Write a function that returns the sum of all the data (n) of a listint_t linked list.

Prototype: int sum_listint(listint_t *head);
if the list is empty, return 0


File: 8-sum_listint.c


9. Insert [Mandatory]

Write a function that inserts a new node at a given position.

Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
where idx is the index of the list where the new node should be added. Index starts at 0
Returns: the address of the new node, or NULL if it failed
if it is not possible to add the new node at index idx, do not add the new node and return NULL

File: 9-insert_nodeint.c


10. Delete at index  [Mandatory]

Write a function that deletes the node at index index of a listint_t linked list.

Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
where index is the index of the node that should be deleted. Index starts at 0
Returns: 1 if it succeeded, -1 if it failed

File: 10-delete_nodeint.c