#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ---------------------
// Book Class Definition
// ---------------------
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

    // ---------------------
    // Main Menu Loop
    // ---------------------
    while (choice != 5)
    {
        // ---------------------
        // Display Menu Options
        // ---------------------
        cout << "\n==============================\n";
        cout << "Welcome to Library Management System\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book by ID\n";
        cout << "4. Delete Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // ---------------------
        // Add Book
        // ---------------------
        if (choice == 1)
        {
            Book newBook;
            cout << "Enter Book ID: ";
            cin >> newBook.bookId;
            cin.ignore();
            cout << "Enter Book Title: ";
            getline(cin, newBook.title);
            cout << "Enter Book Author: ";
            getline(cin, newBook.author);
            Library.push_back(newBook);
            cout << "Book added successfully!\n";
        }

        // ---------------------
        // Display All Books
        // ---------------------
        else if (choice == 2)
        {
            if (Library.empty())
            {
                cout << "No books in the library.\n";
            }
            else
            {
                cout << "\nList of Books:\n";
                for (int i = 0; i < Library.size(); i++)
                {
                    cout << "ID: " << Library[i].bookId
                         << ", Title: " << Library[i].title
                         << ", Author: " << Library[i].author << endl;
                }
            }
        }

        // ---------------------
        // Search Book by ID
        // ---------------------
        else if (choice == 3)
        {
            string ID;
            cout << "Enter Book ID to search: ";
            cin >> ID;
            bool found = false;
            for (int i = 0; i < Library.size(); i++)
            {
                if (Library[i].bookId == ID)
                {
                    cout << "Book Found!\n";
                    cout << "Title: " << Library[i].title
                         << ", Author: " << Library[i].author << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Book not found.\n";
            }
        }

        // ---------------------
        // Delete Book (Coming Soon)
        // ---------------------
        else if (choice == 4)
        {
            cout << "Delete feature coming soon!\n";
        }

        // ---------------------
        // Invalid Input Handling
        // ---------------------
        else if (choice != 5)
        {
            cout << "Invalid choice! Please try again.\n";
        }
    }

    // ---------------------
    // Program Exit
    // ---------------------
    cout << "Thank you for using the Library Management System!\n";
    return 0;
}
