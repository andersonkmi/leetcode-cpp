#include "WordLadder.hpp"
#include <list>
#include <algorithm>

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
    std::vector<std::string>::const_iterator iterator = std::find(wordList.cbegin(), wordList.cend(), endWord);
    if (iterator == wordList.cend()) {
        return 0;
    }
   
    std::vector<std::shared_ptr<Node>> nodes = createNodes(wordList);
    createGraph(nodes, wordList);

    std::vector<std::string> startingNodes = createListOfNextItems(beginWord, wordList);
    std::string startStr = startingNodes[0];
    std::vector<std::shared_ptr<Node>>::iterator result = std::find_if(nodes.begin(), nodes.end(), [startStr](const std::shared_ptr<Node>& m) -> bool { return m->getWord() == startStr; });
    std::shared_ptr<Node> startingNodePtr = *result;

    std::list<std::shared_ptr<Node>> nextNodesToVisit;
    nextNodesToVisit.push_back(startingNodePtr);

    int steps = 0;
    while (!nextNodesToVisit.empty()) {
        std::shared_ptr<Node> currentNode = nextNodesToVisit.front();
        nextNodesToVisit.pop_front();

        if (currentNode->isVisited()) {
            continue;
        }

        if (currentNode->getWord() == endWord) {
            break;
        }
        currentNode->markVisited();
        std::vector<std::shared_ptr<Node>> otherNodes = currentNode->getNodes();
        for (std::vector<std::shared_ptr<Node>>::iterator it = otherNodes.begin(); it != otherNodes.end(); it++) {
            nextNodesToVisit.push_back(*it);
        }

        steps++;
    }
    return steps;
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

void WordLadder::createGraph(std::vector<std::shared_ptr<Node>>& items, const std::vector<std::string>& wordList)
{
    for (std::vector<std::shared_ptr<Node>>::iterator it = items.begin(); it != items.end(); it++) {
        std::vector<std::string> nextItems = createListOfNextItems((*it)->getWord(), wordList);        
        for (std::vector<std::string>::iterator wordIterator = nextItems.begin(); wordIterator != nextItems.end(); wordIterator++) {
            std::string currentItem = *wordIterator;
            std::vector<std::shared_ptr<Node>>::iterator result = std::find_if(items.begin(), items.end(), [currentItem](const std::shared_ptr<Node>& m) -> bool { return m->getWord() == currentItem; });

            if (result != items.end()) {
                (*it)->addNode(*result);
            }
        }
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