#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = nullptr;
    }

    void insert(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void remove()
    {
        if (head == nullptr)
        {
            return;
        }

        Node *temp = head;
        head = head->next;
        delete temp;
    }

    bool search(int val)
    {
        Node *curr = head;
        while (curr != nullptr)
        {
            if (curr->data == val)
            {
                return true;
            }
        }
        return false;
    }
    void printList()
    {
        Node *curr = head;
        while (curr != nullptr)
        {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << "\n";
    }
};

int main()
{
    LinkedList list;

    list.insert(3);
    list.insert(4);
    list.insert(5);
    list.printList();
    cout << list.search(3) << " " << list.search(2) << "\n";
    list.remove();
    list.printList();
    return 0;
}