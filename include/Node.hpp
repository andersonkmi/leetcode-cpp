#ifndef NODE_HPP__
#define NODE_HPP__

#include <string>
#include <vector>
#include <functional>
#include <memory>

using namespace std;

class Node
{
public:
    Node() = delete;
    Node(const std::string&);
    Node(const Node&) = delete;
    Node& operator=(const Node&) = delete;
    bool operator==(const Node&);
    virtual ~Node();

    std::string getWord();
    std::string getWord() const;
    bool isVisited();
    bool isVisited() const;
    void addNode(std::shared_ptr<Node>& node);
    void markVisited();

    std::vector<std::shared_ptr<Node>> getNodes();
private:
    std::string word_;
    bool is_visited_;
    std::vector<std::shared_ptr<Node>> nodes_;
};

#endif
