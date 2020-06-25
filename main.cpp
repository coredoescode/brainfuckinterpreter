#include <iostream>
#include <fstream>
#include "cxxopts.hpp"

int main(int argc, char **argv) {
    cxxopts::Options options("BFInterpreter", "A random bf interpreter made by three nerds in discord.");
    options.add_options()
	    ("f,file", "Specifies the file to parse", cxxopts::value<std::string>());

    auto opts - options.parse(argc, argv);

    file_path = opts["file"].as<string>();

    ifstream file (file_path);
    if (file.is_open()) {

    } else {
	    cout << "Unable to open file " << file_path << endl;
	    return -1;
    }


}
