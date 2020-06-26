#include <iostream>
#include <fstream>
#include <sstream>
#include "cxxopts.hpp"
#include "interpreter.cpp"

using namespace std;

int main(int argc, char **argv) {
    cxxopts::Options options("BFInterpreter", "A random bf interpreter made by three nerds in discord.");
    options.add_options()
	    ("f,file", "Specifies the file to parse", cxxopts::value<std::string>());

    auto opts = options.parse(argc, argv);

    string file_path = opts["file"].as<string>();

    ifstream file (file_path);
    string fileText;
    if (file.is_open()) {
	ostringstream ss;
	ss << file.rdbuf();
	fileText = ss.str();
    } else {
	    cout << "Unable to open file " << file_path << endl;
	    return -1;
    }


}
