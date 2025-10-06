CXX := clang++
CXXFLAGS := -std=c++20 -stdlib=libc++ -g -Iinclude
TARGET := main
BUILD_DIR := build

# 모든 하위 디렉토리의 cpp 파일 검색
SRC := $(shell find src -name "*.cpp")

# cpp → obj 변환 (build/ 디렉토리에 생성)
OBJ := $(SRC:src/%.cpp=$(BUILD_DIR)/%.o)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(TARGET)

# build 디렉토리 생성 및 개별 cpp → obj 규칙
$(BUILD_DIR)/%.o: src/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR) $(TARGET)
