//#include <iostream>
//#include <string>
//
//class Base {
//protected:
//	std::string parent_string;
//public:
//	Base() :parent_string("���") { std::cout << "��� Ŭ����" << std::endl; }
//	void what() { std::cout << parent_string << std::endl; }
//
//};
//
//class Derived : public Base{
//	std::string child_string;
//
//public:
//	Derived() :child_string("�Ļ�"), Base() {
//		std::cout << "�Ļ� Ŭ����" << std::endl;
//		parent_string = "�ٲٱ�";
//	}
//
//	void what() { std::cout << child_string << std::endl; }
//};
//
//int main(){
//	std::cout << " === ��� Ŭ���� ���� ===" << std::endl;
//	Base p;
//
//	std::cout << " === �Ļ� Ŭ���� ���� ===" << std::endl;
//	Derived c;
//	
//	return 0;
//}