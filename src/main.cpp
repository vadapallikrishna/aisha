#include <cstdio>
#include "compiler/parser.cpp"

int main(int argc, char **argv) {
        	
        if (argv[1] == NULL) {
	    new Parser("stdin");
	} else {
	    new Parser(argv[1]);
	}
	

}
