#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int main()
{
struct Node* node=(struct Node*)malloc(sizeof(struct Node));
node->data=12;
node->next=NULL;
printf("%d",node->data);
return 0;
}