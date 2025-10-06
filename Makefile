CXX := clang++
CXXFLAGS := -std=c++20 -stdlib=libc++ -g -Iinclude
TARGET := main

# 현재 폴더 안의 모든 cpp 파일 자동 검색
SRC := $(wildcard *.cpp)

# cpp → obj 변환
OBJ := $(SRC:.cpp=.o)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(TARGET)

# 개별 cpp → obj 규칙
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
