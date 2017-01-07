cmake_minimum_required(VERSION 3.6)
project(Logic)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        ArtBook.cpp
        ArtBook.h
        Bill.cpp
        Bill.h
        Book.cpp
        Book.h
        Date.cpp
        Date.h
        Librarian.cpp
        Librarian.h
        Library.cpp
        Library.h
        main.cpp
        Member.cpp
        Member.h
        Novel.cpp
        Novel.h
        Research.cpp
        Research.h
        ScienceBook.cpp
        ScienceBook.h
        Transaction.cpp
        Transaction.h
        Writer.cpp
        Writer.h)

add_executable(Logic ${SOURCE_FILES})