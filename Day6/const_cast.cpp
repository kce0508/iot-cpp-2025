/*
	const_cast: ������� �����ϰų� �߰��ϴ� �� ���Ǵ� Ÿ�� ĳ���� ������
*/
//#include <iostream>
//
//int main()
//{
//	int num = 10;
//	std::cout << ++num << std::endl;	// num�� 1 ���� ��Ų �� ���
//	
//	const int num2 = 10;
//	std::cout << num2 << std::endl;		// const������ ������ �� ����
//
//	/*int* np = const_cast<int*>(&num2);
//	*np = *np + 1;
//	std::cout << "num: " << num2 << std::endl;*/
//
//	const char str[] = "orange";		// ���ڿ� ���ͷ��� const char �迭�� ����(�����Ϸ��� ���ڿ� ���ͷ��� ������ �� ���� ��ȣ)
//	char* cp = const_cast<char*>(str);	// const char*�� char*�� ��ȯ(������ �ڵ�)
//	cp[0] = 'O';						// ù��° ���� 'o'�� 'O'�� �����Ϸ��� �õ�
//	std::cout << str << std::endl;		
//
//	return 0;
//}