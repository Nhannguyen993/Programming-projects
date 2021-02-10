/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream> 
#include <vector> 
#include <math.h> 
using namespace std; 
int num_comp=0;
class throwUnsuccessful_Search{
    
};


template<typename T>
int Binary_Search(vector<T> &v, T x){
	int mid,low=0;
	int high = (int) v.size()-1;
	while (low<high){
		mid = (low+high)/2;
		if (num_comp++,v[mid] < x) low=mid+1;
		else high =mid;
	}
	if(num_comp++, x == v[low])return low;//OK: found
	throwUnsuccessful_Search();//exception: not found


}
main(){
	vector<int> test{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	num_comp=0;
	cout<<Binary_Search(test, 1)<<endl;
	cout<<"comparison "<<num_comp<<endl;
	num_comp=0;
	cout<<Binary_Search(test, 16)<<endl;
	cout<<"comparison "<<num_comp<<endl;
	num_comp=0;
	cout<<Binary_Search(test, 8)<<endl;
	cout<<"comparison "<<num_comp<<endl;
	//cout<<"testing";
	//vector<char> test1{'a','b','c','d'}; 
	//cout<<Binary_Search(test1, 'c');
	
	vector<int> test2;
	for(int i=1;i<pow(2,4)+1;++i){
	    cout<<i<<" ";
	
	}
	cout<<endl;
	vector<int> test3;
	for(int i=1;i<pow(2,2);++i){
	    cout<<i<<" ";
	
	}
	
	return 0;
}