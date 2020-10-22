#include <stdio.h>
#define DLL_EXPORT
#include "dll_class_impl.h"

dll_class_impl::dll_class_impl()
{
	printf("コンストラクタ\n");
}

dll_class_impl::~dll_class_impl()
{
	printf("デストラクタ\n");
}

void dll_class_impl::print(void)
{
	printf("print()\n");
}

// クラスの実態を取得するAPI
DLL dll_class* CreateInstance(void)
{
	return new dll_class_impl;
}