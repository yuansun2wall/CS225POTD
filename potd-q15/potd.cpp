#include "potd.h"
#include <iostream>

using namespace std;

string stringList(Node *head) {
    // your code here!

    if(head != NULL)
        cout << head->data_;


    if(head == NULL){
        return "Empty list";
    }else{
        string s;
        Node * p = head;
        while(p -> next_ != NULL){
            s += to_string(p->data_); 
            s += " -> ";
            p = p->next_;
        }
        s += to_string(p->data_);
        return s;
    }
}
