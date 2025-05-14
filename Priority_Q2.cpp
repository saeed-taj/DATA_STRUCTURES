#include<iostream>
using namespace std;



class PNode{
    public:
    // int data;
     int order_number;
     int table_number;
     int items;
     int priority_level;
     PNode* next;

PNode( int order_num, int table_num, int item , int prior_level){

       order_number = order_num;
       table_number = table_num;
       items = item;
       priority_level = prior_level;   
       next = nullptr; 
    }

};

PNode* head = nullptr;

void add(int order_num, int table_num, int item , int prior_level ){ // enqueue

PNode* newNode = new PNode(order_num ,table_num , item , prior_level );

if(head == nullptr || head -> priority_level > prior_level){

    newNode -> next = head;
     head = newNode;
}

else {
   
    PNode* temp;
    temp = head;

while(temp -> next != 0 && temp -> next -> priority_level <= prior_level){
      
      temp = temp -> next;


    }

    newNode -> next = temp -> next;
    temp -> next = newNode;

}

}

void search(int order_num){

PNode* temp = head;

while(temp -> order_number != order_num ){
 
temp = temp -> next;

}    

cout << "order number is : " << temp -> order_number << endl;
cout << "table number is : " << temp -> table_number << endl;
cout << "item number is : " << temp -> items << endl;
cout << "priority level number is : " << temp -> priority_level << endl;

}

void remove(){

if(head == nullptr){

    cout << "QUEUE IS EMPTY" << endl;

    return;
}


PNode* temp = head;
head = head -> next;


delete temp;

cout << "First Node  has been Removed" << endl;
}


void display(){

    PNode* temp = head;

while(temp  != nullptr){

cout << "order number is : " << temp -> order_number << endl;
cout << "table number is : " << temp -> table_number << endl;
cout << "item number is : " << temp -> items << endl;
cout << "priority level number is : " << temp -> priority_level << endl;
cout << endl;
temp = temp -> next;
}

}


int main(){

//(O_N,T_N, I ,p_l)
add(1 , 1 , 2 , 1);
add(2 , 2 , 2 , 2);
add(3 , 4 , 2 , 3);
add(4 , 5 , 2 , 4);
add(5 , 7 , 2 , 5);
add(6 , 8 , 2 , 6);
add(7 , 9 , 2 , 7);


search(4);

remove();

display();





    return 0;
}