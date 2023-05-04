//{ Driver Code Starts
#include<iostream>

#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(struct Node* head1, struct Node* head2);

Node* inputList(int size)
{
    if(size==0) return NULL;
    
    int val;
    cin>> val;
    
    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

/* Driver program to test above function*/
int main()
{
    int T,n1,n2,n3;

    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        
        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);
        
        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}


// } Driver Code Ends


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    // Node*c1=head1,*c2=head2;
    // while(1){
    //     if(c1==c2)return c1->data;
    //     c1=c1->next;
    //     c2=c2->next;
    //     if(c1==NULL&&c2==NULL)return -1;
    //     if(c1==NULL)c1=head2;
    //     if(c2==NULL)c2=head1;
    // }
    // return -1;
    
    Node* first=head1;
    Node* second=head2;
    int c1=0,c2=0;
    
    while(first!=NULL){
        c1++;
        first=first->next;
    }
    
    while(second!=NULL){
        c2++;
        second=second->next;
    }
    first=head1;
    second=head2;
    
    int diff=abs(c1-c2);
    
    if(c1>c2){
        
        for(int i=0;i<diff;i++){
            first=first->next;
        }
    }
    else if(c2>c1){
        for(int i=0;i<diff;i++){
            second=second->next;
        }
    }
    while(first!=second){
        second=second->next;
        first=first->next;
    }
    
    if(first) return first->data;
    return -1;
}
  

