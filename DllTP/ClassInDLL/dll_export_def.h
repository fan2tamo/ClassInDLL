#ifdef DLL_EXPORT
#define DLL __declspec(dllexport)
#else
#define DLL __declspec(dllimport)
#endif

// �񋟂������N���X
class  dll_class
{
public:
    // �񋟂��郁���o�֐�
    virtual void print(void) = 0;
};

// �񋟂������N���X�̎��Ԃ��擾������API
extern "C" DLL dll_class * CreateInstance(void);