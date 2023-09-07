#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void addAtHead(Node *&node, int data)
{
    Node *newNode = new Node(data);
    newNode->next = node;
    node = newNode;
}

void addAtTail(Node *node, int data)
{
    Node *newNode = new Node(data);
    Node *temp = node;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node = new Node(-1);
    addAtHead(node, 1);
    addAtHead(node, 2);
    addAtTail(node,10);
    addAtHead(node,1000);
    addAtTail(node,100);
    printLinkedList(node);
    return 0;
}