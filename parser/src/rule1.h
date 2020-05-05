#ifndef RULE1_H_
#define RULE1_H_

#include "node.h"

// program
class rule1 : public node{
private:
    // decl_list - rule2
    node *obj1;
public:
    rule1(node *obj1);
    void print();
    virtual ~rule1();
};

#endif /* RULE1_H_ */
