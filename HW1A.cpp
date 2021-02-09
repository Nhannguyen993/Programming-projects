#include <iostream> 
#include <vector> 
using namespace std; 

//If a even is multipled by an odd or even number, the result will be even.
//To find elements that produce an odd product, we must find two odd elements.
bool evenElements(vector<int>& v){//Correct implementation?
	int count=0;
	for(int i = 0; i <v.size(); i++){
		if(v.at(i)%2 !=0){
			count=count+1;
		}
		
	}
	if(count>=2){
		return true;
	}
	else{
		return false;
	}
}

bool evenElements2(vector<int>& v){
	int push=1;
	for(int i = 0; i <v.size(); i++){
		for(int y = push; y <v.size(); y++){
		if((v.at(i)*v.at(y))%2 !=0){
			return true;
			break;
		}
		
	}
	cout<<push;
		push=push+1;
	}
	return false;
}


int main(){
vector<int> test{1,2,3,4,5}; 
vector<int> test2{2,2,4,4,6,6};
vector<int> test3{2,2,4,5,4,6};
if(evenElements(test)==true){
	std::cout<<"TRUE"<<std::endl;
}
else{
	std::cout<<"FALSE"<<std::endl;
}

if(evenElements(test2)==true){
	std::cout<<"TRUE"<<std::endl;
}
else{
	std::cout<<"FALSE"<<std::endl;
}
if(evenElements(test3)==true){
	std::cout<<"TRUE"<<std::endl;
}
else{
	std::cout<<"FALSE"<<std::endl;
}


if(evenElements2(test)==true){
	std::cout<<"TRUE"<<std::endl;
}
else{
	std::cout<<"FALSE"<<std::endl;
}

if(evenElements2(test2)==true){
	std::cout<<"TRUE"<<std::endl;
}
else{
	std::cout<<"FALSE"<<std::endl;
}
if(evenElements(test3)==true){
	std::cout<<"TRUE"<<std::endl;
}
else{
	std::cout<<"FALSE"<<std::endl;
}

	
}