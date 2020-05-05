#ifndef RULE8__H_
#define RULE8__H_

#include "node.h"
#include "Token.h"

// param_list_
class rule8_  : public node
{
private:
	Token *COMMA;
	//param_list - rule8
	node *obj1;
public:
	rule8_();
	rule8_(Token *comma, node *obj1);
	void print();
	virtual ~rule8_();
};

#endif /* RULE8__H_ */
