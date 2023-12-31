# Software Design

## The Project
This is a calculator project that makes use of two software design principles, the builder and the visitor. For the sake of brevity, the builder makes necessary sections of a whole and the visitor adds functionality afterwards. Think of it as a subway footlong, custom made per order but at the end you are still getting a sandwich. In doing this we can make only what is necessary without the extra overhead for “in case of” circumstances. This isn’t an exhaustive list of what is included but more like the cliff notes. But I would like to add three things of note when discussing the generalities of the project. First, we compartmentalize to mitigate any fallout or updates. Second, we use Object Oriented Programming for reusability and scalability. The final note, abstract when possible, for ease of organization.
This project does rely heavily on inheritance and compartmentalizing each section of the program. If one thing fails, it should not be at the detriment of the other classes/sections. I also use a class called “Input Cop” to check the user input. Given the nature of the user input, the more safeguards the better. The different functions can be found in the header file but One thing to note is that the conversion function is found in this area instead of the calculator class (the calculator class encompasses most of the bigger functions). The idea behind this is to limit the back and forth between these two classes. The input cop is used to validate the input and perform operations on the input before passing it on. The calculator shouldn’t do more than is necessary for it to perform its job.

And to be transparent, the addition to the nerd easter eggs made me laugh. I hope you enjoy them as well.

## Expression Nodes and the Expression Tree

The expression node is an abstract class, this will make sense in a minute. The expression tree is a friend class to the expression node class, this allows the communication necessary to make changes to the tree. The tree is a stack of expression node pointers. This means if I have child expression nodes, I can address all of them by their parent class. So, let’s review this before moving on; everything else will fall into place. We have a stack structure of expression nodes. That is the nature of the relationship between these two. 
Another thing to note on the expression node, it has a pure virtual function called eval. Pure virtual means it needs to be overwritten in all children classes of expression node. Since all children need a function to evaluate, we can make it necessary from the parent class for them to write one. 

## Binary Expression Nodes and Unary Expression Nodes
Our first example on inheritance in the project. Both nodes inherited from the base Expression Node. The names of these nodes imply the number of operations needed for the evaluate function. The unary still has an evaluate function but if we have a number like 3; we would just return that number. Whereas, if we have an addition node there is another step needed to return a number.

## Binary Expression Children
I won’t include all the children, but I will include addition and subtraction, you can infer the rest. Every binary expression child will assign a pointer to the left expression node pointer and the right expression node pointer. Then every child will call an evaluate function on the left and the right. However which way they get here, we do not care. We just need two numbers, then for addition we add, subtraction we subtract and so on. 

## The Builder
The builder is another abstract class that will act more like a template than anything else. So, to keep things clear we will just move to the actual builder that is used. The Expression Tree Builder is where things get interesting. We have our tree we can push nodes to, our nodes that can evaluate and now we have a builder. There are some things we need to address. In the previous section I noted we don’t care how we get the left and right expression node pointers. Now we need to square that away. We will again look at the addition to lay out the plan. If we pop a node from the tree, we can assign a pointer to that expression node (regardless of which child it is), then do it again for the two necessary for a binary expression to be created. We can then pass these two pointers as parameters in the addition node to set the left and right pointers. Following that we can push this back to the stack. Hypothetically the stack went from a node of 22 and a node of 33, to a node of “22 + 33”. Now if an evaluate function is called, we just get the answer of 55. Regardless of the number of nodes, everything will be solved with a single evaluate function.

## The Calculator

Given the layout of the nodes, the tree, and the builder, we’re missing one thing to tie together. We can either tie this all together in the main file, or we can use object oriented programming to tie it all up. I used the calculator to tie everything in and give the user an interface. The calculator takes the input and creates the input cop needed to check it. After it is validated and converted it is assigned a builder to build everything needed. After that we can use the builder to evaluate its own hard work.

## The Visitor

Skipping to the highlight reel of the visitor, we are going to visit the addition expression node. Let’s say we forgot to add a very specific functionality to the node. Instead of us updating the whole program, we can add the visitor abstract class, the concrete visitor and update the visited class (the addition expression node). This visitor class takes visit a particular class, where you can pass the class type as a parameter in the visit. In this case, we visit an addition node, so we pass the addition node as a parameter. If we passed a subtraction node, it would not accept and would do nothing. The addition node has an accept function that calls the visitor to visit this class, in visiting we add the functionality we needed to add. 


SideNote: I did not create these design principles. I accept I do not know everything. If I have made an error, inform me so I can learn. Thank you, I wish you the best.
