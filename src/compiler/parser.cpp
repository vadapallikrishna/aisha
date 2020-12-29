#include <cstdio>
#include <iostream>
#include <fstream>

using namespace std;

class TokenBuilder {
     private:
	

     public:
	string token;
	int take(char c) {
	    
	    return 0;
	}




};


class Token {

};

class ModuleToken: Token {

};

class ImportToken: Token {

};

class Parser {
     private:
	ifstream file;
	TokenBuilder builder;

	char c;
	int parse() {
	    while(file >> c) {
     		builder.take(c);
	    }
	    return 0;
	}
	

     public:
	Parser(string fname) {
	    file.open(fname);
	    parse();
	}
};
