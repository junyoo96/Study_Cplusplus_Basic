#include "stdafx.h"

class Monster
{
public:
	//virtual ���� : �ڽ�Ŭ������ �������̵��� �Լ��� ȣ����
	virtual void Attack()
	{
		std::cout << "Monster�� ����" << std::endl;
	}
};

class Zergling : public Monster
{
public:
	//�θ�Ŭ������ virtual�Լ��� �������̵��ϸ� �˾Ƽ� �ڵ����� virtual �Լ��� ���ǵ�
	//������, �򰥸��� ������ �ڽ�Ŭ�������� ���ø� ����
	virtual void Attack()
	{
		std::cout << "Zergling�� ����" << std::endl;
	}
};

void main()
{
	//��ü ������
	/*
	��ü�� �ּҸ� �����ϴ� ������ ����
	C++������ �θ��� ��ü ������ �������� �θ� ��,���������� ��ӹ޴� ��ü�� �ּҸ� ����
	�� �θ�Ÿ������ �ڽ��� ���� ����� �� ����!!
	��ü ������ ����� �⺻������ �����Ϸ��� ��ü ������ Ÿ������ �Ǵ��� 
	*/


	//=============================================

	//�Լ� �������̵� ( ������ ) 
	/*
	�Լ� �������̵��̶�� ���� ��� ����, �θ��� ����Լ��� �̸��� ���� ����, ����Ÿ���� �Ϻ��ϰ� �Ȱ��� �Լ��� �ڽĿ��Ե� ���� �ϴ� ��
	�Լ� �����ε�- C++ ����
	�Լ� �������̵� - ��ӿ��� ����ϴ� ����
	*/
	/*
	Monster* monster=new Zergling;
	monster->Attack(); //�θ� Render�Լ� ȣ��, �����Ϸ��� ��ü ������ Ÿ������ �Ǵ��ϱ� ������

	*/

	//==============================================
	
	//Virtual ����
	Monster* monster = new Zergling;
	monster->Attack(); //�ڽ�Ŭ������ �Լ� ȣ��

	//Virtual���� ���� �� �θ�Ŭ���� �Լ� ȣ���ϰ� ������ // �ٵ� ����..?
	monster->Monster::Attack();

	//���� 
	//1.��� ����ϸ鼭 textrpg����(���ΰ�,����,����)

}