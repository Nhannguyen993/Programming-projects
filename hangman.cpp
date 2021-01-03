
#include <iostream>
#include <string>
  
void printImage(char arr[8][5],int width,int height){//function to draw the image
	    for (int y = 0; y < height; ++y) {

       
        for (int x = 0; x < width; ++x) {
            
            std::cout << arr[y][x]<<" ";
        }
	std::cout<<std::endl;
        
    }
	
}

void updateImage(char (&arr)[8][5],  bool mistake, int numMistake){//function take in array, whether there was a mistake, and the number of mistakes
	  int change[10][20]={{4,7,4,6,4,5,4,4,4,3,4,2,4,1,4,0,-1,-1},{3,0,2,0,1,0,-1,-1}, {1,0,1,1,-1,-1},{0,2,2,2,1,3,-1,-1},{1,4,1,5,-1,-1},{0,4,-1,-1},{2,4,-1,-1},{0,6,0,7,-1,-1},{2,6,2,7,-1,-1}};//array to draw the hangman
	if(mistake==true){
		int x=0;
		int y=0;
		while(change[numMistake][y]!=-1){
			arr[(change[numMistake][y+1])][(change[numMistake][y])]='*';
			
			y=y+2;
			
		}
		
	}
	
}

bool word(char letter, std::string realword, std::string& display){
	if(display.empty()==true){
		
		
	std:: string s(realword.size(),'*');
	display=s;
	}
	bool val=false;
	for(int x=0;x<realword.size();++x){
		if(letter==realword.at(x)){
			
			val= true;
			display.at(x)=realword.at(x);
			
		}
		
		
	}
	return val;
}

void resetImage(char (&image)[8][5]){
	int x=0;
	while(x<5){
	  int y=0;
  while(y<8){
	  
	  
	  image[y][x]='.';//filling up the array
	  
	  y=y+1;
  }
	  x=x+1;
  }
}

int main() {
char image[8][5]={0};//array to hold the initial blank image
int x=0;
  
  while(x<5){
	  int y=0;
  while(y<8){
	  
	  
	  image[y][x]='.';//filling up the array
	  
	  y=y+1;
  }
	  x=x+1;
  }
 
 /*for(int i=0;i<9;++i){
updateImage(image,true,i);
 }
 printImage(image,5,8);
 if(word('t',"xray")==true){
	std::cout<<"true"; 
	 
 }
 else{
	 std::cout<<"false";
 }
 */
 std::cout<<"Test"<<std::endl;
 while(true){
	 std::cout<<"enter word:"<<std::endl;
	 std::string test;
	 char letter;
	 std::cin>>test;
	 std::string test2=test;
	 std::string display;
	 int score=0;
	 if(test=="q"){
		break; 
	 }
	 int i=0;
	 resetImage(image);
	 while(true){
		
		 std::cout<<"input letter"<<std::endl;
		 std::cin>>letter;
		 
		 if(word(letter,test,display)==true){
			 
			 std::cout<<"WORD "<<display<<std::endl;
			 score=score+1;
			 printImage(image,5,8);
			 if(score==test.size()){
				 std::cout<<"YOU WIN"<<std::endl;
				 break;
			 }
			 
		 }
		 else{
			 
			 std::cout<<"WORD "<<display<<std::endl;
			 updateImage(image,true,i);
			 printImage(image,5,8);
			 if(i>=8){
				  std::cout<<"YOU LOST"<<std::endl;
				 break;
			 }
			 i=i+1;
		 }
		 
	 }
	 
 }
 
 
 
 
return 0;
}