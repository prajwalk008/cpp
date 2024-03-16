#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        data=0;
        next=NULL;
    }
    Node(int x){
        data=x;
        next=NULL;
    }
};
class Linkedlist{
    Node* head=NULL;

    public:
    Linkedlist(){
        head=NULL;
    }
    void insert(int x){
        if(head==NULL){
            Node* newnode= new Node(x);
            head= newnode;
            newnode->next=NULL;
            printlist();
        } else{
            Node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            Node* newnode= new Node(x);
            temp->next=newnode;
            newnode->next=NULL;
            printlist();
        }
    }
    void printlist(){
        cout<<"Start -> ";
        Node* temp= head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"End."<<endl;
    }
    void reverse(){
        if(head==NULL){
            cout<<"List is empty!";
        } else if(head->next==NULL){
            cout<<"List reversed!"<<endl;
            printlist();
        } else{
            Node* current=head;
            Node* prev= NULL;
            Node* nextn=NULL;
            while(current!=NULL){
                nextn=current->next;
                current->next=prev;
                prev= current;
                current=nextn;
            }
            head=prev;
            printlist();
        }
    }
};
int main(){
    Linkedlist X;
    X.insert(1);
    X.insert(2);
    X.insert(3);
    X.insert(5);
    X.reverse();
}
