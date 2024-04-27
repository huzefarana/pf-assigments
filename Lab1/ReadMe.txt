Problem Statement:
    You are a software developer, and you have to develop a program in C++ that acts as a simple calculator for performing
    basic arithmetic operations using switch statements. Your name and student id must be displayed before a menu of options.
    No need to prompt student id and name from user, you can just hard-code it. 

You have to perform the following operations in the program.
1.	Addition
2.	Subtraction
3.	Multiplication
4.	Division
5.	Exit

Step by step procedure:

1.	First, you need to hard-code your VU student id along with your name, and it should be displayed at the top as shown in
    the output screenshot given below.

2.	Then you have to create a menu, that will ask the user, what operation they want to perform? Like addition, subtraction,
    multiplication, or division, or if they want to quit already? (See output screenshot for the menu).

3.	After selecting the operation, your code should work in such a way that the user can add, subtract, multiply or divide
    as many numbers as they want to. For example, your code should ask the user about how many numbers do you want to add?
    If a user mentions 5, then it should be able to add all of them. Same for the other operations as well.

4.	In case of division, if a user wants to divide three numbers altogether, then first number entered will be considered
    as a numerator and second number would be considered as denominator, now in the second iteration, the result of first
    two numbers division will be considered as numerator and the third number which a user is going to enter, will be
    considered as denominator. For example: Let’s say, a user entered 3 numbers for division, those numbers are 9, 3 & 3.
    In the first iteration, 9 will be considered as numerator while 3 will be a denominator i.e. 9/3, after dividing those
    numbers i.e. 9/3=3 we got 3 as a result. Now in the second iteration, the result 3 would be considered as a
    numerator (that we got in the first iteration) and our last entered number 3 would be considered as a denominator,
    from which we got a result 3/3=1, you can also check the output screenshot for how it should be displayed. 

5.	Also, in case of division, you should handle floating point numbers as well. And your code should not let the user divide
    any number by zero. 

6.	In case of subtraction, you should handle negative numbers as well. For example, if a user enters
    1,2 & 4 (as shown in the output screenshot below) then it should work in such a way, that in the first
    iteration 1-2= -1 would be executed and in the second iteration the result of first iteration
    i.e. -1 – third entered number i.e. 4, should be executed i.e. -1-4 = -5
    
7.	Ensure that the program executes at least once and continues to execute until the user chooses to exit the program.

Note: printf and scanf is not allowed. 
