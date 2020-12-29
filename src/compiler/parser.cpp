#include <cstdio>
#include <fstream>

using namespace std;

class Token {
     public:
	string token;
	int take(char c) {
		token += c;
		return 0;
	}

};

class ModuleToken: Token {
     
};

class ImportToken: Token {

};

class Parser {
     private:
	ifstream file;
	char c;
	int parse() {
	    while(file >> c) {
     		printf("%c",c);   	
	    }
	    return 0;
	}
	

     public:
	Parser(string fname) {
	    file.open(fname);
	}
};
