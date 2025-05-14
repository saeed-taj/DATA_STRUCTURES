#include<iostream>
using namespace std;


const int MAX_SIZE = 10;

class ArrayStack{
   private:
      int top;
      int arr[MAX_SIZE];
   
   public:
       ArrayStack(){

        top = -1;
       }
void push(int value){

    if (top >= MAX_SIZE - 1){

cout << " stack over flow"  << endl;
return;

    }

arr[++top] = value;

}

void display() {
    if (top < 0) {
        cout << "Stack is empty" << endl;
        return;
    }
    
    cout << "Stack (top to bottom): [";
    for (int i = top; i >= 0; i--) {
        
        cout << arr[i];
        
        if (i != 0) cout << ", ";
    }
    
    cout << "]" << endl;
}


/*void Display(){

    cout << "Stack: [";
    for (int i = 0 ; i <= MAX_SIZE; i++){

        cout << arr[i];

        cout << " , ";
    }
    
}

*/

};


int main(){

    ArrayStack obj;


    for (int i = 10; i <= 100; i+=10){
       
       
        obj.push(i);
    }

// obj.Display();
obj.display();
 
return 0;
}