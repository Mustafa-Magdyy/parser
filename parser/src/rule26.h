#ifndef RULE26_H_
#define RULE26_H_

#include "node.h"
#include "Token.h"

// expr7
class rule26 : public node
{
private:
	Token *openBracket, *closeBracket;
	// expr - rule19 OR expr8 - rule27
	node *obj1;
public:
	rule26(Token *openBracket, node *obj1, Token *closeBracket);
	rule26(node *obj1);
	void print();
	virtual ~rule26();
};

#endif /* RULE26_H_ */
