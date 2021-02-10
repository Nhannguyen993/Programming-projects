int Binary_Search(vector<int> &v, intx){
	int mid,low=0;
	int high = (int) v.size()-1;
	while (low<high){
		mid = (low+high)/2;
		if (num_comp++,v[mid] < x) low=mid+1;
		else high =mid;
	}
	if(num_comp++, x == v[low])returnlow;//OK: found
	throwUnsuccessful_Search();//exception: not found


}