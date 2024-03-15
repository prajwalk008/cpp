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
class LinkedList{
    Node* head;
    public:
    LinkedList(){
        head=NULL;
    } 
    void underflow(){
        cout<<"List is empty!"<<endl;
        return;
    }
    void insertNode(int x){ //Inserts at end.
        if(head==NULL){
            Node* newNode= new Node(x);
            head= newNode;

        } else{
            Node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            Node* newnode= new Node(x);
            temp->next= newnode;
            newnode->next= NULL;
            
        }
        cout<<x<< " Inserted succesfully!"<<endl;
    } 
    void insertAfter(int y, int x){// y is the data after which x would be inserted;
        if(head==NULL){
            cout<<"No node with "<<y<<" element found!"<<endl;
            return;
        } else{
            Node* temp=head;
            bool flag=false;
            while(temp->next!=NULL){
                if(temp->data!=y){
                    temp=temp->next;
                } else{
                    flag=true;
                    break;
                }
            }
            if(flag){
                Node* newnode= new Node(x);
                newnode->next= temp->next;
                temp->next= newnode;
                cout<<x<<" inserted after "<<y<<endl;
            } else{
                cout<<"Not inserted as "<<y<<" was not found!"<<endl;
            }
        }
    } 
    void insertBefore(int y, int x){
        if(head==NULL){
            cout<<y<<" not found"<<endl;
        }
        else{
            Node* temp=head;
            Node* pretemp= temp;
            bool flag= false;
            while(temp->next!=NULL){
                if(temp->data!=y){
                    pretemp=temp;
                    temp=temp->next;
                } else{
                    flag=true;
                    break;
                }
                if(flag){
                    Node* newnode= new Node(x);
                    pretemp->next= newnode;
                    newnode->next= temp;
                    cout<<x<<" inserted Before "<<y<<endl;
                } else{
                    cout<<"No node of "<< y <<" found!"<<endl;
                }
            }
        }
    }
    void insertAtStart(int x){
        if(head==NULL){
            Node* newnode= new Node(x);
            head= newnode;
            newnode->next = NULL;
            cout<<x<<" inserted at start!"<<endl;
        } else{
            Node* newnode= new Node(x);
            newnode->next= head->next;
            head= newnode;
            cout<<x<<" inserted at start!"<<endl;
        }
    } 
    void deleteNode(){ // deletes last node!
        if(head==NULL){
            cout<<"List already empty!"<<endl;
        } else{
            Node* temp=head;
            Node* pretemp= temp;
            while(temp->next!= NULL){
                pretemp=temp;
                temp= temp->next;
            }
            pretemp->next=NULL;
            cout<<"Last node deleted!"<<endl;
            delete temp;
        }
    } 
    void deleteAfter(int y){
        if(head==NULL){
            cout<<"List already empty!"<<endl;
        } else{
            Node* temp=head;
            bool flag= false;
            while(temp->next!=NULL){
                if(temp->data!=y){
                    temp=temp->next;
                } else{
                    flag=true;
                    break;
                }
            } 
            if(!flag){
                cout<<"No node with "<<y<<" found!"<<endl;
                return;
            } else if(flag && temp->next==NULL){
                cout<<y<<" is already the last element!"<<endl;
            } else if(flag && temp->next->next==NULL){
                deleteNode();
            } else if(flag){
                Node* pretemp=temp;
                temp=temp->next;
                pretemp->next= temp->next;
                delete temp;
                cout<<"Node after "<<y<<" deleted!"<<endl;
            }
        }
    } 
    void deleteBefore(int y){
        if(head==NULL){
            underflow();
            return;
        } else{
            Node* temp=head;
            Node* pretemp=head;
            bool flag= false;
            while(temp->next->next!=NULL){
                if(temp->next->data!=y){
                    pretemp=temp;
                    temp=temp->next;
                } else{
                    flag= true;
                    break;
                }
            }
            if(temp->next->data==y){
                flag=true;
                temp=temp->next;
            }
            if(!flag){
                cout<<"No node with "<<y <<" element found!"<<endl;
            } else if(flag && temp->next==NULL){
                pretemp->next=temp;
                cout<<"Element before "<<y<< " deleted successfully!"<<endl;
            } else if(flag && temp==head){
                cout<<"Can't delete as "<< y <<" is the first element"<<endl;
            } else if(flag && temp==head->next){
                deleteAtStart();
                return;
            } else{
                pretemp->next=temp->next;
                delete temp;
                cout<<"Node before "<<y<< " deleted succesfully!"<<endl;
            }

        }
    }
    void deleteEle(int x){
        if(head==NULL){
            underflow();
            return;
        } else{
            Node* temp= head;
            Node* pretemp=temp;
            bool flag=false;
            while(temp->next!=NULL){
                if(temp->data!=x){
                    pretemp=temp;
                    temp=temp->next;
                } else{
                    flag= true;
                    break;
                }
            }
            if(flag){
                pretemp->next=temp->next;
                delete temp;
            } else{
                cout<<"No node with "<< x<<" as an element!"<<endl;
            }
        }
    }
    void deleteAtStart(){
        Node* temp=head;
        head= temp->next;
        delete temp;
        cout<<"First node deleted!"<< endl;
    } 
    void printList(){
        if(head==NULL){
            cout<<"Empty list!"<<endl;
            return;
        }
        cout<<"Start -> ";
        Node* temp= head;
        while(temp!=NULL){
            cout<< temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<" End."<<endl;
    }
};

int main(){
    LinkedList X;
    X.insertNode(6);
    X.printList();
    X.insertNode(7);
    X.printList();
    X.insertNode(8);
    X.printList();
    X.insertAfter(6,9);
    X.printList();
    X.insertAtStart(5);
    X.printList();
    X.insertBefore(6,10);
    X.printList();
    X.insertAfter(8,11);
    X.printList();
    X.insertBefore(5,4);
    X.printList();
    X.insertAfter(12,13);
    X.printList();
    X.insertBefore(14,12);
    X.printList();
    
}
