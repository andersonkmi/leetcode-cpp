#ifndef LEETCODE_NODE_HPP_
#define LEETCODE_NODE_HPP_

#include <string>
#include <vector>
#include <memory>

using namespace std;

class Node
{
public:
    Node() = delete;
    explicit Node(const std::string&);
    Node(const Node&) = delete;
    Node& operator=(const Node&) = delete;
    bool operator==(const Node&);
    virtual ~Node();

    std::string getWord();
    [[nodiscard]] std::string getWord() const;
    bool isVisited();
    [[nodiscard]] bool isVisited() const;
    void addNode(std::shared_ptr<Node>& node);
    void markVisited();

    std::vector<std::shared_ptr<Node>> getNodes();
private:
    std::string word_;
    bool is_visited_;
    std::vector<std::shared_ptr<Node>> nodes_;
};

#endif
