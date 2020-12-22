NAME= a.out

SRCS= main.cpp

CLASSES_SRCS= FragTrap.cpp ScavTrap.cpp ClapTrap.cpp
CLASSES_HEADERS= $(CLASSES_SRCS:%.cpp=%.hpp)

ALL_SRCS= $(CLASSES_SRCS) $(SRCS)
OBJS= $(ALL_SRCS:%.cpp=%.o)

CXX= clang++
CXXFLAGS= -Wall -Werror -Wextra
INC_DIR=.
$(NAME): all

all: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -I$(INC_DIR) -o $(NAME)

print:
	@echo "SRCS are : " $(ALL_SRCS) " and CLASSES_HEADERS are : " $(CLASSES_HEADERS)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c -I$(INC_DIR) $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
