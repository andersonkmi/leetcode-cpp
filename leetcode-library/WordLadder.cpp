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

std::vector<std::shared_ptr<Node>> WordLadder::createNodes(const std::vector<std::string>& wordList)
{
    std::vector<std::shared_ptr<Node>> items;
    for (std::vector<std::string>::const_iterator it = wordList.begin(); it != wordList.end(); it++) {
        std::string value = *it;
        std::shared_ptr<Node> node = std::make_shared<Node>(value);
        items.push_back(node);
    }
    
    return items;
}