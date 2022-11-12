// function called InsertAfter to inset new value after specific value in list
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
class LinkList
{
    Node *head;

public:
    LinkList()
    {
        head = NULL;
    }
    void insetAtEnd(int data)
    {
        if (head == NULL)
        {
            cout << "LIST IS EMPTY SO THIS IS OUR FIRST NODE INTO LIST "
                 << "\n";
            Node *newNode = new Node(data);
            head = newNode;
        }
        else
        {
            Node *temp = head;
            Node *newNode = new Node(data);
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            cout << "VALUES ARE INSERTED AT THE END \n";
        }
    }
    void insertAfter(int data)
    {
        cout << "inserting is start ";
        Node *returnSaver = searching(data);

        if (returnSaver == head)
        {
            /* code */
            cout << "WE CAN NOT INSERT THE VALUES BECAUSE VALUES IS NOT PRESENT INTO LINK LIST \n";
        }
        else
        {
  
            cout << "enter a values you add after this index : ";
            int value = 0;
            cin >> value;
            Node *newNode = new Node(value);
            newNode->next = returnSaver->next;
            returnSaver->next = newNode;
            // cout << "\n VALUES ARE ADDED INTO END OF LINK LIST \n";
        }
    }
    Node *searching(int data)
    {
        Node *temp = head;
        while (head != NULL)
        {
            if (data == temp->data)
            {
                cout << "\nfind\n";
                return temp;
            }
            temp = temp->next;
   
        }
        return head;
    }
    void print()
    {
        if (head == NULL)
        {
            cout << "WE CAN NOT PRINT THE VALUES BECAUSE LINK LIST IS EMPTY ";
        }
        else
        {
            Node *temp = head;
            while (temp != NULL)
            {
                /* code */
                cout << endl;
                cout << temp->data;
                // cout << endl;
                temp = temp->next;
            }
        }
    }
};
int main()
{
    LinkList l;
    l.insetAtEnd(1);
    l.insetAtEnd(2);
    l.insetAtEnd(3);
    l.insetAtEnd(4);
    l.insetAtEnd(5);
    l.insetAtEnd(6);
    cout << "PRINT THE VALUES \n ";
    l.print();
    l.insertAfter(555);
    // l.insertAfter(2);
    // l.insertAfter(3);
    // l.insertAfter(4);
    // l.insertAfter(5);
    // l.insertAfter(6);

    cout << "\n PRINT THE VALUES \n ";
    l.print();
}