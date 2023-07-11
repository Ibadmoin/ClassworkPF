// Create a structure called library to holds  accession number, title of the book, author name, price of the book, and flag indicating weather the book is issued or not. Write a mmenu-driven program that impelements the working of a library. The menu options should be:
//  1. Add book information
//  2. Display book information
//  3. List all books of given author
//  4. List title of the specified book
//  5. List the count of the books in the library
//  6. List the books in the order of accession number
//  6. Exit
//

#include <stdio.h>
#include <string.h>
#define max_books 10

struct library
{
    int accessionNo;
    char title[80];
    char auhtor[50];
    float price;
    int issued;
};

void clearInputBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

void addBook(struct library books[], int *count)
{
    if (*count >= max_books)
    {
        printf("The library is full. cannot add more books.\n");
        return;
    }

    printf("Enter book details:\n");
    printf("Accession Number: ");
    scanf("%d", &books[*count].accessionNo);
    printf("Title: ");
    scanf(" %[^\n]s", books[*count].title);
    printf("Author: ");
    scanf(" %[^\n]s", books[*count].auhtor);
    printf("Price: ");
    scanf("%f", &books[*count].price);
    printf("Issued (1 for yes, 0 for no): ");
    scanf("%d", &books[*count].issued);

    (*count)++;
    printf("Book added successfully!\n");
}

void displayBook(struct library books[], int count)
{
    if (count == 0)
    {
        printf("No books in library.\n");
        return;
    }
    printf("Books in the library:\n");
    for (int i = 0; i < count; i++)
    {
        printf("Books %d\n", i + 1);
        printf("Accession Number: %d\n", books[i].accessionNo);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].auhtor);
        printf("Price: %.2f\n", books[i].price);
        printf("Issued: %s\n", books[i].issued ? "yes" : "No");
        printf("------------------------------\n");
    }
}

void listBooksByAuthor(struct library books[], int count)
{
    if (count == 0)
    {
        printf("No books in the library.\n");
        return;
    }

    char author[50];
    printf("Enter the author's name: ");
    scanf(" %[^\n]s", author);
    printf("Books by %s\n", author);
    int found = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp(books[i].auhtor, author) == 0)
        {
            printf("%s, issued: %s\n", books[i].title, books[i].issued ? "Yes" : "No");
            found = 1;
        }
    }

    if (!found)
    {
        printf("No books found by %s. \n", author);
    }
}

void listTitleByAccessionNo(struct library books[], int count)
{
    if (count == 0)
    {
        printf("No books in the library.\n");
        return;
    }
    int accessionNo;
    printf("Enter the accession number: ");
    scanf("%d", &accessionNo);

    int found = 0;
    for (int i = 0; i < count; i++)
    {
        if (books[i].accessionNo == accessionNo)
        {
            printf("Title: %s\n", books[i].title);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("No books found with the accession number %d.\n", accessionNo);
}


void countBooks(struct library books[],int count) {
    printf("The number of books in the library: %d\n",count);
    
}

void  listBooksByAccesionNo(struct library books[],int count){
    if (count == 0)
    {
        printf("No books in the library.\n");
        return;
    }
    // sort by accesion no using bubble sort algorithm
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - i -1; j++)
        {
            if (books[j].accessionNo > books[j+1].accessionNo)
            {
                struct library temp = books[j];
                books[j] = books[j+1];
                books[j+1]=temp;
            }
            
        }
        
    }
    
    printf("Books in the library (in the order of accession number: \n)");
    for (int i = 0; i < count; i++)
    {
        printf("Book %d\n", i+1);
        printf("Accession Number: %d\n",books[i].accessionNo);
        printf("Title: %s\n",books[i].title);
        printf("Author: %s\n",books[i].auhtor);
        printf("Price: %.2f\n",books[i].price);
        printf("Issued: %s\n", books[i].issued ? "yes":"No");
        printf("\n------------------------------------\n");
    }
    
}





int main()
{
    struct library books[max_books];
    int count = 0;
    int choice;

    do
    {
        printf("\t\t*** Menu: ***\n");
        printf("1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. List all books of a given author\n");
        printf("4. List title of a specified book\n");
        printf("5. List the count of books in the library\n");
        printf("6. List the books in the order of accession number\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1)
        {
            clearInputBuffer();
            printf("Invalid Choice. Please enter a number.\n");
            continue;
        }
        clearInputBuffer();

        switch (choice)
        {
        case 1:
            addBook(books, &count);
            break;
        case 2:
            displayBook(books, count);
            break;
        case 3:
            listBooksByAuthor(books, count);
            break;
        case 4:
            listTitleByAccessionNo(books, count);
            break;
        case 5:
            countBooks(books, count);
            break;
        case 6:
            listBooksByAccesionNo(books, count);
            break;
        case 7:
            printf("Exixting the program. Goodbye!\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
        }

        printf("\n");
    } while (choice != 7);

    return 0;
}