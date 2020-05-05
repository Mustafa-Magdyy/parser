#ifndef RULE16_H_
#define RULE16_H_

#include "node.h"
#include "Token.h"

//local_decl
class rule16 : public node
{
private:
	// type_spec - rule5
	node *obj1;
	Token *IDENT, *openSquareBracket, *closeSquareBracket, *semiColon;
public:
	rule16(node *obj1, Token *IDENT, Token *semiColon);
	rule16(node *obj1, Token *IDENT, Token *openSquareBracket, Token *closeSquareBracket, Token *semiColon);
	void print();
	virtual ~rule16();
};

#endif /* RULE16_H_ */
