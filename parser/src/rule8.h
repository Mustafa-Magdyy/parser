#ifndef RULE8_H_
#define RULE8_H_

#include "node.h"

// param_list
class rule8: public node {
private:
	//param - rule9
	node *obj1;
	//param_list' - rule8_
	node *obj2;
public:
	rule8(node *obj1, node *obj2);
	void print();
	virtual ~rule8();
};

#endif /* RULE8_H_ */

