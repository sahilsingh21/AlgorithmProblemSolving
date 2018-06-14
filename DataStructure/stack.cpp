#include<iostream>
using namespace std;

struct stack
{
   int val;
   struct stack *next;
};
struct stack* head = new struct stack;


struct stack* AddNode(int val)
{       
        head->val = val;
        struct stack* temp = new struct stack;
        temp->next = head;
        head = temp;
}

void Display(stack* pt)
{  
     while(pt != NULL)
     {
         cout<<pt->val<<endl;
         pt = pt->next;
         head->next = NULL;
         head = pt;
     }

     if(head == NULL){
         pt = NULL;
         cout<<"Your stack is empty"<<endl;
     }
}

int main()
{
        
        struct stack* node = new struct stack;
        head = node;
        head->next = NULL;
        AddNode(1);
        AddNode(2);
        AddNode(3);
        AddNode(4);
        AddNode(5);
        AddNode(6);
        AddNode(7);
        AddNode(8);
        struct stack* tail = head;
        head = head->next;
        tail->next = NULL;
        Display(head);
        Display(head);
        Display(head);
    return 0;
}
