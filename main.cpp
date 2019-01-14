#include <iostream>
#include <cstring>
#include <iomanip>
#include "node.h"

using namespace std;

Node* addInfo(Node* start) {
  char i[1000];
  Node* current = start;
  Node* first = start;
  Info* in = new Info();
  cout << "Enter info" << endl;
  cin >> i;
  in->setInfo(i);
  if (current == NULL) {
    current = new Node(in);
    first = current;
  }
  else {
    while (current->getNext() != NULL) {
      current = current->getNext();
    }
    Node* n = new Node(in);
    current->setNext(n);
  }
  return first;
}

void printStudents(Node* start) {
  Node* current = start;
  Node* next = current->getNext();

  
}


int main() {
  Node* start = NULL;
  char response[10];
  char y[] = "y";
  char n[] = "n";
  while (strcmp(n, response) != 0) {
    start = addInfo(start);
    cout << "y/n" << endl;
    cin >> response;
  }
}
