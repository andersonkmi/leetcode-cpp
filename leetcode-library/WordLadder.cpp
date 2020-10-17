#include "WordLadder.hpp"

WordLadder::WordLadder()
{
    // empty constructor
}

WordLadder::~WordLadder()
{
    // Nothing
}

int WordLadder::ladderLength(const std::string& beginWord, const std::string& endWord, const std::vector<std::string>& wordList)
{
    return 0;
}

std::vector<Node*>* WordLadder::createNodes(const std::vector<std::string>& wordList)
{
    std::vector<Node*>* items = new std::vector<Node*>();
    for (std::vector<std::string>::const_iterator it = wordList.begin(); it != wordList.end(); it++) {
        std::string value = *it;
        Node* node = new Node(value);
        items->push_back(node);
    }
    
    return items;
}