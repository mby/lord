#ifndef LORD_LC_MODULE_HH
#define LORD_LC_MODULE_HH

struct Compiler;

struct Module {
	Compiler *c = NULL;

	/* parsed data */
	std::string name;
	std::string src = "";
	Node ast;

	/* collected data */
	std::unordered_set<std::string> strs;
	std::map<std::string, Fn> fns;

	/* constructor */
	Module(Compiler *c, std::string name = "");

	/* methods */
	bool load_file(std::string fpath);

	/* debugging */
	void print();
};

#endif