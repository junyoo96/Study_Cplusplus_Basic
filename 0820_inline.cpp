#include "stdafx.h"

inline int Add(int _a, int _b)
{
	return _a + _b;
}

void main()
{
	//inline �Լ�
	//��ũ�� �Լ��� ����ϰ� ���ԵǴ� ����
	//�Ϲ��Լ��� ���� ȣ��ӵ��� ����
	//inline �Լ��� ���� �����ϴ°� �Ұ���(���������ص� ��ǻ�Ͱ� �緮���� ���°��̰���)
	//����� Ŭ���� ���ο� ���ǵ� �Լ��� inline������ �ڵ����� �߰���
	std::cout << Add(10, 20) << std::endl;

	//inlineȭ�� Ǯ���� ���
	//1. �Լ��� �ּҰ��� �䱸�ϴ� ���
	//2. ����Լ����� ȣ���ϴ� ���
}