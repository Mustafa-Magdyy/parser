#ifndef RULE19_H_
#define RULE19_H_

#include "node.h"
#include "Token.h"

//expr
class rule19 : public node
{
private:
	Token *IDENT, *ASSIGN;
	Token *openSquareBracket, *closeSquareBracket;
	//rule19
	node *obj1, *obj2;
	// rule20
	node *obj3;
public:
	rule19(Token *IDENT, Token *ASSIGN, node *obj1);
	rule19(Token *IDENT, Token *openSquareBracke, node *obj1, Token *closeSquareBracket, Token *ASSIGN, node *obj2);
	rule19(node *obj3);
	void print();
	virtual ~rule19();
};

#endif /* RULE19_H_ */
