#ifndef RULE28__H_
#define RULE28__H_

#include "node.h"
#include "Token.h"

// arg_list_
class rule28_ : public node
{
private:
	Token *COMMA;
	// arg_list - rule28
	node *obj1;
public:
	rule28_();
	rule28_(Token *comma, node *obj1);
	void print();
	virtual ~rule28_();
};

#endif /* RULE28__H_ */
