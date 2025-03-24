/*
	상속관계에서 이니셜라이즈 사용하기
*/
//#include <iostream>
//
//class Car {				// 기본 자동차 클래스
//private:
//	int gasolineGauge;	// 남은 가솔린 양 저장 변수
//public:
//	// 생성자 (초기 가솔린 양 설정)
//	Car(int ag) : gasolineGauge(ag){}		// 콜론 초기화
//	int getGasGauge() { return gasolineGauge; }	// 가솔린 잔량 반환 함수
//};
//// 하이브리드 자동차 클래스(Car를 상속)
//class HybridCar : public Car {
//private:
//	int electricGauge;	// 남은 전기량 저장 변수
//public:
//	// 생성자(가솔린과 전기량을 초기화)
//	HybridCar(int ag, int ae) : Car(ag), electricGauge(ae) {}
//	int getElecGauge() { return electricGauge; }	// 전기 잔량 반환 
//};
//// 하이브리드 워터카 클래스(하이브리드카를 상속)
//class HybridWaterCar : public HybridCar {
//	int waterGuage;	// 남은 워터양 저장변수
//public:
//	// 생성자(가솔린, 전기, 워터량 초기화)
//	HybridWaterCar(int ag, int ae, int aw) : HybridCar(ag, ae), waterGuage(aw){}
//	// 모든 연료량 출력
//	void showGauge() {
//		std::cout << "잔여 가솔린: " << getElecGauge() << std::endl;
//		std::cout << "잔여 전기량: " << getElecGauge() << std::endl;
//		std::cout << "잔여 워터량: " << waterGuage << std::endl;
//	}
//};
//int main()
//{
//	HybridWaterCar hwc(10, 20, 30);
//	hwc.showGauge();
//
//	return 0;
//}