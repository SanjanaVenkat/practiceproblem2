#include <iostream>
#include <cstring>
#include "node.h"

using namespace std;

Node::Node(Info* i) {
  next = NULL;
  info = i;
}

Node::~Node() {
  next = NULL;
}

void Node::setNext(Node* newnext) {
  next = newnext;
}

Node* Node::getNext() {
  return next;
}

Info* Node::getInfo() {
  return info;
}

Info::Info() {

}

Info::~Info() {

}

void Info::setInfo(char i[]) {
  strcpy(info, i);
}

char* Info::getInfo() {
  return info;
}
