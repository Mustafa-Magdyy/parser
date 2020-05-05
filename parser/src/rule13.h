#ifndef RULE13_H_
#define RULE13_H_

#include "node.h"
#include "Token.h"

// while_stmt
class rule13 : public node
{
private:
	Token *WHILE;
	Token *openPara;
	// expr - rule19
	node *obj1;
	Token *closePara;
	// compound_stmt - rule14
	node *obj2;
public:
	rule13(Token *WHILE, Token *openPara, node *obj1, Token *closePara, node *obj2);
	void print();
	virtual ~rule13();
};

#endif /* RULE13_H_ */
