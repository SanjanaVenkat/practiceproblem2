#include <iostream>
#include <cstring>

using namespace std;
/*
class Node {
 pubic:
  Node(Info* i);
  ~Node();
  Node* getNext();
  Info* getInfo();
  void setNext(Node* newnext);
 private:
  Node* next;
  Info* info;
};
*/

class Info {
 public:
  Info();
  ~Info();
  void setInfo(char i[]);
  char* getInfo();
 private:
  char info[1000];
};


class Node {
 public:
  Node(Info* i);
  ~Node();
  Node* getNext();
  Info* getInfo();
  void setNext(Node* newnext);
 private:
  Node* next;
  Info* info;
};

