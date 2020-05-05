#ifndef RULE12_H_
#define RULE12_H_

#include "node.h"
#include "Token.h"

// expr_stmt
class rule12 : public node
{
private:
	// expr - rule19
	node *obj1;
	Token *semicolon;
public:
	rule12(node *obj1, Token *semicolon);
	rule12(Token *semicolon);
	void print();
	virtual ~rule12();
};

#endif /* RULE12_H_ */
