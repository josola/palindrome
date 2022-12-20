TARGET_EXEC := test
BUILD_DIR := ./build/src
SRC_DIRS := ./src ../src
SRCS := $(shell find ./src -name '*.cpp' && find ../src -name '*.cpp')
SRCS := $(filter-out ../src/main.cpp, $(SRCS))
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)
DEPS := $(OBJS:.o=.d)
INC_DIRS := $(shell find $(SRC_DIRS) -type d)
INC_FLAGS := $(addprefix -I,$(INC_DIRS))
CXXFLAGS := $(INC_FLAGS) -g3 -std=c++17 -MMD -MP

./build/$(TARGET_EXEC): $(OBJS)
	$(CXX) $(OBJS) -o $@ $(LDFLAGS)
	
$(BUILD_DIR)/%.c.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CXXFLAGS) -c $< -o $@
	
$(BUILD_DIR)/%.cpp.o: %.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@
	
palindrome: $(BUILD_DIR)/$(TARGET_EXEC)

.PHONY: clean
clean:
	rm -r ./build

-include $(DEPS)
