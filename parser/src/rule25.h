#ifndef RULE25_H_
#define RULE25_H_

#include "node.h"
#include "Token.h"

// expr6
class rule25 : public node
{
private:
	Token *NOT_or_UPLUS_or_UMINUS;
	// expr6 - rule25 OR expr7 - rule26
	node *obj1;
public:
	rule25(Token *not_or_uplus_or_uminus, node *obj1);
	rule25(node *obj1);
	void print();
	virtual ~rule25();
};

#endif /* RULE25_H_ */
