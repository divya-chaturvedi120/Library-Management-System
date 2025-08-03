#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book
{
public:
    string bookId;
    string title;
    string author;
};
int main()
{
    vector<Book> Library;
    int choice = 0;
    while (choice != 5)
    {

        cout << "Welcome to Library Management System" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Display Books" << endl;
        cout << "3. Search Book by ID" << endl;
        cout << "4. Delete Book" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice :" << endl;
        cin >> choice;

        if (choice == 1)
        {
            Book newBook;
            cout << " Enter Book id" << endl;
            cin >> newBook.bookId;
            cin.ignore();
            cout << "Enter book title " << endl;
            cin >> newBook.title;
            cin.ignore();
            cout << "Enter book author name" << endl;
            cin >> newBook.author;
            cin.ignore();
            Library.push_back(newBook);
            cout << "Book added successfully" << endl;
        }
        else if (choice == 2)
        {
            if (Library.empty())
            {
                cout << "No books in the library." << endl;
            }

            else
            {
                cout << "List of Books \n";
                for (int i = 0; i < Library.size(); i++)
                {
                    cout << "ID: " << Library[i].bookId << ", Title: " << Library[i].title << ", Author: " << Library[i].author << endl;
                }
            }
        }
    }
    return 0;
}