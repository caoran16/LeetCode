//利用异或运算的交换律，然后0^a = a，这两个性质，将这一列数全部异或一遍，剩下的就是要求的结果、
//这货绝对妥妥的牛逼了，过的一塌糊涂
class Solution{
public:
	int singleNumber(int A[], int n) {
		int answer = A[0];
		for(int i = 1;i < n; i++){
			answer = answer ^ A[i];
		}
		return answer;
	}
};