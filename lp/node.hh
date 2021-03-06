#ifndef LORD_LP_NODE_HH
#define LORD_LP_NODE_HH

struct Node : std::vector<Node> {
	/* register data */
	size_t reg_index = 0;
	size_t reg_size = 0;

	/* token data */
	Range range = {0, 0};
	Token token = T_EOF;
	std::string val = "";

	/* constructor & destructor */
	Node(Range range = {0, 0}, Token token = T_EOF, std::string val = "");

	/* transformer methods */
	bool binarify();

	/* stack methods */
	void push(Node child);
	Node pop();

	/* debugging */
	void print(size_t indent = 0) const;
};

#endif
