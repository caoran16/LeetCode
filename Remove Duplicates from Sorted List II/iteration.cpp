#include<iostream>
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
	ListNode *deleteDuplicates(ListNode *head) {
		if (head == NULL || head->next == NULL) return head;
		ListNode *p = head,*d;
		while (p->next != NULL && p->val == p->next->val){
			p = p->next;
		}
		if (head != p){
			while (head != p->next){
				d = head;
				head = head->next;
				delete d;
			}
			return deleteDuplicates(head);
		}
		head->next = deleteDuplicates(head->next);
		return head;
		
	}
	void read(ListNode *head){
		ListNode *s = head;
		std::cout << "The results:" << std::endl;
		while (s != NULL){
			std::cout << s->val << std::endl;
			s = s->next;
		}
	}
};

int main(){
	ListNode *head,*p,*result;
	ListNode *n1 = new ListNode(1);
	ListNode *n2 = new ListNode(2);
	ListNode *n3 = new ListNode(2);
	ListNode *n4 = new ListNode(3);
	head = n1;
	p = n1;
	p->next = n2;
	p = n2;
	p->next = n3;
	p = n3;
	p->next = n4;
	Solution s;
	result =  s.deleteDuplicates(head);
	s.read(result);
}