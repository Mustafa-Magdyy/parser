#ifndef RULE9_H_
#define RULE9_H_

#include "node.h"
#include "Token.h"

// param
class rule9 : public node
{
private:
	// type_spec - rule5
	node *obj1;
	Token *IDENT, *openSquareBracket, *closeSquareBracket;
public:
	rule9(node *obj1, Token *IDENT);
	rule9(node *obj1, Token *IDENT, Token *openSquareBracket, Token *closeSquareBracket);
	void print();
	virtual ~rule9();
};

#endif /* RULE9_H_ */
