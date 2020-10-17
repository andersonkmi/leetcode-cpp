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

class LEETCODE_LIBRARY_API WordLadder
{
public:
    WordLadder();
    WordLadder(const WordLadder&) = delete;
    WordLadder& operator=(const WordLadder&) = delete;
    virtual ~WordLadder();

    int ladderLength(const std::string& beginWord, const std::string& endWord, const std::vector<std::string>& wordList);
};

#endif