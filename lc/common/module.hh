#ifndef LORD_LC_COMMON_MODULE_HH
#define LORD_LC_COMMON_MODULE_HH

struct Compiler;

struct Module {
	Compiler *c = NULL;

	/* syntactic analysis */
	std::string name;
	std::string src = "";
	Node *ast = NULL;

	/* semantic analysis */
	TypeMgr typemgr = TypeMgr();
	std::map<std::string, Type*> structs;
	FnMgr fnmgr = FnMgr();

	/* constructor */
	Module(Compiler *c, std::string name = "");

	/* methods */
	bool load_file(std::string fpath);
	std::string genpy();

	/* debugging */
	void print();
};

#endif
