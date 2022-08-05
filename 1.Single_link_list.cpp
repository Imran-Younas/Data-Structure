#include <iostream>
using namespace std;
struct node{
    int info;
    node *next;
};


class list{
    public:
    
    node *head, *temp;
    
    list(){
        head = temp = NULL;
    }
    
    void insert(){
        
        node *box = new node;
        
        cout << "Enter value: ";
        cin >> box -> info;
        box -> next = NULL;
        
        if(head == NULL){
            
            head = box;
            temp = box;
        }
        
        else{
            temp -> next = box;
            temp = box;
        }
        
        
    }
    
    
    void print(){
        temp = head;
        cout << "List" << endl;
        while(temp != NULL){
            cout << temp -> info << " ";
            temp = temp -> next;
        }
       cout << endl;
    }
    
    
    void search(){
        int key = 0;
        temp = head;
        
        cout << "Enter number which you want to search: ";
        cin >> key;
        
        while(temp != NULL){
            
            if(key == temp -> info){
                cout  << "Number found: " << temp -> info << endl;
                
                break;
                
            }
            temp = temp -> next;
            
            
        }
        
    }
    
    
    void mid_insertion(){
        
        int key = 0;
        temp = head;
        
        cout << "Enter number after which you want insert: ";
        cin >> key;
        
        
        while(temp != NULL){
            
            if(key == temp -> info){
            node *box = new node;
            cout << "Enter value: ";
            cin >> box -> info;
            box -> next = temp -> next;
            temp -> next = box;
                
                break;
                
            }
            temp = temp -> next;
            
            
        }
        
    }
    
    
    void Delete(){
        node *temp1 = NULL;
        int key;
        temp = head;
        cout << "Enter number which you want to delete: ";
        cin >> key;
        
        while(temp -> next != NULL){
            
            if (temp -> next -> info == key){
            temp1 = temp -> next;
            temp -> next = temp -> next -> next;
            
            delete temp1;
            
        }
        
        temp = temp -> next;
        
        }
        
    }
    
    
    
};


int main(){
    list l;
    l.insert();
    l.insert();
    l.insert();
    l.insert();
    l.print();
 
    
    // l.mid_insertion();
    // l.print();
    // l.search();
    
    l.Delete();
    l.print();
}
