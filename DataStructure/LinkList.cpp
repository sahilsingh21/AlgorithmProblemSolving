#include<iostream>
#include <stdlib.h>
using namespace std;

struct list{
  int val;
  struct list *next;
};
struct list* head = new struct list;  //Global define head
struct list* tail = head;   //Global define tail pointer

struct list* Newnode(int val)   //first node enter
{
    if(head->next == NULL)
    {
    	head->val = val;
      head->next = new struct list;
    	tail = head->next;
      tail->next = NULL;
    }
}

struct list* AddNode(int val)   //Adding node function
{
	 if(head->next == NULL){
     Newnode(val);    //first node calling
   }else
   {  
     tail->val = val;
     tail->next = new struct list;    //tail point to tail->next
     tail = tail->next;
     tail->next = NULL;
   }

}


void Display(list* node)   //Print all the value function
{ 
        int a = 1;
     while(node->next != NULL){
       cout<<node->val<<endl;
       node = node->next;
     }
    
}


int main(){
   head->next = NULL;   
   AddNode(1);
   AddNode(2);
   AddNode(3);
   AddNode(4);
   AddNode(5);
   AddNode(6);
   struct list* disp = head;    //new pointer disp point to head 
   Display(disp);   //Display function calling

return 0;
}