#include <iostream>

using namespace std;

class Node {
    public :
        int value ;
        Node *next ;
};
class Linked {
    private:
        Node* head;
    public:
        Linked() {
            this->head = NULL;
        }
        void add(int valueLn){
            Node *block = new Node();
            block->value = valueLn ;
            block->next = NULL ;
            if(!(head)){
                head = block ; // head เก็บ address ของ block
            }
            else{
                if(block->value < head->value){//ต่อหัว
                    block->next = head ;
                    head = block ;
                }
                else{
                    Node* curr = head ;
                    Node* prev = NULL;
                    while(curr){
                        if(((prev))&&(prev->value <= valueLn)&&(curr->value >= valueLn)){
                            prev->next = block ; block->next = curr; 
                            break;}
                        prev = curr ;
                        curr = curr->next ;
                    }
                    if(prev->value < valueLn && !(curr)){
                        prev->next = block ;
                    }
                }
            }
        }

        void edit(int old_value , int new_value){
            Node *curr = head ;
            while (curr){
                if(curr->value == old_value){
                    curr->value = new_value;
                }
                curr = curr->next;
            }   
        }
        void del(int valueLn){
            Node *del = head ;
            Node *prev = NULL;
            while(del){ 
                if(del->value != valueLn){ //between node
                    if((del->value > valueLn)){
                        prev->next = del ;
                        break;      
                    }
                    prev = del ;
                }
                else {
                    if(del == head) { // Deleting head node
                        head = del->next;
                        break;
                    }
                }
                del = del->next;
            }
            if((!del)&&(prev->next->value == valueLn)){prev->next = NULL;}//end Node   
            delete del;
            del = prev->next; 
        }
};


int main(){
    Linked mylist;
    mylist.add(5);
    mylist.add(5);
    mylist.add(6);
    mylist.add(7);
    mylist.add(8);
    mylist.add(9);
    mylist.del(7);
  



}