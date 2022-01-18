#include <iostream>
#include "Stack.h"
#include "StackException.h"

//int main() {
//    try {
//        Stack<char> stack(1);
//        stack.push('a');
//        stack.pop();
//        stack.pop();
//
//        stack.print();
//    }catch(StackException e){
//        std::cout << e.what() << std::endl;
//    }
//}

//int main() {
//    try{
//    Stack<char> stack(1);
//    stack.push('a');
//    stack.push('b');
//
//    stack.print();
//    }catch(StackException e){
//        std::cout << e.what() << std::endl;
//    }
//}
//
//int main(){
//    try{
//    Stack<int> stack(1);
//    stack.push(1);
//    stack.pop();
//    stack.push(2);
//
//    stack.print();
//    stack.pop();
//    }catch(StackException e){
//        std::cout << e.what() << std::endl;
//    }
//}

//
int main(){
    try{
    Stack<int> stack(2);
    stack.push(1);
    stack.push(2);
    stack.pop();
    stack.pop();
    stack.push(3);

    stack.print();
    }catch(StackException e){
        std::cout << e.what() << std::endl;
    }
}