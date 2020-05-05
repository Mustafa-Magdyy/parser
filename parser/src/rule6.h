/*
 * rule6.h
 *
 *  Created on: Apr 28, 2020
 *      Author: mustafa
 */

#ifndef RULE6_H_
#define RULE6_H_

#include "node.h"
#include "Token.h"

// fun_decl
class rule6 : public node
{
private:
	// type_spec - rule5
	node *obj1;
	Token *IDENT, *openPara;
	// params - rule7
	node *obj2;
	Token *closePara;
	// compound_stmt - rule14
	node *obj3;
public:
	rule6(node *obj1, Token *IDENT, Token *openPara, node *obj2, Token *closePara, node *obj3);
	void print();
	virtual ~rule6();
};

#endif /* RULE6_H_ */
