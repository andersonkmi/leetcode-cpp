# Note that headers are optional, and do not affect add_library, but they will not
# show up in IDEs unless they are listed in add_library.

# Optionally glob, but only for CMake 3.12 or later:
# file(GLOB HEADER_LIST CONFIGURE_DEPENDS "${ModernCMakeExample_SOURCE_DIR}/include/modern/*.hpp")
set(HEADER_LIST "${LeetcodeCPP_SOURCE_DIR}/include/Node.hpp"
        "${LeetcodeCPP_SOURCE_DIR}/include/Fibonacci.hpp"
        "${LeetcodeCPP_SOURCE_DIR}/include/MultiplyStrings.hpp"
        "${LeetcodeCPP_SOURCE_DIR}/include/ValidParentheses.hpp"
        "${LeetcodeCPP_SOURCE_DIR}/include/WordLadder.hpp"
        "${LeetcodeCPP_SOURCE_DIR}/include/ReverseVowels.hpp"
        "${LeetcodeCPP_SOURCE_DIR}/include/ReverseWords.h")

# Make an automatic library - will be static or dynamic based on user setting
add_library(leetcodecpp_library SHARED ${HEADER_LIST}
        Fibonacci.cpp
        MultiplyStrings.cpp
        Node.cpp
        ValidParentheses.cpp
        WordLadder.cpp
        ReverseWords.cpp
        ReverseVowels.cpp)

# We need this directory, and users of our library will need it too
target_include_directories(leetcodecpp_library PUBLIC ../include)

# This depends on (header only) boost
#target_link_libraries(modern_library PRIVATE Boost::boost)

# All users of this library will need at least C++11
target_compile_features(leetcodecpp_library PUBLIC cxx_std_11)

# IDEs should put the headers in a nice place
source_group(
  TREE "${PROJECT_SOURCE_DIR}/include"
  PREFIX "Header Files"
  FILES ${HEADER_LIST})

