#include<iostream>
using namespace std;


class Node{
    public:

    int* Array;
    int size;

   Node(int siz ){

    size = siz;
    Array = new int[size]; 

   }


void add(){
   
   cout << "Enter" << size <<" elements for the Array : " << endl;


   for(int i = 0 ; i < size ; i++){

   cin >> Array[i];

   }


}

  
void sorting(){
 
 for (int i = 0 ; i < size - 1 ; i++){
    for(int j = 0 ; j < size - i - 1 ; j++){
            
        int temp;

        if(Array[j] > Array[j + 1]){
        
            temp = Array[j + 1];
           
            Array[j + 1] = Array[j];
            Array[j] = temp;
        }

    }
 }


  }



int searching(int id){


int low , high = size - 1;

while(low <= high){
    int mid = (low + high) / 2;
    
if(Array[mid] == id ){

return mid; // found the id 

}
else if( Array[mid] < id){
      
     low = mid + 1;
    
}
else {

    high = mid - 1;
    
}


}


return -1; // not found 

  }

void display(){

for (int i = 0 ; i < size ; i++){

    cout << Array[i] <<" "; 
}
}

};

int main(){

int size;
cout << " Enter the size for Array : " << endl;
cin >> size;


Node obj(size);

cout << " you are going to add : " << endl;
obj.add();
obj.display();

cout << "Now you are sorting... " << endl;
obj.sorting();
obj.display();

cout << "Now you are searching for element : " << endl;
int found = obj.searching(54);
cout << "Found the ID : " << found << endl;


 



    return 0;
}

