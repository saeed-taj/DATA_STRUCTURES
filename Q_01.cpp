#include<iostream>

using namespace std;


int main(){

char name[50], character ,updated_char ;

cout <<"Enter the String for the Array or Enter a Word : " << endl;
cin.getline( name , 50);

cout << "Enter a character to find in the string : " << endl;
cin >> character ;

cout << "Enter a char to replace with : " << endl;
cin >> updated_char;


char *pointer = name;

while (*pointer !=  '\0' ){
     
     if (*pointer == character){
          *pointer = updated_char;
                    
     }
         pointer++;
}

pointer = name;

while (*pointer != '\0' ){
       
       if (*pointer >= 'a'  && *pointer <= 'z'){

        *pointer = *pointer - 32;  // becuase there is exactly difference of 32 between a = 97 and A = 65

       }
     pointer++;

}


cout << "The updated Array or String is : " << name << endl;



   return 0;
}
