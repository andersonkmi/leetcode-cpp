#ifndef WORD_LADDER_HPP__
#define WORD_LADDER_HPP__

#include <Node.hpp>
#include <vector>
#include <string>
#include <memory>

class WordLadder
{
public:
    WordLadder();
    WordLadder(const WordLadder&) = delete;
    WordLadder& operator=(const WordLadder&) = delete;
    virtual ~WordLadder();

    static int ladderLength(const std::string& beginWord, const std::string& endWord, const std::vector<std::string>& wordList);

private:
    static std::vector<std::shared_ptr<Node>> createNodes(const std::vector<std::string>& wordList);
    static std::vector<std::string> createListOfNextItems(const std::string& word, const std::vector<std::string>& wordList);
    static int numberOfDifferentChars(const std::string& str1, const std::string& str2);
    static void createGraph(std::vector<std::shared_ptr<Node>>& items, const std::vector<std::string>& wordList);
};

#endif