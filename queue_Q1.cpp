#include<iostream>
using namespace std;



class Node{
     public:

     int data;
     Node* next;


     Node(int value){
        data = value;
        next = nullptr;

     }

};

class Queue{

    Node* front;
    Node* rear;
public: 

Queue(){

    front = nullptr;
    rear = nullptr;

}

void enqueue(int value){

Node* newNode = new Node(value);

if(rear == nullptr){

    front = rear = newNode;

}

else{

    rear -> next = newNode;
    rear = newNode;
}



}

void dequeue(){
 
    if(front == nullptr){
        cout << "Queue is empty " << endl;
return;
    }

Node* temp = front;
front = front -> next;
delete temp;

if(front == nullptr){

    rear = nullptr;
}

}


};