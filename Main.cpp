#include <iostream>
using namespace std;

struct node{
  int data;
  int dt;
  node* next;
};

node* head;
node* tail;
node* curr;
node* entry;
node* del;

void initial(){
  head = NULL;
  tail = NULL;
}

void input(int dt){
  entry = (node* )malloc(sizeof(node));
  entry -> data = dt;
  entry -> next = NULL;
  if (head == NULL){
    head = entry;
    tail = head;
  }else{
    tail -> next = entry;
    tail = entry;
  }
}

void update(int dt, int entry){
  if (head == NULL){
    cout << "List is empty" << endl;
    return;
  }
  curr = head;
  for (int i = 0;i < entry;i++){
    if (curr == NULL){
      cout << "Index out of range" << endl;
      return;
    }
    curr = curr -> next;
  }
  curr -> data = dt;
}

int main(int argc, char const *argv[])
{
  
  return 0;
}
