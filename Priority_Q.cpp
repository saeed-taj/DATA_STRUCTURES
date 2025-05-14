#include<iostream>
using namespace std;

class PNode{
    public:
    int data;
    int priority;
    PNode* Next;

    PNode(int val , int prio){

        data = val;
        priority = prio;
        Next = nullptr;
    }
};
class PriorityQueue{
    public:
    PNode* head;

    PriorityQueue(){
        head = nullptr;
    }
void Enqueue(int value , int prior){
    
    PNode* newNode = new PNode(value , prior );

 if(head == nullptr || head -> priority > prior){
    newNode -> Next = head;
    head = newNode;
 }



else{
    PNode* temp;
    temp = head;

    while(temp -> Next != nullptr && temp -> Next -> priority <= prior ){

    temp = temp -> Next;

}

newNode -> Next = temp -> Next;
temp -> Next = newNode;
    
}
}
};

int main(){


















    return 0;
}