#include <iostream>

template <class Type>
class Stack
{
private:
    Type* A;    // array for storage
	int capacity = 1;       // capacity of A
	int length = 0; 

public:
   Stack():A(nullptr),capacity(1),length(0){
   }
   Stack(int nums):A(nullptr),capacity(1),length(0) {
       capacity = nums;
	   length=0;
	   A= new Type[nums];
   }

   ~Stack(void) { 
   delete[] A;
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
	   if(length==capacity){
		   Type* newarray=new Type[capacity+1];
		   
		   for(int i=0;i<length;++i){
			   newarray[i]=A[i];
		   }
		   delete[] A;
			A=newarray;
			capacity=capacity+1;
	   }
	   
	   A[length]=x;
	   length=length+1;
	   
	   
	   
	   
   }

   int get_capacity(void) {return capacity;}

   int get_size(void) {return length;}
	void print(){
		for(int i=0;i<length;++i){
		std::cout<<A[i];
		}
	}
   Type top() {}

   Type pop() {}


};

int main() {
	Stack<int>* test = new Stack<int>(1);
	
        test->push(1);
		test->push(2);
    //int x=test->get_capacity();
	//test->print();
	std::cout<<std::endl;
	std::cout<<test->get_capacity()<<std::endl;
	std::cout<<test->get_size()<<std::endl;
	delete test;
	return 0;
}
