#ifndef RULE23__H_
#define RULE23__H_

#include "node.h"
#include "Token.h"

// expr4_
class rule23_ : public node
{
private:
	Token *PLUS_or_MINUS;
	// expr4 - rule23
	node *obj1;
public:
	rule23_();
	rule23_(Token *plus_or_minus, node *obj1);
	void print();
	virtual ~rule23_();
};

#endif /* RULE23__H_ */
