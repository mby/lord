#ifndef LORD_LC_COMMON_STRUCTMGR_HH
#define LORD_LC_COMMON_STRUCTMGR_HH

#include "node.hh"
#include "type.hh"

struct Field {
	Range range;
	std::string name;
	Type type;

	Field(Range r, std::string n, Type t);
	void print();
};

struct Struct {
	// struct data
	Range defined_at;
	std::string name = "";
	std::vector<Field> fields;

	Struct(Range r, std::string n);

	void addField(Field f);

	void print();
};

struct StructMgr {
	std::vector<Struct> structs;

	void addStruct(Struct s);
	void addField(Field f);

	void print();
};

#endif