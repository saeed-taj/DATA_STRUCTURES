#include<iostream>
using namespace std;


const int MAX_BOOKS = 100;


class store{
   public:
    string title;
    string author;
    string category;
    int unique_id;
    int publication_year;

    /*store(string T , string auth , string categ , int uniq , int pub){

        title = T;
        author = auth;
        category = categ;
        unique_id = uniq;
        publication_year = pub;
    }
*/

void add_books(){
   
            cout << "Enter the title of book: " << endl;
            cin >> title;
            
            cout << "Enter the author of the book: " << endl;
            cin >> author;

            cout << "Enter the category of the book : " << endl;
            cin >> category;

            cout << " Enter the unique_id of the book : " << endl;
            cin >> unique_id;

            cout << " Enter the publication year of the book : " << endl;
            cin >> publication_year;

  }

void sorting(store books[] , int count){

for ( int i = 0 ; i < count - 1 ; i++){

   for ( int j = 0 ; j < count - i - 1 ; j++){

    if(books[j].title > books[j + 1].title){

            string temp = books[j].title;
            books[j].title = books[j + 1].title;
            books[j + 1 ].title = temp;
            
        }



   }



}

}
  




void display_books(){

  

        cout << " Books found with the unique id : " << endl;
        cout << "Title : " << title << endl;
        cout << " Author : " << author << endl;
        cout << " Category : " << category << endl;
        cout << " Unique ID : " << unique_id << endl;
        cout << " Publication Year : " << publication_year << endl;
    

}


};


int search_book(int unique , store books[] , int count_){
   
   for (int i = 0 ; i < count_ ; i++){

     if (books[i].unique_id == unique){

        books[i].display_books();
    }

   }
}


int main(){

store books[MAX_BOOKS];
int count = 0;


int choice;
string title;
string author;
string category;
int unique_id;
int publication_year;
int unique_id_search;

do {

    cout << "Enter 1 to ADD a book" << endl;
    cout << " Enter 2 to SEARCH a book" << endl;
    cout << " Enter 0 to EXIT" << endl;

    cin >> choice; 

    switch(choice){
            
        case 1:
            
             books[count++].add_books();
            
            break;

            case 2:
            cout << "Enter the UNIQUE ID of the book to Search : " << endl;
            cin >> unique_id_search; 
            
            search_book(unique_id_search , books , count);

             break;

             case 0:
             cout << " Exiting the Program..." << endl;
             break;

case 3:
    
sorting(books , count);
    
    break;  
             
    
    default:
                cout << "Invalid choice. Please try again." << endl;
                
        }
}   
while( exit != 0 );








    return 0;
}