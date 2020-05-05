#ifndef RULE24__H_
#define RULE24__H_

#include "node.h"
#include "Token.h"

class rule24_ : public node
{
private:
	Token *MUL_or_DIV_or_MOD;
	// expr5 - rule24
	node *obj1;
public:
	rule24_();
	rule24_(Token *mul_or_div_or_mod, node *obj1);
	void print();
	virtual ~rule24_();
};

#endif /* RULE24__H_ */
