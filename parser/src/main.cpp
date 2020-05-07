#include<iostream>
#include<iomanip>
#include<vector>

#include "Token.h"
#include "node.h"
#include "parser.h"

#define N 10000

using namespace std;

Token tokens[N];

int main()
{
	freopen("/home/mustafa/git/parser/parser/src/TestCase4.txt", "r", stdin);

	char c;
	string type, value;

	int i = 0;
	while(cin >> c)
	{
		getline(cin, type, '>');
		cin >> c >> value;
		tokens[i].type = type;
		tokens[i++].value = value;
	}
	tokens[i].type = "";
	tokens[i].value = "";
	parser p;
	p.nxt = tokens;
	node *root = p.parse();
	if(root)
	{
		root->print();
		delete root;
	}else
		cout << "Syntax Error\n";

	return 0;
}

