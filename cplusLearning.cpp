#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <utility>
#include <vector>


using namespace std;

typedef struct Book
{
    string title;
    string author;
    int price;
} Book;







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







// Main
int main()
{
    printf("Let's get started!\n");
    cout << "do it constantly" << "\n";


    Book book1 = {"crime and sin", "dostoyevski", 3};
    cout << "book1 title : " << book1.title << "\n";


    pii pair1 = make_pair(3,3);
    changePii (pair1, 1);
    cout << pair1.first << "\n";
    cout << pair1.second << "\n";
    pii pair2 = make_pair(1,4);

    printComparePii(pair1, pair2); 

    vector <pii> arr;
    

}