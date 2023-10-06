cmake_minimum_required(VERSION 3.23)
project(SimpleClassShowcase)

set(CMAKE_CXX_STANDARD 17)

add_executable(SimpleClassShowcase main.cpp Good.cpp Good.h GoodsCategory.cpp GoodsCategory.h Print.cpp Print.h)
