// Header guard
#ifndef __STACK_H__
#define __STACK_H__

#include <vector>

using namespace std;

class Stack {
  public:
    int Size();
    bool Push(int val);
    bool Pop(int &val);

    Stack();    

  private:
    std::vector<int> stackItems_;
    int curSize_;
};

#endif
