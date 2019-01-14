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

void printLargest(Node* start) {
  Node* current = start;
  Node* largest = start;
  while (current != NULL) {
    Info* i = current->getInfo();
    Info* in = largest->getInfo();
    //cout << i->getInfo() << " " << strlen(i->getInfo())<< endl;
    if (strlen(i->getInfo()) >= strlen(in->getInfo())) {
      largest = current;
    }
    current = current->getNext();
  }
  Info* info = largest->getInfo();
  cout << "String with the most info (the longest string): ";
  cout << info->getInfo() << " " << strlen(info->getInfo()) << endl;
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
  printLargest(start);

  return 0;
}
