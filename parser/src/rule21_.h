#ifndef RULE21__H_
#define RULE21__H_

#include "node.h"
#include "Token.h"

class rule21_ : public node
{
private:
	Token *NE_or_EQ;
	// expr2 - rule21
	node *obj1;
public:
	rule21_();
	rule21_(Token *NE_or_EQ, node *obj1);
	void print();
	virtual ~rule21_();
};

#endif /* RULE21__H_ */
