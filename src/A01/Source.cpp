#include "../../dep/inc/XML/rapidxml.hpp"
#include "../../dep/inc/XML/rapidxml_utils.hpp"
#include "../../dep/inc/XML/rapidxml_iterators.hpp"
#include "../../dep/inc/XML/rapidxml_print.hpp"
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <vector>
#include <string.h>

using namespace std;

class Weapon {
	int W_id;
	string type;
	int reach;
};

class Enemy {
	char id;
	int HP;
	int ATK;
	int DEF; 
	float A_SPD;
	int XP;
	std::vector<Weapon> wp;
};

int main(int args, char** argv)
{

	std::vector<Enemy> listed;

	rapidxml::xml_document<> doc;
	std::ifstream file("../../res/files/config.xml");
	std::stringstream buffer;
	buffer << file.rdbuf();
	file.close();
	std::string content(buffer.str());
	doc.parse<0>(&content[0]);
	rapidxml::xml_node<> *pRoot = doc.first_node();

	for (rapidxml::xml_node<> *pNode = pRoot->first_node("Enemy"); pNode; pNode = pNode->next_sibling()) {

	}


	return 0;
}