#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int>* newnode = NULL;
    //newnode = head;
    //newnode -> next = NULL;
    while(head){
        LinkedListNode<int>* next = head ->next;
        head->next = newnode;
        //newnode -> next = newnode;
        newnode = head;
        head = next;
        
    }
    return newnode;
}
