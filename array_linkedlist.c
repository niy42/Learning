#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * 
 */
 typedef struct node
 {
     int  data;
     struct node *next;
     struct node *prev;
 } node;
 node *root = NULL;
 void addNode(node **, int);
 void insertatbegin(int);
 void insertatend(int);
 void sortlist(node **, char);
 int searchlist(node **, int);
 void printlist(node *, char);
 void printlist1(node *);
 void swap(int *p, int r, int s) {
     int tmp = *(p + r);
     p[r] = p[s];
     *(p + s) = tmp;
 }
 int binarysearch(int arr[], int low, int high, unsigned x) {
     if (low > high) {
         return (-1);
     } else {
         int mid = low + (high - low) / 2;
         
         if (arr[mid] == x) {
             return mid;
         } else if(arr[mid] > x) {
             return binarysearch(arr, low, mid - 1, x);
         } else {
             return binarysearch(arr, mid + 1, high, x);
         }
     }
 }
 int main(void)
 {
     int num, x = 4;
     int i, j;
     int res, k;
     
     printf("Enter size of array: ");
     scanf("%d", &num);
     int arr[num];
     
     i = 0;
     while (i < num)
     {
         printf("Enter arr[%d]: ", i);
         scanf("%d", &*(arr + i));
         ++i;
     }
     i = 0;
     for (; i < num; ++i)
     {
         j = i + 1;
         while (j < num){
            if (arr[j] < *(arr + i)){
                swap(arr, i, j);
            }
            ++j;
         }
     }
     printf("Sorted array is: ");
     {
         printf("{");
         i = 0;
         while (i < num){
             printf("%d", arr[i]);
             if (i != num - 1){
                 printf(", ");
             }
             ++i;
         }
         printf("}");
     }
     putchar(10);
     res = binarysearch(arr, 0, num - 1, x);
     (res != -1) ? printf("%d is found", x) : printf("%d is not found", x);
     printf("\nbelow is a Linked List operation: ");
     node *head_ref = NULL;
     
     addNode(&head_ref, 3);
     addNode(&head_ref, 2);
     addNode(&head_ref, 0);
     addNode(&head_ref, 5);
     addNode(&head_ref, 1);
     addNode(&head_ref, 4);
     printlist(head_ref, 'a');
     putchar(10);
     sortlist(&head_ref, 98);
     printlist1(head_ref);
     k = searchlist(&head_ref, 4);
     (k == 1) ? printf("\n%d is found", x) : printf("\n%d is not found", x);
     return (0);
 }
 void addNode(node **root, int x)
 {
     node *new_node = malloc(sizeof(node));
     (*new_node).data = x;
     new_node->next = NULL;
     new_node->prev = NULL;
     
     if (*root == NULL){
         *root = new_node;
         return;
     }
     node *tmp = *root;
     while (tmp->next)
     {
         tmp = tmp->next;
     }
     tmp->next = new_node;
     new_node->prev = tmp;
 }
 void printlist(node *tmp, char x)
 {
     putchar(10);
     int i;
     int num = 6;
     switch (x)
     {
         case 97:
                printf("Linked List: ");
                break;
     }
     printf("{");
     i = 0;
     while (tmp && i < num){
         printf("%d", tmp->data);
         if (i != num - 1){
             printf(", ");
         }
         tmp = tmp->next;
         ++i;
     }
     printf("}");
 }
 void sortlist(node **root, char x)
 {
     int temp;
     node *tmp = *root;
     node *index = NULL;
     switch (x)
     {
         case 98:
                printf("Sorted Linked List: ");
                    break;
     }
     while (tmp)
     {
         index = tmp->next;
         while (index){
             if (index->data < (*tmp).data){
                temp = tmp->data;
                tmp->data = (*index).data;
                index->data = temp;
             }
             index = index->next;
         }
         tmp = tmp->next;
     }
 }
 void printlist1(node *tmp)
 {
     int i, num = 6;
     printf("{");
     i = 0;
     while (tmp && i < num)
     {
         printf("%d", tmp->data);
         if (i != num - 1){
             printf(", ");
         }
         tmp = tmp->next;
         i++;
     }
     putchar('}');
 }
 int searchlist(node **root, int x)
 {
     node *tmp = *root;
     while (tmp)
     {
         if ((*tmp).data == x){
             return (1);
         }
         tmp = tmp->next;
     }
     return (0);
 }
