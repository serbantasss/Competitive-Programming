#include <stdio.h>
#include <stdlib.h>

// structures for simple linked list
struct node {
    int data; // stores the data
    struct node * next; // points to the next element in the list
};

void free_list(struct node* head) {
    struct node* tmp;
    while (head != NULL)
    {
        tmp = head;
        head = head->next;
        printf("\nI'd free %p", tmp);
        //    free(tmp);
    }
}

void delete_list(struct node** head_ref) {
    /* deref head_ref to get the real head */
    struct node* current = *head_ref;
    struct node* next;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }

    /* deref head_ref to affect the real head back
        in the caller. */
    *head_ref = NULL;
}

void print_list(struct node *head) {
    struct node *current_node;
    current_node = head;
    if (current_node) {
        while (current_node != NULL) {
            printf("\n%p contains %d and points to %p", current_node, current_node->data, current_node->next);
            current_node = current_node->next;
        }
    }
    else {
        printf("\nEmpty list!");
    }
}

int main(void) {
    // creating and initializing the list head
    struct node *head;
    head = malloc(sizeof(struct node));
    (*head).data = 0;
    head->next = NULL;

    printf("Head of the list:\n%p\n", head);

    struct node *current_node, *new_node;
    current_node = head;

    for(int i=1; i<10; i++) {
        // create the new node
        new_node = malloc(sizeof(struct node));
        // set the link from current node to newly created node
        current_node->next = new_node;
        // set the data in the new node
        new_node->data = i;
        // set the new next pointer to "END of LIST"
        new_node->next = NULL;
        // set the current node as the new node
        current_node = new_node;
    }

    print_list(head);
    // current_node = head;
    // while (current_node) {
    //     printf("\n%p contains %d and points to %p", current_node, current_node->data, current_node->next);
    //     current_node = current_node->next;
    // }

    free_list(head);
    delete_list(&head);

    print_list(head);

}

