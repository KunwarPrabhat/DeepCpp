 // Print the address and value of a variable using a pointer
 #include<iostream>

 int main() {
    int var = 10;
    int* ptr = &var;
    std::cout<<"value of the variable : "<<* ptr<<std::endl<<" address : "<<ptr<<std::endl;
    std::cin.get();
 }