//#include <iostream>
//#include <string>
//
//class Base {
//protected:
//	std::string parent_string;
//public:
//	Base() :parent_string("기반") { std::cout << "기반 클래스" << std::endl; }
//	void what() { std::cout << parent_string << std::endl; }
//
//};
//
//class Derived : public Base{
//	std::string child_string;
//
//public:
//	Derived() :child_string("파생"), Base() {
//		std::cout << "파생 클래스" << std::endl;
//		parent_string = "바꾸기";
//	}
//
//	void what() { std::cout << child_string << std::endl; }
//};
//
//int main(){
//	std::cout << " === 기반 클래스 생성 ===" << std::endl;
//	Base p;
//
//	std::cout << " === 파생 클래스 생성 ===" << std::endl;
//	Derived c;
//	
//	return 0;
//}