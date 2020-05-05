#ifndef RULE27_H_
#define RULE27_H_

#include "node.h"
#include "Token.h"

//expr8
class rule27 : public node
{
private:
	Token *IDENT_or_LIT;
	// expr - rule19 OR args rule29
	node *obj1;
	Token *openBracket, *closeBracket;
public:
	rule27(Token *IDENT, Token *openBracket, node *obj1, Token *closeBracket);
	rule27(Token *ident_or_lit);
	void print();
	virtual ~rule27();
};

#endif /* RULE27_H_ */
