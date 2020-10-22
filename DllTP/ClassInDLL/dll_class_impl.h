#include "dll_export_def.h"

class dll_class_impl : public dll_class
{
public:
	dll_class_impl();
	~dll_class_impl();
	void print(void);
};