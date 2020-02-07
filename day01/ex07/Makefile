NAME = replace


SRCS = main.cpp

OBJS = $(SRCS:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJS) $(INC)
	clang++ $(OBJS) -I . -o $(NAME)

%.o : %.cpp
	clang++ -c $< -I .

clean :
	rm $(OBJS)

fclean : clean
	rm $(NAME)
	rm *.replace

re : fclean all