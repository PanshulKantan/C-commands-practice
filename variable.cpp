#include <iostream>

int main () {

    /*first we declare what inputs are being taken, like integers, etc and assign a variable like x
    and we declare the value of x suppose 5, then the variable will be used as the number assigned
    wherever we use x, the number 5 will be considered*/
   
    int x;
    x=5;
    //or you can use int x = 5;

    double y = 8.7;
    // double is used for decimal numbers

    std::cout << x << std::endl;
    std::cout << y << '\n';
    

    char grades = 'A';
    /*char is used for a single character
    also, when the variable assigned, use ' ' to define them or else it will show error*/

    std::cout << grades << '\n';

    bool choice = true;
    bool answer=false;
    //bool is used for only true or false


    std::string wassup = "Look at my progress bitch";
    /*string is used for a sequence or even a sentece having characters
    also note, for char, we use ' ' , but for string, we will use " " and std::string with the variable */

    std::cout << wassup << std::endl;

    //you can use string between some print statements too
    std::cout << "You were the one who was mocking me right? " << wassup << '\n';


    /*use const command to fix a constant value or else even if you assign a value to a variable, and later put that variable 
    to something else, the value wont be that initial value anymore */

    const char z = 'O';
    std::cout << z << std::endl;

        return 0;
}