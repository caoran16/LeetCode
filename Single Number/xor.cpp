//�����������Ľ����ɣ�Ȼ��0^a = a�����������ʣ�����һ����ȫ�����һ�飬ʣ�µľ���Ҫ��Ľ����
//����������׵�ţ���ˣ�����һ����Ϳ
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