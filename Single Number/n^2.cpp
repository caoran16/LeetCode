//这货根本就不具有效率可言，只算了四十多个数就败了
#include<iostream>
using namespace std;
class Solution {
public:
    int singleNumber(int A[], int n) {
        int answer;
        for(int i = 0;i < n; i++)
        {
			for(int j = 0;j < n; j++){
				if(i == j)
					continue;
				if(A[i] == A[j]){
					break;
				}
				else {
					if (j == n-1){
						answer = A[i];
					}
					continue;
				}

			}
        }
		return answer;
    }

};