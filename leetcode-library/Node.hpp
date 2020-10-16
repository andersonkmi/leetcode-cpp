#ifndef NODE_HPP__
#define NODE_HPP__

#include <string>

class Node
{
public:
    Node() = delete;
    Node(const std::string&);
    Node(const Node&) = delete;
    Node& operator=(const Node&) = delete;
    virtual ~Node();

    std::string getWord();
    std::string getWord() const;
    bool isVisited();
    bool isVisited() const;
private:
    std::string word_;
    bool is_visited_;
};

#endif
