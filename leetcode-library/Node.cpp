#include "Node.hpp"

Node::Node(const std::string& word) : word_(word), is_visited_(false)
{
}

Node::~Node()
{
}

std::string Node::getWord()
{
    return word_;
}

std::string Node::getWord() const
{
    return word_;
}

bool Node::isVisited()
{
    return is_visited_;
}

bool Node::isVisited() const
{
    return is_visited_;
}