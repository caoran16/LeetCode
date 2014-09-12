#include<iostream>
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
	ListNode *deleteDuplicates(ListNode *head) {
		if (head == NULL) return head;
		bool repeat = false;
		ListNode *pretend = new ListNode(0);
		pretend->next = head;
		ListNode *slow = pretend, *fast = head,*d; 
		while (fast->next != NULL){
			if (fast->val == fast->next->val){
				repeat = true;
				d = fast->next;
				fast->next = fast->next->next;
				delete d;
			}
			else{
				if (repeat == true){
					d = fast;
					fast = fast->next;
					slow->next = fast;
					delete d;
				}
				else{
					slow = fast;
					fast = fast->next;
				}
				repeat = false;
			}
		}
		if (repeat){
			slow->next = NULL;
			delete fast;
		}
		return pretend->next;
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
	ListNode *n2 = new ListNode(1);
	//ListNode *n3 = new ListNode(2);
	//ListNode *n4 = new ListNode(3);
	head = n1;
	p = n1;
	p->next = n2;
	p = n2;
	//p->next = n3;
	//p = n3;
	//p->next = n4;
	Solution s;
	result =  s.deleteDuplicates(head);
	s.read(result);
}