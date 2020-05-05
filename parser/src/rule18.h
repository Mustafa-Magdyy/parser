#ifndef RULE18_H_
#define RULE18_H_

#include "node.h"
#include "Token.h"

//return_stmt
class rule18 : public node
{
private:
	Token *RETURN;
	// expr - rule19
	node *obj1;
	Token *semiColon;
public:
	rule18(Token *RETURN, Token *semiColon);
	rule18(Token *RETURN, node *obj1, Token *semiColon);
	void print();
	virtual ~rule18();
};

#endif /* RULE18_H_ */
