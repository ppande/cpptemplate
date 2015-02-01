#include "stack.h"

// Implementation of class members of Stack come here

int Stack::Size() {
  return curSize_;
}


bool Stack::Pop(int &val) {
  if (stackItems_.empty()) return false;
  val = stackItems_.back();
  stackItems_.pop_back();
  --curSize_;
  return true;
}


bool Stack::Push(int val) {
  stackItems_.push_back(val);
  curSize_++;
  return true;
}

// Constructor
Stack::Stack()
  :curSize_(0)
{
}
