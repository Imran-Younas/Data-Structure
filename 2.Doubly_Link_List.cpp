#include <iostream>
using namespace std;
struct Node{
    int info;
    Node *next, *pre;
};
class DLL{
    public:
    Node *head, *temp1;
    
    
    
    DLL(){
        head = temp1 = NULL;
        
        
        
        
    }
    void insert(){
        Node *box = new Node;
        cout << "Enter Data: ";
        cin >> box -> info;
        box -> next = NULL;
        box -> pre = NULL;
        
        if (head == NULL){
            head = box;
            temp1 = box;
        }
        
        else{
            temp1 -> next = box;
            temp1 -> next -> pre = temp1;
            temp1 = box;
        }
        
        
    }
    
   
    void print(){
        temp1 = head;
        
        while (temp1 != NULL){
            
        cout << temp1 -> info <<  " ";
        
        
        temp1 = temp1 -> next;
            
        }
        cout << endl;

        
    }
    
    
    
    
     void search(){
        int key = 0;
        temp1 = head;
        cout << "Enter data for search: ";
        cin >> key;
        
        while(temp1 != NULL){
            
            if(temp1 -> info == key){
                cout << "search result: " << key << endl;
            }
            
            temp1 = temp1 -> next;
            
           
        }
    }
    
    
    
    
    
    void delet(){
        int key = 0;
        Node *temp2;
        temp1 = head;
        
        cout << "Enter data for delete: ";
        cin >> key;
        
        
        while(temp1 != NULL){
            
            if(temp1 -> info == key){
                
             if(temp1 -> next == NULL){
                 
                 temp2 = temp1;
                 temp1 = temp1 -> pre;
                 temp1 -> next = NULL;
                 
                 delete temp2;
             }
             
             else if(temp1 -> pre == NULL){
                 temp2 = temp1;
                 temp1 = temp1 -> next;
                 temp1 -> pre = NULL;
                 head = temp1;
                 
                 delete temp2;
             }
             
             else{
                temp2 = temp1;
                temp1 = temp1 -> pre;
                temp1 -> next = temp2 -> next;
                temp1 = temp1 -> next;
                temp1 -> pre = temp2 -> pre;
                
                delete temp2;
             }
                
            }
            
            temp1 = temp1 -> next;
            
        }
    }
    
    
    
    
    void adress(){
        temp1 = head;
        cout << endl;
        
        while (temp1 != NULL){
            
        cout << temp1 -> next <<  " ";
        
        
        temp1 = temp1 -> next;
            
        }
        cout << endl;

        
    }
    
   
};

int main(){
    DLL d;
    d.insert();
    d.insert();
    d.insert();
    d.insert();
    d.insert();
    d.insert();
    d.insert();
    d.insert();
    d.print();
    d.adress();
    
    d.delet();
    d.print();
    
   // d.search();
    
    // d.delet();
    // d.print();
}
