/*
	reinterpret_cast
	포인터->포인터, 포인터->변수, 변수->포인터로하는 주로 포인터 관련 연산자.
*/

//#include <iostream>
//
//int main()
//{
//	int* ip = new int{ 10 };
//	long lg = reinterpret_cast<long>(ip);			// int* --> long
//	unsigned int ui = reinterpret_cast<int>(ip);	// int* --> uint
//	printf("ip: %u, lg: %d, ui: %u\n", ip, lg, ui);
//
//	///*int* p = reinterpret_cast<int*>(lg);*/			// long --> int*
//	//int* p1 = reinterpret_cast<int*>(ui);
//	//printf("p: %d, p1: %d\n", *p1);					// 64 비트에서 안됨
//
//	int* p = new int{ 100 };
//	char* pc = reinterpret_cast<char*>(p);			// int* --> char*
//	printf("c: %c\n", *pc);
//
//	//delete p;
//
//	p = reinterpret_cast<int*>(pc);					// char* --> int*
//	printf("p: %d\n", *p);
//
//
//	return 0;
//}