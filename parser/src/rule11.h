#ifndef RULE11_H_
#define RULE11_H_

#include "node.h"
#include "Token.h"

//stmt
class rule11 : public node
{
private:
	//expr_stmt | compound_stmt | if_stmt | while_stmt | return_stmt
	node *obj1;
	// | break_stmt
	Token* b_stmt;
public:
	rule11(node *obj1);
	rule11(Token *b_stmt);
	void print();
	virtual ~rule11();
};

#endif /* RULE11_H_ */
