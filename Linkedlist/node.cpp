#include<bits/stdc++.h>
using namespace std;

int main(){
  class Node{
    public:
    int data;
    Node* next;

    Node(int value){
      data = value;
      next = NULL;
    }
  };

  Node* first = new Node(10);
  Node* second = new Node(20);
  Node* third = new Node(30);
  Node* fourth = new Node(40);

  first->next=second;


  second->next = third;
  third->next=fourth;

cout << first->data;
cout << first->next->data;
cout << first->next->next->data;
cout << first->next->next->next->data;

Node* temp = first;

int count=0;
int sum=0;
 int key;
 cin>>key;
bool found = false;
while(temp!=NULL){
  cout<<temp->data<<" ";
  count++;
  sum=sum+temp->data;
  if(temp->data==key){
    found = true;
    break;
  }
  temp=temp->next;
}
