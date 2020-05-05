#ifndef RULE14__H_
#define RULE14__H_

#include "node.h"
#include "Token.h"

// compound_stmt_
class rule14_ : public node
{
private:
	//local_decls - rule15
	node *obj1;
	// stmt_list - rule10
	node *obj2;
	//compound_stmt_ - rule14_
	node *obj3;
public:
	rule14_(node *obj1, node *obj2, node *obj3);
	rule14_(node *obj1, node *obj2);
	void print();
	virtual ~rule14_();
};

#endif /* RULE14__H_ */
