cc=g++
CFLAGS= -g -Wall

final: main.o Add_Expr_Node.o Sub_Expr_Node.o Mult_Expr_Node.o Div_Expr_Node.o Mod_Expr_Node.o Binary_Expr_Node.o Number_Node.o Unary_Expr_Node.o Expr_Tree.o Expr_Tree_Builder.o InputCop.o Binary_Visitor.o Calculator.o
		$(cc) $(CFLAGS) main.o Add_Expr_Node.o Sub_Expr_Node.o Mult_Expr_Node.o Div_Expr_Node.o Mod_Expr_Node.o Binary_Expr_Node.o Number_Node.o Unary_Expr_Node.o Expr_Tree.o Expr_Tree_Builder.o InputCop.o Binary_Visitor.o Calculator.o -o assignment4

main.o: Add_Expr_Node.o Sub_Expr_Node.o Mult_Expr_Node.o Div_Expr_Node.o Mod_Expr_Node.o Number_Node.o Binary_Expr_Node.o Unary_Expr_Node.o Expr_Tree.o Expr_Tree_Builder.o InputCop.o Binary_Visitor.o Calculator.o
		$(cc) $(CFLAGS) -c main.cpp

Calculator.o: Add_Expr_Node.o Sub_Expr_Node.o Mult_Expr_Node.o Div_Expr_Node.o Mod_Expr_Node.o Number_Node.o Binary_Expr_Node.o Unary_Expr_Node.o Expr_Tree.o Expr_Tree_Builder.o InputCop.o Binary_Visitor.o
		$(cc) $(CFLAGS) -c Calculator.cpp

InputCop.o: InputCop.h
		$(cc) $(CFLAGS) -c InputCop.cpp

Binary_Visitor.o: Binary_Visitor.h 
		$(cc) $(CFLAGS) -c Binary_Visitor.cpp

Add_Expr_Node.o: Add_Expr_Node.h Binary_Expr_Node.o 
		$(cc) $(CFLAGS) -c Add_Expr_Node.cpp Binary_Expr_Node.cpp

Sub_Expr_Node.o: Sub_Expr_Node.h Binary_Expr_Node.o 
		$(cc) $(CFLAGS) -c Sub_Expr_Node.cpp Binary_Expr_Node.cpp

Mult_Expr_Node.o: Mult_Expr_Node.h Binary_Expr_Node.o 
		$(cc) $(CFLAGS) -c Mult_Expr_Node.cpp Binary_Expr_Node.cpp

Div_Expr_Node.o: Div_Expr_Node.h Binary_Expr_Node.o 
		$(cc) $(CFLAGS) -c Div_Expr_Node.cpp Binary_Expr_Node.cpp

Mod_Expr_Node.o: Mod_Expr_Node.h Binary_Expr_Node.o 
		$(cc) $(CFLAGS) -c Mod_Expr_Node.cpp Binary_Expr_Node.cpp

Binary_Expr_Node.o: Binary_Expr_Node.h Expr_Node.h
		$(cc) $(CFLAGS) -c Binary_Expr_Node.cpp

Number_Node.o: Number_Node.h Unary_Expr_Node.o
		$(cc) $(CFLAGS) -c Number_Node.cpp Unary_Expr_Node.cpp

Unary_Expr_Node.o: Unary_Expr_Node.h Expr_Node.h
		$(cc) $(CFLAGS) -c Unary_Expr_Node.cpp

Expr_Tree.o: Expr_Tree.h Expr_Node.h
		$(cc) $(CFLAGS) -c Expr_Tree.cpp

Expr_Tree_Builder.o: Expr_Tree_Builder.h Expr_Node.h Add_Expr_Node.cpp Sub_Expr_Node.cpp Binary_Expr_Node.cpp Mult_Expr_Node.cpp Div_Expr_Node.cpp Mod_Expr_Node.cpp Number_Node.cpp Unary_Expr_Node.cpp Expr_Tree.cpp 
		$(cc) $(CFLAGS) -c Expr_Tree_Builder.cpp

clean:
		rm -f *.o
			rm final

run: assignment4
		./final
