#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

  Node(int value){
    data=value;
    next=NULL;
  }
};

Node* middlenode(Node* head){
  int length =0;
  Node* temp = head;
  while(temp!=NULL){
    length++;
    temp=temp->next;
  }

  int mid = length/2;

  temp = head;

  for(int i=0;i<mid;i++){
    temp=temp->next;
  }
 return temp;
}

int main(){
Node* first = new Node(10);
Node* second = new Node(20);
Node* third = new Node(30);
Node* fourth = new Node(40);

first->next= second;
second->next = third;
third->next=fourth;
 
Node* ans = middlenode(first);
cout<<ans->data;


}