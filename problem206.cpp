#include <iostream>
using namespace std;
struct node 
{
    int data;
    node *next = nullptr;
    node(int d)
    {
        data = d;
    }
};
int main ()
{
    node *head = new node(0);
    node *temp = head;
    for(int i = 0; i < 10 ; i++)
    {
        temp->next = new node(i+1);
        temp = temp->next;
    }
    node *temp2 = head;
    cout << "ordinary linkedlist " << endl;
    while(temp2 != nullptr)
    {
        cout << temp2->data;
        if(temp2->next != nullptr)
        {
            cout << " -> ";
        }
        temp2 = temp2->next;
    }
    //revering the linkedlist 
    node *x = head; //two pointers made 
    node *y = x->next;
    while(y != nullptr)
    {
        node *temp = y;
        y = y->next;
        temp->next = x;
        x = temp;
    }
    head->next = nullptr;
    head = x;
    node *temp3 = head;
    cout << endl;
    cout << "reversed linkedlist " << endl;
    while(temp3 != nullptr)
    {
        cout << temp3->data;
        if(temp3->next != nullptr)
        {
            cout << " -> ";
        }
        temp3 = temp3->next;
    }
}