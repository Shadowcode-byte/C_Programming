/*2.Write a program to insert item in middle of the linked list.*/
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Display Linked List
void display(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL, *newNode, *temp;
    int n, pos, value;

    // Create initial list
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter value: ");
        scanf("%d", &value);
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
            head = newNode;
        else {
            temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    printf("\nCurrent Linked List:\n");
    display(head);

    // Insert new node
    printf("\nEnter position to insert new node: ");
    scanf("%d", &pos);

    newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter value of new node: ");
    scanf("%d", &value);
    newNode->data = value;

    temp = head;

    if (pos == 1) { // Insert at beginning
        newNode->next = head;
        head = newNode;
    } else {
        for (int i = 1; i < pos - 1 && temp != NULL; i++)
            temp = temp->next;

        if (temp == NULL) {
            printf("Invalid Position\n");
            return 0;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    printf("\nLinked List After Insertion:\n");
    display(head);

    return 0;
}
