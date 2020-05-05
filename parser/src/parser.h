#ifndef MINIC_PHASE2_PARSER_H
#define MINIC_PHASE2_PARSER_H

#include "rule1.h"
#include "rule2.h"
#include "rule3.h"
#include "rule2_.h"
#include "rule4.h"
#include "rule6.h"
#include "rule5.h"
#include "rule14.h"
#include "rule7.h"
#include "rule8.h"
#include "rule8_.h"
#include "rule9.h"
#include "rule10.h"
#include "rule11.h"
#include "rule12.h"
#include "rule19.h"
#include "rule13.h"
#include "rule14.h"
#include "rule14_.h"
#include "rule15.h"
#include "rule16.h"
#include "rule17.h"
#include "rule18.h"
#include "rule19.h"
#include "rule20.h"
#include "rule20_.h"
#include "rule21.h"
#include "rule21_.h"
#include "rule22.h"
#include "rule22_.h"
#include "rule23.h"
#include "rule23_.h"
#include "rule24.h"
#include "rule24_.h"
#include "rule25.h"
#include "rule26.h"
#include "rule27.h"
#include "rule28.h"
#include "rule28_.h"
#include "rule29.h"



class parser {
public:
    Token *nxt;
    parser();
    //rule1
    node* parse();
    //rule1
    node* program();
    // rule2
    node* decl_list();
    // rule3
    node* decl();
    // rule2_
    node* decl_list_();
    // rule4
    node* var_decl();
    // rule6
    node* fun_decl();
    // rule5
    node* type_spec();
    Token* ident();
    Token* semiColon();
    Token* openSquareBracket();
    Token* closeSquareBracket();
    Token* dataType();
    Token* openPara();
    Token* closePara();
    Token* NE();
    Token* EQ();
    Token* LE();
    Token* LT();
    Token* GE();
    Token* GT();
    Token* plus();
    Token* minus();
    Token* mult();
    Token* div();
    Token* rem();
    //rule14
    node* compound_stmt();
    //rule14_
    node* compound_stmt_();
    //rule7
    node* params();
    //rule8
    node* param_list();
    //rule8_
    node* param_list_();
    //rule9
    node* param();
    //rule10
    node* stmt_list();
    //rule11
    node* stmt();
    Token* break_stmt();
    //rule12
    node* expr_stmt();
    //rule13
    node* while_stmt();
    Token* While();
    Token* openCurlyPara();
    Token* closeCurlyPara();
    Token* Bool_Lit();
    Token* Int_Lit();
    Token* Float_Lit();
    //rule15
    node* local_decls();
    //rule16
    node* local_decl();
    //rule17
    node* if_stmt();
    Token* IF();
    Token* ELSE();
    //rule18
    node* return_stmt();
    Token* RETURN();
    Token* equal();
    Token* AND();
    Token* OR();

    Token* NOT();

    node* arg_list();
    node* arg_list_();
    node* args();
    Token *comma();

    node* expr_p1();
	node* expr_p2();
	node* expr_p3();
	node* expr();

	node* expr1();

	node* expr1__p1();
	node* expr1__p2();
	node* expr1__p3();
	node* expr1_();

	node* expr2();

	node* expr2__p1();
	node* expr2__p2();
	node* expr2__p3();
	node* expr2_();

	node* expr3();

	node* expr3__p1();
	node* expr3__p2();
	node* expr3__p3();
	node* expr3__p4();
	node* expr3__p5();
	node* expr3_();

	node* expr4();

	node* expr4__p1();
	node* expr4__p2();
	node* expr4__p3();
	node* expr4_();

	node* expr5();

	node* expr5__p1();
	node* expr5__p2();
	node* expr5__p3();
	node* expr5__p4();
	node* expr5_();

	node* expr6_p1();
	node* expr6_p2();
	node* expr6_p3();
	node* expr6_p4();
	node* expr6();

	node* expr7_p1();
	node* expr7_p2();
	node* expr7();

	node* expr8_p1();
	node* expr8_p2();
	node* expr8_p3();
	node* expr8_p4();
	node* expr8_p5();
	node* expr8_p6();
	node* expr8();


};

#endif //MINIC_PHASE2_PARSER_H
