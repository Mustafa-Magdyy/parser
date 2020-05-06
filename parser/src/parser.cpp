#include "parser.h"
#include <iostream>

using namespace std;

parser::parser()
{
	nxt = 0;
}

node* parser::parse() {
    return program();
}

node* parser::program() {
    Token *copy = nxt;

    node *d_list = decl_list();

    if (d_list == NULL) {
        nxt = copy;
        return NULL;
    }
    return new rule1(d_list);
}

node* parser::decl_list() {
    Token *copy = nxt;

    node *dec = decl();
    node *d_list_ = 0;

    if(dec)
    	d_list_ = decl_list_();
    if (dec == NULL || d_list_ == NULL) {
        nxt = copy;
        return NULL;
    }
    return new rule2(dec, d_list_);
}

node* parser::decl() {
    Token *copy = nxt;

    node *var = var_decl();
    if (var != NULL)
		return new rule3(var);

    nxt = copy;
    node *fun = fun_decl();
     if (fun != NULL)
        return new rule3(fun);

    nxt = copy;
    return NULL;
}

node* parser::decl_list_() {

    node *dec = decl();
    node *d_list_ = 0;
    if(dec)
    	d_list_ = decl_list_();

    if (dec != NULL && d_list_ != NULL) {
        return new rule2_(d_list_, dec);
    }
    return new rule2_();
}

node* parser::var_decl() {
    Token *copy = nxt;

    // production 1
    node *t_spec = type_spec();
    Token *idnt = ident();
    Token *semicolo = semiColon();

    if (t_spec && idnt && semicolo) {
        return new rule4(t_spec, idnt, semicolo);
    }

    // prodcution 2
    nxt = copy;
    t_spec = type_spec();
	idnt = ident();
    Token *openSB = openSquareBracket();
    Token *closeSB = closeSquareBracket();
    semicolo = semiColon();
    if (t_spec != NULL && idnt != NULL && openSB != NULL && closeSB != NULL && semicolo != NULL) {
        return new rule4(t_spec, idnt, openSB, closeSB, semicolo);
    }
    nxt = copy;
    return NULL;
}

node* parser::type_spec() {
    Token *copy = nxt;

    Token* dType = dataType();
    if (dType == NULL) {
        nxt = copy;
        return NULL;
    }
    return new rule5(dType);
}

node* parser::fun_decl() {
    Token *copy = nxt;
    // type_spec - rule5
    node *t_spec = type_spec();
    Token *idnt = ident();
    Token *oPara = openPara();
    // params - rule7
    node *prms = 0;
    if(t_spec && idnt && oPara)
    	prms = params();
    Token *cPara = closePara();
    // compound_stmt - rule14
    node *com_stmt = 0;
    if(prms && cPara)
    	com_stmt = compound_stmt();
    if (t_spec != NULL && idnt != NULL && oPara != NULL && prms != NULL && cPara != NULL && com_stmt != NULL) {
    	return new rule6(t_spec, idnt, oPara, prms, cPara, com_stmt);
    }
    nxt = copy;
    return NULL;
}

node* parser::params() {
    Token *copy = nxt;

    node* p_list = param_list();
    if (p_list != NULL) {
        return new rule7(p_list);
    }

    nxt = copy;
    Token *dType = dataType();
    if (dType->value == "void") {
        return new rule7(dType);
    }

    nxt = copy;
    return NULL;
}

node* parser::param_list() {
    Token *copy = nxt;

    node *prm = param();
    node *p_list_ = param_list_();

    if (prm != NULL && p_list_ != NULL) {
        return new rule8(prm, p_list_);
    }

    nxt = copy;
    return NULL;
}

node* parser::param_list_() {

	Token *com = comma();
	node *p_list;
	if(com != 0)
		p_list = param_list();

    if (com != NULL && p_list != NULL) {
        return new rule8_(com, p_list);
    }
    return new rule8_();
}

node* parser::param() {
    Token *copy = nxt;

    node *t_spec = type_spec();
    Token *idnt = ident();

    if (t_spec != NULL && idnt != NULL)
    {
    	copy = nxt;
        Token *openSB = openSquareBracket();
        Token *closeSB = closeSquareBracket();
        if (openSB != NULL && closeSB != NULL)
        {
            return new rule9(t_spec, idnt, openSB, closeSB);
        }
        nxt = copy;
        return new rule9(t_spec, idnt);
    }
    nxt = copy;
    return NULL;
}

node* parser::stmt_list()
{
	node *s = stmt();
	node *s_list = 0;
	if(s != 0)
		s_list = stmt_list();

    if (s != NULL && s_list != NULL) {
        return new rule10(s, s_list);
    }

    return new rule10();
}

node* parser::stmt() {
    Token *copy = nxt;

    node* ex_stmt = expr_stmt();
    if (ex_stmt != NULL)
        return new rule11(ex_stmt);

//    nxt = copy;
//    node* com_stmt = compound_stmt();
//    if (com_stmt != NULL)
//        return new rule11(com_stmt);


    nxt = copy;
    node* f_stmt = if_stmt();
    if (f_stmt != NULL)
        return new rule11(f_stmt);

    nxt = copy;
    node* wil_stmt = while_stmt();
    if (wil_stmt != NULL)
        return new rule11(wil_stmt);

    nxt = copy;
    node* ret_stmt = return_stmt();
    if(ret_stmt != NULL)
    	return new rule11(ret_stmt);

    nxt = copy;
    Token* b_stm = break_stmt();
    if (b_stm != NULL)
        return new rule11(b_stm);

    nxt = copy;
    return NULL;
}

node* parser::expr_stmt() {
    Token *copy = nxt;

    node *ex = expr();
    Token *semicolo = semiColon();
    if (ex != NULL && semicolo != NULL)
        return new rule12(ex, semicolo);

    nxt = copy;
    semicolo = semiColon();
    if (semicolo != NULL)
        return new rule12(semicolo);

    nxt = copy;
    return NULL;
}

node* parser::while_stmt() {
    Token *copy = nxt;

    Token *wil = While();
    Token *oPara = openPara();
    node *ex = 0;
    if(wil && oPara)
    	ex = expr();
    Token *cPara = closePara();
    node *comp_st = 0;
    if(wil && oPara && ex && cPara)
    	comp_st = compound_stmt();

    if (wil != NULL && oPara != NULL && ex != NULL && cPara != NULL && comp_st != NULL) {
        return new rule13(wil, oPara, ex, cPara, comp_st);
    }

    nxt = copy;
    return NULL;
}

// rule14_
node* parser::compound_stmt_()
{
    Token *copy = nxt;

    node *loc_decls = local_decls();
    node *s_list = 0;
    if(loc_decls)
    	s_list = stmt_list();
    node *comp_stmt_ = 0;
    if(loc_decls && s_list && nxt != copy)
    	comp_stmt_ = compound_stmt_();

    if (loc_decls && s_list && comp_stmt_) {
        return new rule14_(loc_decls, s_list, comp_stmt_);
    }
    else if(loc_decls && s_list)
    	return new rule14_(loc_decls, s_list);

    nxt = copy;
    return NULL;
}

// rule14
node* parser::compound_stmt()
{
	Token *copy = nxt;

	Token *ocurlybracket = openCurlyPara();
	node *comp_stmt_ = 0;
	if(ocurlybracket)
		comp_stmt_ = compound_stmt_();
	Token *ccurlybracket = closeCurlyPara();
	if(ocurlybracket && comp_stmt_ && ccurlybracket)
		return new rule14(ocurlybracket, comp_stmt_, ccurlybracket);

	nxt = copy;
	return 0;
}

node* parser::local_decls()
{
    node *loc_decl = local_decl();
    node *loc_decls = 0;
    if(loc_decl != 0)
    	loc_decls = local_decls();

    if (loc_decl != NULL && loc_decls != NULL) {
        return new rule15(loc_decl, loc_decls);
    }
    return new rule15();
}

node* parser::local_decl()
{
    Token *copy = nxt;

    node *t_spec = type_spec();
    Token *idnt = ident();
    Token *semicolo = semiColon();
    if (t_spec != NULL && idnt != NULL && semicolo != NULL) {
        return new rule16(t_spec, idnt, semicolo);
    }

    nxt = copy;
    t_spec = type_spec();
    idnt = ident();
    Token *openSB = openSquareBracket();
    Token *closeSB = closeSquareBracket();
    semicolo = semiColon();
    if (t_spec != NULL && idnt != NULL && openSB != NULL && closeSB != NULL && semicolo != NULL) {
        return new rule16(t_spec, idnt, openSB, closeSB, semicolo);
    }

    nxt = copy;
    return NULL;
}

node* parser::if_stmt()
{
    Token *copy = nxt;

    Token *f = IF();
    Token *oPara = openPara();
    node *ex = 0;
    if(f && oPara)
    	ex = expr();
    Token *cPara = closePara();
    node *comp_st = 0;
    if(f && oPara && ex && cPara)
    	comp_st = compound_stmt();

    if (f != NULL && oPara != NULL && ex != NULL && cPara != NULL && comp_st != NULL)
    {
    	copy = nxt;
        Token *els = ELSE();
        node *comp_stt = 0;
        if(els)
        	comp_stt = compound_stmt();

        if (els && comp_stt)
        {
            return new rule17(f, oPara, ex, cPara, comp_st, els, comp_stt);
        }
        nxt = copy;
        return new rule17(f, oPara, ex, cPara, comp_st);
    }
    nxt = copy;
    return NULL;
}

node* parser::return_stmt()
{
    Token *copy = nxt;

    Token *ret = RETURN();
    Token *semicolo = semiColon();

    if(ret != NULL && semicolo != 0)
    	return new rule18(ret, semicolo);

    nxt = copy;
    ret = RETURN();
    node *exp = expr();
    semicolo = semiColon();

    if (ret != NULL && exp != NULL && semicolo != NULL)
    	return new rule18(ret, exp, semicolo);

    nxt = copy;
    return NULL;
}

Token* parser::ident()
{
	if(nxt->type == "ID")
		return new Token(*nxt++);
	return 0;
}

Token* parser::semiColon()
{
	if(nxt->value == ";")
		return new Token(*nxt++);
	return 0;
}

Token* parser::openSquareBracket()
{
	if(nxt->value == "[")
		return new Token(*nxt++);
	return 0;
}

Token* parser::closeSquareBracket()
{
	if(nxt->value == "]")
		return new Token(*nxt++);
	return 0;
}

Token* parser::dataType()
{
	if(nxt->value == "void" || nxt->value == "bool"
			|| nxt->value == "float" || nxt->value == "int")
	{
		return new Token(*nxt++);
	}
	return 0;
}

Token* parser::openPara()
{
	if(nxt->value == "(")
		return new Token(*nxt++);
	return 0;
}

Token* parser::closePara()
{
	if(nxt->value == ")")
		return new Token(*nxt++);
	return 0;
}

Token* parser::While()
{
	if(nxt->value == "while")
		return new Token(*nxt++);
	return 0;
}

Token* parser::openCurlyPara()
{
	if(nxt->value == "{")
		return new Token(*nxt++);
	return 0;
}


Token* parser::closeCurlyPara()
{
	if(nxt->value == "}")
		return new Token(*nxt++);
	return 0;
}

Token* parser::IF()
{
	if(nxt->value == "if")
		return new Token(*nxt++);
	return 0;
}

Token* parser::ELSE()
{
	if(nxt->value == "else")
		return new Token(*nxt++);
	return 0;
}

Token* parser::RETURN()
{
	if(nxt->value == "return")
		return new Token(*nxt++);
	return 0;
}

Token* parser::equal()
{
	if(nxt->value == "=")
		return new Token(*nxt++);
	return 0;
}

Token* parser::AND()
{
	if(nxt->value == "&&")
		return new Token(*nxt++);
	return 0;
}

Token* parser::OR()
{
	if(nxt->value == "||")
		return new Token(*nxt++);
	return 0;
}

Token* parser::NE()
{
	if(nxt->value == "!=")
		return new Token(*nxt++);
	return 0;
}

Token* parser::EQ()
{
	if(nxt->value == "==")
		return new Token(*nxt++);
	return 0;
}

Token* parser::LE()
{
	if(nxt->value == "<=")
		return new Token(*nxt++);
	return 0;
}

Token* parser::LT()
{
	if(nxt->value == "<")
		return new Token(*nxt++);
	return 0;
}

Token* parser::GE()
{
	if(nxt->value == ">=")
		return new Token(*nxt++);
	return 0;
}

Token* parser::GT()
{
	if(nxt->value == ">")
		return new Token(*nxt++);
	return 0;
}

Token* parser::plus()
{
	if(nxt->value == "+")
		return new Token(*nxt++);
	return 0;
}

Token* parser::minus()
{
	if(nxt->value == "-")
		return new Token(*nxt++);
	return 0;
}


Token* parser::mult()
{
	if(nxt->value == "*")
		return new Token(*nxt++);
	return 0;
}

Token* parser::div()
{
	if(nxt->value == "/")
		return new Token(*nxt++);
	return 0;
}

Token* parser::rem()
{
	if(nxt->value == "%")
		return new Token(*nxt++);
	return 0;
}

Token* parser::NOT()
{
	if(nxt->value == "!")
		return new Token(*nxt++);
	return 0;
}

Token* parser::Bool_Lit()
{
	if(nxt->value == "true" || nxt->value == "false")
		return new Token(*nxt++);
	return 0;
}

Token* parser::Int_Lit()
{
	if(nxt->type == "INTEGERAL_LITERAL")
		return new Token(*nxt++);
	return 0;
}

Token* parser::Float_Lit()
{
	if(nxt->type == "FLOAT_LITERAL")
		return new Token(*nxt++);
	return 0;
}


Token* parser::break_stmt()
{
	if(nxt->value == "break")
		return new Token(*nxt++);
	return 0;
}

Token* parser::comma()
{
	if(nxt->value == ",")
		return new Token(*nxt++);
	return 0;
}

//rule19
node* parser::expr_p1()
{
	auto copy = nxt;

	Token *IDENT = ident();
	Token *EQUAL = equal();
	node *exp;
	if(IDENT && EQUAL)
		exp = expr();
//	if(IDENT && IDENT->value == "ret")
//		exp->print();
	if(IDENT && EQUAL && exp)
		return new rule19(IDENT, EQUAL, exp);

	nxt = copy;
	return 0;
}

// rule19
node* parser::expr_p2()
{
	auto copy = nxt;

	Token *IDENT = ident();
	Token *open_square_bracket = openSquareBracket();
	node *exp1;
	if(IDENT && open_square_bracket)
		exp1 = expr();

	Token *close_square_bracket = closeSquareBracket();
	Token *EQUAL = equal();
	node *exp2;

	if(close_square_bracket && EQUAL)
		exp2 = expr();

	if(IDENT && open_square_bracket && exp1 && close_square_bracket && EQUAL && exp2)
		return new rule19(IDENT, open_square_bracket, exp1, close_square_bracket, EQUAL, exp2);

	nxt = copy;
	return 0;
}

// rule19
node* parser::expr_p3()
{
	auto copy = nxt;

	node *exp_1 = expr1();

	if(exp_1)
		return new rule19(exp_1);

	nxt = copy;
	return 0;
}

node* parser::expr()
{
	node *ret;
	if((ret = expr_p1()))
		return ret;
	else if((ret = expr_p2()))
		return ret;
	else if((ret = expr_p3()))
		return ret;
	else
		return 0;
}

// rule20
node* parser::expr1()
{
	auto copy = nxt;

	node *exp_2 = expr2();
	node *exp_1_ = expr1_();

	if(exp_2 && exp_1_)
		return new rule20(exp_2, exp_1_);

	nxt = copy;
	return 0;
}

// rule20_
node* parser::expr1__p1()
{
	auto copy = nxt;

	Token *And = AND();
	node *exp_1;
	if(And)
		exp_1 = expr1();

	if(And && exp_1)
		return new rule20_(And, exp_1);

	nxt = copy;
	return 0;
}

// rule20_
node* parser::expr1__p2()
{
	auto copy = nxt;

	Token *Or = OR();
	node *exp_1;
	if(Or)
		exp_1 = expr1();

	if(Or && exp_1)
		return new rule20_(Or, exp_1);

	nxt = copy;
	return 0;
}

// rule20_
node* parser::expr1__p3()
{
	return new rule20_();
}

// rule20_
node* parser::expr1_()
{
	node *ret;
	if((ret = expr1__p1()))
		return ret;
	else if((ret = expr1__p2()))
		return ret;
	else if((ret = expr1__p3()))
		return ret;
	else
		return 0;
}

// rule21
node* parser::expr2()
{
	auto copy = nxt;

	node *exp_3 = expr3();
	node *exp_2_ = expr2_();

	if(exp_3 && exp_2_)
		return new rule21(exp_3, exp_2_);

	nxt = copy;
	return 0;
}

//rule21_
node* parser::expr2__p1()
{
	auto copy = nxt;

	Token *Ne = NE();
	node *exp_2;
	if(Ne)
		exp_2 = expr2();

	if(Ne && exp_2)
		return new rule21_(Ne, exp_2);

	nxt = copy;
	return 0;
}

// rule21_
node* parser::expr2__p2()
{
	auto copy = nxt;

	Token *Eq = EQ();
	node *exp_2;
	if(Eq)
		exp_2 = expr2();

	if(Eq && exp_2)
		return new rule21_(Eq, exp_2);

	nxt = copy;
	return 0;
}

// rule21_
node* parser::expr2__p3()
{
	return new rule21_();
}

node* parser::expr2_()
{
	node *ret;
	if((ret = expr2__p1()))
		return ret;
	else if((ret = expr2__p2()))
		return ret;
	else if((ret = expr2__p3()))
		return ret;
	else
		return 0;
}

// rule22
node* parser::expr3()
{
	auto copy = nxt;

	node *exp_4 = expr4();
	node *exp_3_ = expr3_();

	if(exp_4 && exp_3_)
		return new rule22(exp_4, exp_3_);

	nxt = copy;
	return 0;
}

// rule22_
node* parser::expr3__p1()
{
	auto copy = nxt;

	Token *Le = LE();
	node *exp_3;
	if(Le)
		exp_3 = expr3();

	if(Le && exp_3)
		return new rule22_(Le, exp_3);

	nxt = copy;
	return 0;
}

// rule22_
node* parser::expr3__p2()
{
	auto copy = nxt;

	Token *Lt = LT();
	node *exp_3;
	if(Lt)
		exp_3 = expr3();

	if(Lt && exp_3)
		return new rule22_(Lt, exp_3);

	nxt = copy;
	return 0;
}

// rule22_
node* parser::expr3__p3()
{
	auto copy = nxt;

	Token *Ge = GE();
	node *exp_3;
	if(Ge)
		exp_3 = expr3();

	if(Ge && exp_3)
		return new rule22_(Ge, exp_3);

	nxt = copy;
	return 0;
}

// rule22_
node* parser::expr3__p4()
{
	auto copy = nxt;

	Token *Gt = GT();
	node *exp_3;
	if(Gt)
		exp_3 = expr3();

	if(Gt && exp_3)
		return new rule22_(Gt, exp_3);

	nxt = copy;
	return 0;
}

// rule22_
node* parser::expr3__p5()
{
	return new rule22_();
}

// rule22_
node* parser::expr3_()
{
	node *ret;
	if((ret = expr3__p1()))
		return ret;
	else if((ret = expr3__p2()))
		return ret;
	else if((ret = expr3__p3()))
		return ret;
	else if((ret = expr3__p4()))
		return ret;
	else if((ret = expr3__p5()))
		return ret;
	else
		return 0;
}

// rule23
node* parser::expr4()
{
	auto copy = nxt;

	node *exp_5 = expr5();
	node *exp_4_ = expr4_();

	if(exp_5 && exp_4_)
		return new rule23(exp_5, exp_4_);

	nxt = copy;
	return 0;
}

//rule23_
node* parser::expr4__p1()
{
	auto copy = nxt;

	Token *Plus = plus();
	node *exp_4;
	if(Plus)
		exp_4 = expr4();

	if(Plus && exp_4)
		return new rule23_(Plus, exp_4);

	nxt = copy;
	return 0;
}

// rule23_
node* parser::expr4__p2()
{
	auto copy = nxt;

	Token *Minus = minus();
	node *exp_4;
	if(Minus)
		exp_4 = expr4();

	if(Minus && exp_4)
		return new rule23_(Minus, exp_4);

	nxt = copy;
	return 0;
}

//rule23_
node* parser::expr4__p3()
{
	return new rule23_();
}

node* parser::expr4_()
{
	node *ret;
	if((ret = expr4__p1()))
		return ret;
	else if((ret = expr4__p2()))
		return ret;
	else if((ret = expr4__p3()))
		return ret;
	else
		return 0;
}

// rule24
node* parser::expr5()
{
	auto copy = nxt;

	node *exp_6 = expr6();
	node *exp_5_ = expr5_();

	if(exp_6 && exp_5_)
		return new rule24(exp_6, exp_5_);

	nxt = copy;
	return 0;
}

// rule24_
node* parser::expr5__p1()
{
	auto copy = nxt;

	Token *Mult = mult();
	node *exp_5;
	if(Mult)
		exp_5 = expr5();

	if(Mult && exp_5)
		return new rule24_(Mult, exp_5);

	nxt = copy;
	return 0;
}

node* parser::expr5__p2()
{
	auto copy = nxt;

	Token *Div = div();
	node *exp_5;
	if(Div)
		exp_5 = expr5();

	if(Div && exp_5)
		return new rule24_(Div, exp_5);

	nxt = copy;
	return 0;
}

node* parser::expr5__p3()
{
	auto copy = nxt;

	Token *Rem = rem();
	node *exp_5;
	if(Rem)
		exp_5 = expr5();

	if(Rem && exp_5)
		return new rule24_(Rem, exp_5);

	nxt = copy;
	return 0;
}

node* parser::expr5__p4()
{
	return new rule24_();
}

node* parser::expr5_()
{
	node *ret;
	if((ret = expr5__p1()))
		return ret;
	else if((ret = expr5__p2()))
		return ret;
	else if((ret = expr5__p3()))
		return ret;
	else if((ret = expr5__p4()))
		return ret;
	else
		return 0;
}

// rule25
node* parser::expr6_p1()
{
	auto copy = nxt;

	Token *Not = NOT();
	node *exp_6;
	if(Not)
		exp_6 = expr6();

	if(Not && exp_6)
		return new rule25(Not, exp_6);

	nxt = copy;
	return 0;
}

// rule25
node* parser::expr6_p2()
{
	auto copy = nxt;

	Token *Plus = plus();
	node *exp_6;
	if(Plus)
		exp_6 = expr6();

	if(Plus && exp_6)
		return new rule25(Plus, exp_6);

	nxt = copy;
	return 0;
}

// rule25
node* parser::expr6_p3()
{
	auto copy = nxt;

	Token *Minus = minus();
	node *exp_6;
	if(Minus)
		exp_6 = expr6();

	if(Minus && exp_6)
		return new rule25(Minus, exp_6);

	nxt = copy;
	return 0;
}

// rule25
node* parser::expr6_p4()
{
	auto copy = nxt;

	node *exp_7 = expr7();

	if(exp_7)
		return new rule25(exp_7);

	nxt = copy;
	return 0;
}

// rule25
node* parser::expr6()
{
	node *ret;
	if((ret = expr6_p1()))
		return ret;
	else if((ret = expr6_p2()))
		return ret;
	else if((ret = expr6_p3()))
		return ret;
	else if((ret = expr6_p4()))
		return ret;
	else
		return 0;
}

// rule26
node* parser::expr7_p1()
{
	auto copy = nxt;

	Token *open_para = openPara();
	node *exp;
	if(open_para)
		exp = expr();
	Token *close_para = closePara();
	if(open_para && exp && close_para)
		return new rule26(open_para, exp, close_para);

	nxt = copy;
	return 0;
}

//rule26
node* parser::expr7_p2()
{
	auto copy = nxt;

	node *exp_8 = expr8();

	if(exp_8)
		return new rule26(exp_8);

	nxt = copy;
	return 0;
}

// rule26
node* parser::expr7()
{
	node *ret;
	if((ret = expr7_p1()))
		return ret;
	else if((ret = expr7_p2()))
		return ret;
	else
		return 0;
}

// rule27
node* parser::expr8_p1()
{
	auto copy = nxt;

	Token *IDENT = ident();
	Token *open_bracket = openPara();
	node *Args;
	if(IDENT && open_bracket)
		Args = args();
	if(IDENT && IDENT->value == "fast_power")
		cout << Args << endl;
	Token *close_bracket = closePara();

	if(IDENT && open_bracket && Args && close_bracket)
		return new rule27(IDENT, open_bracket, Args, close_bracket);

	nxt = copy;
	return 0;
}

// rule27
node* parser::expr8_p2()
{
	auto copy = nxt;

	Token *IDENT = ident();
	Token *open_square_bracket = openSquareBracket();
	node *exp;
	if(IDENT && open_square_bracket)
		exp = expr();
	Token *close_square_bracket = closeSquareBracket();

	if(IDENT && open_square_bracket && exp && close_square_bracket)
		return new rule27(IDENT, open_square_bracket, exp, close_square_bracket);

	nxt = copy;
	return 0;
}

// rule27
node* parser::expr8_p3()
{
	auto copy = nxt;

	Token *IDENT = ident();
	if(IDENT)
		return new rule27(IDENT);

	nxt = copy;
	return 0;
}

node* parser::expr8_p4()
{
	auto copy = nxt;

	Token *bool_lit = Bool_Lit();

	if(bool_lit)
		return new rule27(bool_lit);

	nxt = copy;
	return 0;
}

node* parser::expr8_p5()
{
	auto copy = nxt;

	Token *int_lit = Int_Lit();

	if(int_lit)
		return new rule27(int_lit);

	nxt = copy;
	return 0;
}

node* parser::expr8_p6()
{
	auto copy = nxt;

	Token *float_lit = Float_Lit();

	if(float_lit)
		return new rule27(float_lit);

	nxt = copy;
	return 0;
}

node* parser::expr8()
{
	node *ret;
	if((ret = expr8_p1()))
		return ret;
	else if((ret = expr8_p2()))
		return ret;
	else if((ret = expr8_p3()))
		return ret;
	else if((ret = expr8_p4()))
		return ret;
	else if((ret = expr8_p5()))
		return ret;
	else if((ret = expr8_p6()))
		return ret;
	else
		return 0;
}


node* parser::arg_list() {
    node *ex = expr();
    node *ar_list_ = 0;
    if(ex)
    	ar_list_ = arg_list_();
    if (ex != NULL && ar_list_ != NULL) {
        return new rule28(ex, ar_list_);
    }
    return NULL;
}

node* parser::arg_list_() {
    Token *coma = comma();
    node *ar_list = 0;
    if(coma)
    	ar_list = arg_list();
    if (coma != NULL && ar_list != NULL) {
        return new rule28_(coma, ar_list);
    }
    return new rule28_();
}

node *parser::args() {
    node *ar_list = arg_list();
    if (ar_list != NULL) {
        return new rule29(ar_list);
    }
    return new rule29();
}
