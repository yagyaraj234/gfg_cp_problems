//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    private:
    void insertnode(Node* &head,Node* &tail,int digit){
        Node* temp= new Node(digit);
        if(head==NULL){
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
    }
    Node* reverse(Node* head){
        Node*prev=NULL;
        Node *temp=head;
        Node *forward=NULL;
        
        while(temp!=NULL){
            forward=temp->next;
            temp->next=prev;
            prev=temp;
            temp=forward;
        }
        return prev;
        
    }
    
    Node* add(Node* first,Node* second){
        Node* curr1=first;
        Node* curr2=second;
        
        Node*ansHead=NULL;
        Node*ansTail=NULL;
        
        int carry=0;
        while(curr1!=NULL || curr2!=NULL || carry!=0){
            int val1=0,val2=0;
            if(curr1!=NULL) val1=curr1->data;
            if(curr2!=NULL) val2=curr2->data;
            int sum=val1+val2+carry;
            
            int digit=sum%10;
            insertnode(ansHead,ansTail,digit);
            carry=sum/10;
            if(curr1!=NULL){
                curr1=curr1->next;
            }
            if(curr2!=NULL){
                curr2=curr2->next;
            }
            
        }
        return ansHead;
        
    }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
       first=reverse(first);
       second=reverse(second);
       
       Node* ans = add(first,second);
       
        ans=reverse(ans);
       
        
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends