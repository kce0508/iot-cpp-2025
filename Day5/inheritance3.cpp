/*
	��Ӱ��迡�� �̴ϼȶ����� ����ϱ�
*/
//#include <iostream>
//
//class Car {				// �⺻ �ڵ��� Ŭ����
//private:
//	int gasolineGauge;	// ���� ���ָ� �� ���� ����
//public:
//	// ������ (�ʱ� ���ָ� �� ����)
//	Car(int ag) : gasolineGauge(ag){}		// �ݷ� �ʱ�ȭ
//	int getGasGauge() { return gasolineGauge; }	// ���ָ� �ܷ� ��ȯ �Լ�
//};
//// ���̺긮�� �ڵ��� Ŭ����(Car�� ���)
//class HybridCar : public Car {
//private:
//	int electricGauge;	// ���� ���ⷮ ���� ����
//public:
//	// ������(���ָ��� ���ⷮ�� �ʱ�ȭ)
//	HybridCar(int ag, int ae) : Car(ag), electricGauge(ae) {}
//	int getElecGauge() { return electricGauge; }	// ���� �ܷ� ��ȯ 
//};
//// ���̺긮�� ����ī Ŭ����(���̺긮��ī�� ���)
//class HybridWaterCar : public HybridCar {
//	int waterGuage;	// ���� ���;� ���庯��
//public:
//	// ������(���ָ�, ����, ���ͷ� �ʱ�ȭ)
//	HybridWaterCar(int ag, int ae, int aw) : HybridCar(ag, ae), waterGuage(aw){}
//	// ��� ���ᷮ ���
//	void showGauge() {
//		std::cout << "�ܿ� ���ָ�: " << getElecGauge() << std::endl;
//		std::cout << "�ܿ� ���ⷮ: " << getElecGauge() << std::endl;
//		std::cout << "�ܿ� ���ͷ�: " << waterGuage << std::endl;
//	}
//};
//int main()
//{
//	HybridWaterCar hwc(10, 20, 30);
//	hwc.showGauge();
//
//	return 0;
//}