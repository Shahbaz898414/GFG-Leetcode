#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 

struct Node{
  int data;
  struct Node *next;

  Node(int x){
    data=x;
    next=NULL;
  }
};

Node* inputList(int size) {
  if(size==0) return NULL;
  int val;cin>>val;

  Node *head=new Node(val);
  Node *tail= head;

  for(int i=0;i<size-1;i++) {
    cin>>val;
    tail->next = new Node(val);
    tail=tail->next;
  }


  return head;
}



class Solution
{
public:
    int length(Node* head) {
        int len=0;
        while(head!=NULL) {
            len++;
            head=head->next;
        }
        
        return len;
    }
    int intersectPoint(Node* head1, Node* head2) {
  
        int l1=length(head1);
        int l2=length(head2);
        
        Node* ptr1;
        Node* ptr2;
        
        if(l1>l2)
        {
            ptr1=head1;
            ptr2=head2;
        }
        else
        {
            ptr1=head2;
            ptr2=head1;
        }
        
        int d=abs(l1-l2);
        
        while(d)
        {
            ptr1=ptr1->next;
            d--;
        }
        
        while(ptr1!=NULL and ptr2!=NULL)
        {
            if(ptr1==ptr2)
            {
                return ptr1->data;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return -1;
        
    }
};





int main() {

  // cout<<pow(2,12)<<endl;
  int t;cin>>t;

  while(t--) {
    int n1,n2,n3;cin>>n1>>n2>>n3;


    Node* head1=inputList(n1);
    Node* head2=inputList(n2);
    Node* common=inputList(n3);

    Node* temp=head1;

    while(temp!=NULL and temp->next!=NULL){
      temp=temp->next;
      
    }

    if(temp!=NULL) temp->next=common;

    temp=head2;
    while(temp!=NULL and temp->next!=NULL){
      temp=temp->next;
    }

    if(temp!=NULL) temp->next=common;

    Solution ob;


    cout<<ob.intersectPoint(head1,head2)<<endl;

  }







  
 
  

 
}

