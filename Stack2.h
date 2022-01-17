#ifndef ASSIGNMENT11SECOND_STACK_H
#define ASSIGNMENT11SECOND_STACK_H
#include "StackException.h"
#include <iostream>
using namespace std;
template<typename T>
class Stack {
public:
    Stack(int sz) {
        top = 0;
        size = sz;
        s = new T[size];
        file = "main.cpp";
    };                    //객체 초기화 및 필요한 자원을 획득하시오
    ~Stack() noexcept {
        if(s)
            delete[] s;
    };             //사용한 자원을 해제하시오
    // 복사 생성자와 복사 대입 연산자를 삭제하시오
    void push(T c) {
        if(size == top)
            throw StackException("Stack is full!", file, top);
        s[top++] = c ;
    }    //예외 발생 시 StackException 던지시오
    T pop() {
        if(top == 0)
            throw StackException("Stack is empty!", file, top);
        T r = s[--top]; return r ;
    } //예외 발생 시 StackException 던지시오
    void print() const {
        for(int i = 0; i < top; i++)
            cout << s[i];
        cout << endl;
    };     //스택의 모든 원소를 '\n' 으로 구분하여 출력하시오
private:
    int size = 0;   int top = 0;
    T* s = nullptr;
    const char *file;
} ;
#endif //ASSIGNMENT11SECOND_STACK_H
