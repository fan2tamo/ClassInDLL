#include <stdio.h>
#define DLL_EXPORT
#include "dll_class_impl.h"

dll_class_impl::dll_class_impl()
{
	printf("�R���X�g���N�^\n");
}

dll_class_impl::~dll_class_impl()
{
	printf("�f�X�g���N�^\n");
}

void dll_class_impl::print(void)
{
	printf("print()\n");
}

// �N���X�̎��Ԃ��擾����API
DLL dll_class* CreateInstance(void)
{
	return new dll_class_impl;
}