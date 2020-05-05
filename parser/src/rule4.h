#ifndef RULE4_H_
#define RULE4_H_

#include "node.h"
#include "Token.h"

// var_decl
class rule4 : public node
{
private:
	// type_spec - rule5
	node *obj1;
	Token *IDENT, *SEMICOLON, *openSquareBracket, *closeSquareBracket;
public:
	rule4(node *obj1, Token *IDENT, Token *SEMICOLON);
	rule4(node *obj1, Token *IDENT, Token *openSquareBracket, Token *closeSquareBracket, Token *SEMICOLON);
	void print();
	virtual ~rule4();
};

#endif /* RULE4_H_ */
