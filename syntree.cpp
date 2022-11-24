#include <cstdarg>
#include "syntree.h"

using namespace std;

ComplexNode::ComplexNode(const char *code) : code(code) { }

ComplexNode::ComplexNode(string code) : code(code) { }

void
ComplexNode::append_child(ComplexNode *node)
{
    this->children.push_back(node);
}

void
ComplexNode::concat_children(string first_separator, string separator, string terminator)
{
    int islast;
    this->code = "";
    for(auto node = this->children.begin(); node != this->children.end(); node++) {
        this->code += (*node)->code;
        node++;
        islast = (node == this->children.end());
        node--;
        if(!islast) {
            if(node == this->children.begin())
                this->code += first_separator;
            else
                this->code += separator;
        }
    }
    this->code += terminator;
}
