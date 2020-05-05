#ifndef RULE17_H_
#define RULE17_H_

#include "node.h"
#include "Token.h"

//if_stmt
class rule17 : public node
{
private:
	// IF
	Token *IF;
	Token *openBracket;
	// expr - rule19
	node *obj1;
	Token *closeBracket;
	// compound_stmt - rule14
	node *obj2;
	// ELSE
	Token *ELSE;
	// copound_stmt - rule14
	node *obj3;
public:
	rule17(Token *IF, Token *openBracket, node *obj1, Token *closeBracket, node *obj2);
	rule17(Token *IF, Token *openBracket, node *obj1, Token *closeBracket, node *obj2, Token *ELSE, node *obj3);
	void print();
	virtual ~rule17();
};

#endif /* RULE17_H_ */
