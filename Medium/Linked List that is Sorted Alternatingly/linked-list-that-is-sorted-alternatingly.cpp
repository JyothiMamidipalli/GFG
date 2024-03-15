//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
/* Function to print linked list */


void append(struct Node** headRef, struct Node** tailRef, int newData)
{
	struct Node* new_node = new Node(newData);
	struct Node *last = *headRef;
	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    *tailRef = *headRef;
	    return;
	}
	
	(*tailRef) -> next = new_node;
	*tailRef = (*tailRef) -> next;
}

// A utility function to print a linked list
void printList(Node *head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}



// } Driver Code Ends

/*
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
*/

class Solution
{
    public:
    // your task is to complete this function
    void sort(Node **head)
    {
         // Code here
        Node** temp=head;
        vector<int>jyo,raj;
        int c=0;
        while((*temp)!=NULL)
        {
            if(c%2==0) jyo.push_back((*temp)->data);
            else raj.push_back((*temp)->data);
            (*temp)=(*temp)->next;
            c++;
        }
        vector<int>rj;
        int a=jyo.size(),b=raj.size();
        int i=0,j=b-1;
        while(i<a and j>=0)
        {
            if(jyo[i]<raj[j])
            {
                rj.push_back(jyo[i++]);
            }
            else
            {
                rj.push_back(raj[j--]);
            }
        }
        while(i<a) rj.push_back(jyo[i++]);
        while(j>=0) rj.push_back(raj[j--]);
        for(auto it:rj)
        {
            cout<<it<<" ";
        }
        //return rj;
         
    }
};

//{ Driver Code Starts.
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
	    struct Node* head = NULL;
	    struct Node* tail = NULL;
	    int n, k;
	    cin>>n;
	    for(int i=0; i<n ;i++){
	        cin>>k;
	        append(&head, &tail, k);
	    }
	    Solution ob;
	    ob.sort(&head);
	    printList(head);
	}
	return 0;
}

// } Driver Code Ends