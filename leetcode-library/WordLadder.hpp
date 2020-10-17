#ifndef WORD_LADDER_HPP__
#define WORD_LADDER_HPP__

#ifdef LEETCODELIBRARY_EXPORTS
#define LEETCODE_LIBRARY_API __declspec(dllexport)
#else
#define LEETCODE_LIBRARY_API __declspec(dllimport)
#endif

#include "Node.hpp"
#include <vector>
#include <string>
#include <memory>

class LEETCODE_LIBRARY_API WordLadder
{
public:
    WordLadder();
    WordLadder(const WordLadder&) = delete;
    WordLadder& operator=(const WordLadder&) = delete;
    virtual ~WordLadder();

    int ladderLength(const std::string& beginWord, const std::string& endWord, const std::vector<std::string>& wordList);

private:
    std::vector<std::shared_ptr<Node>> createNodes(const std::vector<std::string>& wordList);
    std::vector<std::string> createListOfNextItems(const std::string& word, const std::vector<std::string>& wordList);
    int numberOfDifferentChars(const std::string& str1, const std::string& str2);
    void createGraph(std::vector<std::shared_ptr<Node>>& items, const std::vector<std::string>& wordList);
};

#endif