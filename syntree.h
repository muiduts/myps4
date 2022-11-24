#ifndef _SYNTAX_H
#define _SYNTAX_H

#include <string>
#include <list>

/* A node in the syntax tree. The syntax-tree is a left-child-right-sibling-
 * tree. */
struct ComplexNode {
    std::string code;
    std::list <ComplexNode*> children;
    ComplexNode(const char*);
    ComplexNode(std::string);
    void append_child(ComplexNode*);
    void concat_children(std::string, std::string, std::string);
};

#endif
