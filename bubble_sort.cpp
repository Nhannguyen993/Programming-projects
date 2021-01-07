#include <vector>
#include <iostream>

using namespace std;
void
swap (auto & x, auto & y)
{
  auto temp = std::move (x);
  x = std::move (y);
  y = std::move (temp);
}

void
bubbleSort (vector < auto > &contain)
{
  for (int x = 0; x < contain.size () - 1; ++x)
    {
      for (int y = 0; y < contain.size () - x - 1; ++y)
	{
	  if (contain[y] > contain[y + 1])
	    {
	        swap(contain[y] ,  contain[y+1] );
	    }
	}

    }


}

int
main ()
{
  cout << "Hello World";
  int x = 0;
  int y = 1;
  swap (x, y);
  static const int arr[] = {16,2,77,29};
vector<int> vec (arr, arr + sizeof(arr) / sizeof(arr[0]) );
 // cout << x << " " << y;
bubbleSort(vec);
for(int i=0;i<vec.size();++i){
cout<<vec[i]<<" ";
}
  return 0;
}