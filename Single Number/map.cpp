//利用C++的map内联容器，虽然我觉得这个方法不符合题目要求，空间复杂度是O(n)，但是可以练一下map对象，所以还是写一下
//经过验证这个也过了...
#include<map>
#include <iostream>
using namespace std;
class Solution{
public:
	int singleNumber(int A[], int n) {
		map<int,int> mp;
		map<int,int>::iterator it;
		for(int i = 0;i < n; i++){
			it = mp.find(A[i]);
			if(it == mp.end()){
				mp[A[i]] = 1;
			}
			else
				mp[A[i]]++;
		}
		for(it = mp.begin(); it != mp.end();it++){
			if((*it).second != 2){
				return (*it).first;
			}
		}

	}
};