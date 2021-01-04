#include <iostream>

using namespace std;
struct Node {
    int data;
    struct Node* next; // Pointer to next node 
    struct Node* prev; // Pointer to previous node 
};

class Stack
{
private:
    Node* A; 
	Node* B;
	int capacity = 1;       // capacity of A
	int length = 0; 

public:
   Stack():A(nullptr),B(nullptr),capacity(1),length(0){
   }
   

   ~Stack() { 
   while(A!=nullptr){
	   Node* marker;
	   marker = A;
      A = A -> next; 
	  marker->next=nullptr;
	  delete marker; 
   }
   
   }

   bool isEmpty(void) {
	   if(length==0){
		   return true;
	   }
	   else{
		   false;
	   }
   }

   bool isFull(void) {
	   if(length==capacity){
	   return true;
   }
   else{
	   return false;
   }
   }
   void push(int x){
	  Node* test= new Node;
	test ->next = nullptr;
	test ->prev = nullptr;
	test ->data=x;
	if(A==nullptr) //headptr 
	{
		A = test;
	}
	else 
	{
	    test ->next = nullptr;
	    test ->prev = B;
		B->next = test;
	}
	B = test;
	length=length+1;   
	   
   }
   void insert(int x, int index){
      Node* test= new Node;
	test ->next = nullptr;
	test ->prev = nullptr;
	test ->data=x; 
	if(index==0){//add to front
	    test->next=A;
	    test->prev=nullptr;
	    A->prev=test;
	    A=test;
	}
	else if(index==length){//add to back
	    test->prev=B;
	    test->next=nullptr;
	    B->next=test;
	}
	else{
	    
	   Node* marker;
	   Node* prevmarker;
		marker=A;
		int x=0;
		while(marker!=nullptr  ){
	   if(x==index){
	       break;
	       std::cout<<"yes";
	   }
	   prevmarker=marker;
      marker = marker -> next; 
	  x=x+1;
   }
    test->prev=prevmarker;
    test->next=marker;
    prevmarker->next=test;
    marker->prev=test; 
	    
	
	}
	
	
   }
   
      void Remove(int index){
      
	
	    
	   Node* marker;
	   Node* prevmarker;
		marker=A;
		int x=0;
		while(marker!=nullptr  ){
	   if(x==index){
	       break;
	       
	   }
	   prevmarker=marker;
      marker = marker -> next; 
	  x=x+1;
		}
		if(x==0){
		A=A->next;
		A->prev=nullptr;
		}
		else if(x==length){
		   B=B->prev;
		   B->next=nullptr;
		
		}
		else{
		    (marker->prev)->next=marker->next;
		    (marker->next)->prev=marker->prev;
		}
		delete marker;
		
		
	
   }

   int get_capacity(void) {return capacity;}

   int get_size(void) {return length;}
   
   void print(bool x){
		Node* marker;
		if(x==true){
		marker=A;
		while(marker!=nullptr){
	   std::cout<<marker->data;
      marker = marker -> next; 
	  
   }
   delete marker;
		}
		else{
		  marker=B;
		while(marker!=nullptr){
	   std::cout<<marker->data;
      marker = marker -> prev;   
		    
		}
	}
   }
   int top() {}

   int pop() {}


};

int main()
{
    
Stack* Test = new Stack();
	Test->push(4);
	Test->push(5);
	Test->push(6);
	Test->insert(7,0);
	Test->Remove(2);
	Test->print(false);
	delete Test;
    return 0;
}