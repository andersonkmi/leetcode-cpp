#include "Node.hpp"

Node::Node(const std::string& word) : word_(word), is_visited_(false), nodes_()
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

bool Node::operator==(const Node& rhs)
{
    return this->word_ == rhs.word_;
}

void Node::addNode(const Node& node)
{
    nodes_.push_back(std::cref(node));
}