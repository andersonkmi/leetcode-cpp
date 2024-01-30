# Leetcode coding exercises in C++

## Purpose
This project has been created to save the exercises I am doing using C++ programming language.

This is also an opportunity to review the following topics:

* STL (Standard template library)
* Shared pointers
* Lambda functions in C++

The code created is not optimal, since the purpose is to use the exercises to apply some of the concepts from the language and review some data structures:

* Stacks
* Graph and graph traversal
* Strings

## Exercises developed so far
* [Valid parentheses](https://leetcode.com/problems/valid-parentheses/)
* [Multiply strings](https://leetcode.com/problems/multiply-strings/)
* [Word ladder](https://leetcode.com/problems/word-ladder/)

## Build and test

### Build
```
$ cmake -S . -B build
$ cmake --build build
```

### Test
```
$ cmake --build build --target test
```

### Generate docs
```
$ cmake --build build --target docs
```