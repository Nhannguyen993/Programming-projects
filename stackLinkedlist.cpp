#include <iostream>
template <class Type>
struct Node {
    Type data;
    Node* next;

};
template <class Type>
class Stack
{
private:
    Node<Type>* A; 
	Node<Type>* B;// array for storage
	int capacity = 1;       // capacity of A
	int length = 0; 

public:
   Stack():A(nullptr),B(nullptr),capacity(1),length(0){
   }
   

   ~Stack() { 
   while(A!=nullptr){
	   Node<Type>* marker;
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
   void push(Type x){
	  Node<Type>* test= new Node<Type>;
	test ->next = nullptr;
	test ->data=x;
	if(A==nullptr)  
	{
		A = test;
	}
	else 
	{
		B->next = test;
	}
	B = test;
	length=length+1;   
	   
   }

   int get_capacity(void) {return capacity;}

   int get_size(void) {return length;}
   
   void print(){
		Node<Type>* marker;
		marker=A;
		while(marker!=nullptr){
	   std::cout<<marker->data;
      marker = marker -> next; 
	  
   }
   delete marker;
	}
   Type top() {}

   Type pop() {}


};

int main() {
	Stack<int>* Test = new Stack<int>();
	Test->push(4);
	Test->push(6);
	Test->print();
	delete Test;
	//std::cout<<std::endl;
	//std::cout<<test.get_capacity()<<std::endl;
	//std::cout<<test.get_size()<<std::endl;
	return 0;
}