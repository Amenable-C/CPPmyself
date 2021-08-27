//#define _CRT_SECURE_NO_WARNINGS
//
//#ifndef UTILS_H
//#define UTILS_H
//
//#include <iostream>
//#include <string>
//using std::string
//
//namespace MyExcel {
//	class Vector {
//		string* data;
//		int capacity;
//		int length;
//
//	public:
//		Vector(int n = 1);
//		void push_back(string s);
//		string operator[](int i);
//		void remove(int x);
//		int size();
//		~Vector();
//	};
//	class Stack {
//		struct Node {
//			Node* prev;
//			string s;
//
//			Node(Node* prev, string s) : prev(prev), s(s) {}
//		};
//
//		Node* current;
//		Node start;
//
//	public:
//		Stack();
//		void push(string s);
//		string pop();
//		string peek();
//		bool is_empty();
//
//		~Stack();
//	};
//
//	void Vector::push_back(string s) {
//		if (capacity <= length) {
//			string* temp = new string[capacity * 2];
//			for (int i = 0; i < length; i++) {
//				temp[i] = data[i];
//			}
//			delete[] data;
//			data = temp;
//			capacity *= 2;
//		}
//		data[length] = s;
//		length++;
//	}
//
//	string Vector::operator[](int i) { return data[i]; }
//	void Vector::remove(int x) {
//		for (int i = x + 1; i < length; i++) {
//			data[i - 1] = data[i];
//		}
//		length--;
//	}
//
//	int Vector::size() { return length; }
//
//	Vector::~Vector() {
//		if (data) {
//			delete[] data;
//		}
//	}
//
//
//	//
//
//	
//
//	Stack::Stack() : start(NULL, "") { current = &start; }
//	void Stack::push(string s) {
//		Node* n = new Node(current, s);
//		current = n;
//	}
//	string Stack::pop() {
//		if (current == &start) return "";
//
//		string s = current->s;
//		Node* prev = current;
//		current = current->prev;
//
//		delete prev;
//		return s;
//	}
//	string Stack::peek() { return current->s; }
//	bool Stack::is_empty() {
//		if (current == &start) return true;
//		return false;
//	}
//	Stack::~Stack() {
//		while (current != &start) {
//			Node* prev = current;
//			current = current->prev;
//			delete prev;
//		}
//	}
//};