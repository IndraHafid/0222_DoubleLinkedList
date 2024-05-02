// 0222_LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct Node
{
    int noMhs;
    string name;
    Node* next;
    Node* prev;

};

Node* START = NULL;

void addNode() {
    Node* newNode = new Node();
    cout << "\nEnter the roll number of the student: ";
    cin >> newNode->noMhs;
    cout << "\nEnter the name of the student: ";
    cin >> newNode->name;
}
   

int main()
{
    std::cout << "Hello World!\n";
}


