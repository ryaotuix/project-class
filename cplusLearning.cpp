#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <utility>
#include <vector>


using namespace std;


// Structure
typedef struct Book
{
    string title;
    string author;
    int price;
} Book;

void changePrice(Book * book, int newPrice)
{
    book->price = newPrice;
}


// Union
typedef union ShareData
{
    unsigned char a;
    unsigned short b;
    unsigned int c;
} ShareData;


// Enumerated type Enum
enum Grades 
{
    MATH = 80, 
    CS = 90, 
    MUS = 100, 
    PROJ = 0
};




// pii 
typedef pair<int,int> pii;

bool comparePii (pii a, pii b)
{
    if (a.first == b.first)
        return a.second > b.second;
    
    return a.first > b.first;

    //return true if a is bigger
}

void changePii (pii& a, int val)
{
    a.first = val;
}

void printComparePii(pii a, pii b)
{
    if (comparePii(a, b))
        cout << "a is bigger than b\n";
    else
        cout << "a is smaller than b\n";
}


// Class





// Main
int main()
{
    printf("Let's get started!\n");
    cout << "do it constantly" << "\n";
    cout << "-----------------------------------\n";

    // structure
    cout << "Structure\n"; 
    Book book1 = {"crime and sin", "dostoyevski", 3};
    cout << "book1 title : " << book1.title << "\n";
    cout << "book1 price : " << book1.price << "\n";
    changePrice(&book1, 10);
    cout << "New book1 price : " << book1.price << "\n";
    cout << "-----------------------------------\n";


    // Union
    cout << "Union\n";
    ShareData var;
    var.c = 0x12345678; // c is integer
    cout << hex;
    cout << var.a << endl;
    cout << var.b << endl;
    cout << var.c << endl;
    cout << "-----------------------------------\n";



    // Enum
    cout << "Enum\n";
    enum Grades obj;
    obj = MATH;
    cout << "The grade for math class : " << obj << "\n";
    cout << "-----------------------------------\n";

    
    // Pairs
    cout << "Pairs\n";
    pii pair1 = make_pair(3,3);
    changePii (pair1, 1);
    cout << pair1.first << "\n";
    cout << pair1.second << "\n";
    pii pair2 = make_pair(1,4);
    printComparePii(pair1, pair2); 
    cout << "-----------------------------------\n";



    // Vectors    

}