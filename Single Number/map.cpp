//����C++��map������������Ȼ�Ҿ������������������ĿҪ�󣬿ռ临�Ӷ���O(n)�����ǿ�����һ��map�������Ի���дһ��
//������֤���Ҳ����...
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