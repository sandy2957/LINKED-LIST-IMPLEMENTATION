# LINKED-LIST-IMPLEMENTATION              

*COMPANY*: CODTECH SOLUTIONS

*NAME*: T.SANTHIYADEVI

*INTERN ID*:CT04DH427

*DOMAIN*: C LANGUAGE

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTOSH

For Task 2 of my internship with CodTech, I was assigned to implement a singly linked list in C, which includes basic operations like insertion, deletion, and traversal. This task helped me gain hands-on experience with dynamic data structures, which are a fundamental part of efficient programming, especially in areas like memory management and algorithm design.

Before writing the code, I reviewed how linked lists work. Unlike arrays, linked lists do not require contiguous memory locations. Instead, they use nodes where each node stores data and a pointer to the next node. This dynamic nature of linked lists makes them more flexible when it comes to inserting or deleting elements.

I started by defining a struct called Node that contains two fields: one for the integer data and another pointer to the next node. Then, I implemented the following operations:

1. Insertion:
I created a function to insert a new node at the beginning of the list. This operation requires allocating memory for the new node, assigning its data, and updating its next pointer to point to the current head of the list. Finally, I updated the head pointer to this new node.


2. Deletion:
The delete function searches for the first node containing the target value and removes it. If the node to be deleted is the head, I updated the head pointer to the next node. If it was in the middle or end, I updated the next pointer of the previous node to skip the node to be deleted. I also made sure to free the memory of the deleted node to prevent memory leaks.


3. Traversal:
This function simply iterates through each node of the list starting from the head, printing the data values in order. This step is useful to verify whether the insertion and deletion operations have worked correctly.



To test my program, I inserted a few elements into the list, deleted one of them, and then traversed the list to confirm the correct structure. For example, after inserting 10, 20, and 30, and deleting 20, the program output showed 30 → 10 → NULL, which was the expected result.

Throughout the task, I used malloc() to dynamically allocate memory and free() to release it after deletion. I also added appropriate checks for NULL pointers to prevent runtime errors and segmentation faults.

What I found particularly useful during this task was understanding how pointers and dynamic memory allocation work together in C. Implementing the linked list manually gave me insight into how data structures are constructed at a low level, without relying on libraries or built-in functions.

I added clear comments in my code to describe each function’s purpose and logic. This makes the code easier to understand and maintain.

Overall, Task 2 greatly improved my confidence in working with pointers and data structures in C. It also laid a solid foundation for implementing more advanced structures like doubly linked lists, stacks, and queues. Completing this task has strengthened both my logic-building and programming skills significantly.

*OUTPUT*:

![Image](https://github.com/user-attachments/assets/640f89d1-c185-430a-92e2-0b4e8085c82c)
