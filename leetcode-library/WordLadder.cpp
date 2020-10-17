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

void WordLadder::createGraph(std::vector<std::shared_ptr<Node>>& items, std::vector<std::string>& wordList)
{
    for (std::vector<std::shared_ptr<Node>>::iterator it = items.begin(); it != items.end(); it++) {
        std::vector<std::string> nextItems = createListOfNextItems((*it)->getWord(), wordList);        
    }
}

int WordLadder::numberOfDifferentChars(const std::string& str1, const std::string& str2)
{
    std::vector<char> chars1(str1.c_str(), str1.c_str() + str1.size());
    std::vector<char> chars2(str2.c_str(), str2.c_str() + str2.size());

    int size = chars1.size();
    int total = 0;
    for (int index = 0; index < size; index++) {
        if (chars1[index] != chars2[index]) {
            total++;
        }
    }

    return total;
}

std::vector<std::string> WordLadder::createListOfNextItems(const std::string& word, const std::vector<std::string>& wordList)
{
    std::vector<std::string> results;
    for (std::vector<std::string>::const_iterator it = wordList.begin(); it != wordList.end(); it++) {
        if (numberOfDifferentChars(word, *it) == 1) {
            results.push_back(*it);
        }
    }
    return results;
}