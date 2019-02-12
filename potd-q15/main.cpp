#include "potd.h"
#include <iostream>
using namespace std;

int main() {
  // Test 1: An empty list
  Node * head = NULL;
  cout << stringList(head) << endl;

  // Test 2: A list with exactly one node
  Node * n1 = new Node;
  n1->data_ = 1;
  n1->next_ = NULL;
  cout << stringList(n1) << endl;
  // Test 3: A list with more than one node
  Node * n2 = new Node;
  Node * n3 = new Node;
  n2->data_ = 1;
  n2->next_ = n3;
  n3->data_ = 2;
  n3->next_ = NULL;

  cout << stringList(n2) << endl;
  return 0;
}
