#include "StringMapSum.h"
#include <iostream>
#include <map>
#include <ComprehandVirtual.h>
#include <stdio.h>

void testTemplateMap()
{
    std::cout << "hello world my comming" << std::endl;

    std::map<int, StringMapSum<int>>  m_data;

    m_data[1].update("1", 1);
    m_data[1].update("2", 1);
    m_data[1].update("3", 1);

    std::cout << "out put dats: " << m_data[1].sum();
    getchar();


    return;
}

void justAddress()
{
    //%p ���ǵ�ַѰַ����64λ 8�ֽ� 32λ 4�ֽڡ�  ��%x �Ǵ���int�͵Ķ���64λ�������������
    //int a = 10;
    //printf("a��ַ: %p = %d = 0x%x. ռ�� %d���ֽ�\n", &ba, &ba, &ba, sizeof(&a));
    //std::cout << "a��ַ:" << static_cast<void *>(&a);
}

typedef void(*Func)(void);

int main()
{
    JP::Base *ba = new JP::Base;

    //std::cout << "�麯����ַ: " << (int *)(&ba) << std::endl;
    //printf("�麯����ַ: %p\n", &ba);

    //Func pFun = (Func)*((int *)(*(int *)(&ba)));
    //pFun = (Func)*((int *)*ba);

    //pFun();
    ba->vFunc1();

    JP::Base *bap = new JP::Base;

    bap->vFunc1();

    getchar();
    return 0;
}