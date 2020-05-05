#ifndef RULE14_H_
#define RULE14_H_

#include "node.h"
#include "Token.h"

// compound_stmt
class rule14 : public node
{
private:
	// opencurlybracket
	Token *opencurlybracket;
	// compound_stmt_ - rule14_
	node *obj1;
	// compound_stm - rule14
	node *obj2;
	//closecurlybracket
	Token *closecurlybracket;
public:
	rule14(Token *openbracket, node *obj1, Token *closebracket);
	void print();
	virtual ~rule14();
};

#endif /* RULE14_H_ */
