#include <iostream>

void main()
{

	//memcpy 
	int source[] = { 1,2,3,4,5 };
	int destination[5];

	memcpy(destination, source, sizeof(int) * 5);

	for (int i = 0; i < 5; ++i)
	{
		std::cout << destination[i] << std::endl;
	}

	////stdin : Ű���带 ������� �Է� �޴� ��Ʈ��
	////stdout : ����͸� ������� ����ϴ� ��Ʈ��
	////stderr : ����͸� ������� ����ϴ� ��Ʈ��

	////���� ���� ��� �Լ� - putchar, fputc
	//putchar(67); //stdin���� ��Ʈ���� �����Ǿ� ����
	//fputc(67, stdout); //������ ���(�����, ����)���� ����ϴ� ��Ʈ��

	////���� ���� �Է� �Լ� - getchar(), fgetc
	////getchar�� ��¹��۸� �����Ͽ� �Է��� �ް� ���۸� ��� ��� ��(enter���ڱ��� ����)�� �ٽ� �Է��� ���� �� ����
	//int ch = getchar();
	////�׷��� ������ ���� ���ڸ� �Է¹޾Ƶ� ���۷κ��� ������ �ѹ��ھ��� ��µ�
	//putchar(ch);

	////���ڿ� ��� �Լ� - puts, fputs
	////puts�� �ڵ� ������ ������, fputs�� ����ȵ�
	//puts("�ں���"); // stdout���� ��Ʈ�� ������
	//fputs("�ں���", stdout);

	////���ڿ� �Է� �Լ� - gets_s, fgets
	////gets_s - ���๮�ڸ� ���ڷ� �ν����� ����
	////fgets - ���๮�ڱ��� �޾Ƶ���
	//char szName[32] = "";
	//gets_s(szName, 32);
	//puts(szName);

	//fgets(szName, 32, stdin);
	//fputs(szName, stdout);

	//=====================================================
	//���� ��ο� ��� ���
	//���� ��� - ex) C://Documents
	//��� ��� - ex) ../documents
	// ../ - ��ĭ ��
	//������ ��� �� ���ؿ��� ��θ� ã�ư��� ��

	FILE* fp = nullptr; //���ϰ� ���α׷��� �̾��ִ� stream ����
	//���� �����Լ� - fopen_s
	errno_t err=fopen_s(&fp, "../Data.txt", "wt");/*wt: write text*/

	//err=0�̸� ���������� stream ����
	if (err == 0)
	{
		std::cout << "���� ���� ����" << std::endl;
		fputs("���� �Է�!	", fp);
	}
	else
	{
		std::cout << "���� ���� ����" << std::endl;
	}

	//������ stream ����
	fclose(fp);
	fp = nullptr;

	err = fopen_s(&fp, "../Data.txt", "rt");/*rt: read text*/

	char szTest[32] = "";
	if (err == 0)
	{
		fgets(szTest, 32, fp);
		std::cout << "���� ���� ����!" << std::endl;
		fputs(szTest, stdout);
	}
	else
	{
		std::cout << "���� ���� ����!" << std::endl;
	}

	fclose(fp);
	fp = nullptr;

	//txt������ ���ڿ��� ������ �� null���ڴ� �������
	//txt������ ���� �˱����ؼ��� 'eof'�� ����ؾ���

	//==================================================
	//����� ���п� ���� ���
	/*
	w	���� ����				������ ������ ����
	r	�б� ����				������ ������ ����
	a	���ٿ����� ����		������ ������ ����
	w+  �б�/���� ����		������ ������ ����
	r+  �б�/���� ����		������ ������ ����
	a+	�б�, ���ٿ����� ����	������ ������ ����
	*/

	//������ ������ ���� ���
	/*
	t	�ؽ�Ʈ ���
	b	���̳ʸ� ��� - �ַ� ���� Ȥ�� �ؽ��� �����ϴµ� ���, �ؽ�Ʈ ��庸�� ����
	rb- ���̳ʸ� ���� �аڴٴ� �ǹ�
	*/

	// '\0' -null����


	//=================================================
	//���� ���� �Լ�

	//fseek() : ���� �������� ��ġ�� �ű�� �Լ�
	//���� ������ : ���Ͽ��� ������ �о����� ����Ű�� ���� file����ü �ȿ� �����Ǿ� ����
	FILE *fp = nullptr;
	errno_t err = fopen_s(&fp, "../Data.txt", "rt");

	if (err == 0)
	{
		std::cout << "���� ���� ����" << std::endl;
		fseek(fp, 5, SEEK_SET);
		/*SEEK_SET - ������ ó�� ���� ��ġ�� ���� �����ڸ� ��ġ�ϰ���*/
		/*ftell - ������������ ���� ��ġ*/
		/*SEEK_END - ������������ ������ ��ġ-������ ������ ��ġ�� �ƴ϶� ������ ���� ���� ��ġ(EOF)�� �ǹ�!!*/
		//fseek(���� ����ü, �̵��� ����Ʈ�� , ��������)
		int ch=fgetc(fp);
		//�����͸� ����ϸ� ���� �����ڴ� ��ĭ�� �Űܰ�
		fputc(ch,stdout);
	}
}