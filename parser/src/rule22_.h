#ifndef RULE22__H_
#define RULE22__H_

#include "node.h"
#include "Token.h"

class rule22_ : public node
{
private:
	Token *LE_or_LT_or_GE_or_GT;
	// expr3 - rule22
	node *obj1;
public:
	rule22_();
	rule22_(Token *LE_or_LT_or_GE_or_GT, node *obj1);
	void print();
	virtual ~rule22_();
};

#endif /* RULE22__H_ */
