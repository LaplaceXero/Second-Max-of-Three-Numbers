#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	
	
	int  a,b,c;
	vector<int> list;
	int testCases = 0;
	
	cin >>testCases; 
	
	for(auto i = 0; i < testCases; i++)
	{
	    cin  >>a >>b >>c;
	    
	    list.push_back(a);
	    list.push_back(b);
	    list.push_back(c);
	    
	    sort(list.begin(),list.end());
	    
    	cout <<list[1] <<endl;
    	list.clear();
	}
	
	return 0;
}

