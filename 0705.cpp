#include<iostream>
using namespace std;

void main()
{
	int a=1, b=2;

	//int���� a�� b�� ���ϸ� �Ҽ����� ���� ��������� float�� ���� fAver�� ����ص� �Ҽ����� ����
	//������ ����ȯ �� - ��ǻ�Ͱ� �˾Ƽ� �ڷ����� �°� ����ȯ �����ϴ� ��
	float fAver = a + b;
	cout << fAver;

	//������ ����ȯ �� - ����ڰ� �ڷ����� ���� �����϶� �����ϴ� ��
	//�̷��� �ѹ��� ���൵ �Ҽ����� �ȳ���- �̹� int�� ���� ������ ������ float����ȯ���� ��ȯ�߱� ������
	fAver = float(a + b / 3);
	//�Ҽ����� ������ �Ϸ���
	fAver = float(a) + float(b);	
	cout << fAver;

	//***����ȯ���� �켱������ ����
	//�������� ���
	//�켱������ ������ �����ͼս����� �ּ�ȭ�ϱ� ���� �� ( long long�� �������̶� �Ǽ����� ������ �����ͼս��� �Ͼ) ����, �Ǽ���->������������ ������
	//long double-> dobule -> float -> long long -> long, int -> short -> char , bool 
	
	//�켱������ �������, ������ ���� �����ʹ� ������ �ڷ����������� ©���� �� 

	//============================================================

	//***�� 3�Ǻ��� ���� �� �ٲٱ�
	int iA = 10, iB = 20;
	//XOR����
	iA ^= iB;
	iB ^= iA;
	iA ^= iB;

	//============================================================

	//16���� : 10���� ���ڸ� 16���� ���� ��������
	//���ھտ� 0X�� ���̸� ��ǻ�Ͱ� 16������ �޾Ƶ���
	//int a= 0X5A
	//8���� :  10���� ���ڸ� 8���� ���� ��������
	//���ھտ� 0�� ���̸� ��ǻ�Ͱ� 8������ �޾Ƶ���
	//int a = 0132

	
	//10������ 8~16����
	//10���� n������ ����� �� 8^0���ϱ� ���ڸ� ����, 8^1���ϱ� ���ڸ� ����.. �̰͸� ����ϸ�� 
	//16����
	/*
	0X08
	0X09
	0XA
	0XB
	0XC
	0XD
	0XE
	0XF
	0X10
	0X11
	0X12
	0X13
	0X14

	====
	8����
	0010
	0011
	0012
	0013
	0014
	0015
	0016
	0017
	0020
	0021
	0022
	0023
	0024



	====



	*/





	

}