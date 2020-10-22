#ifdef DLL_EXPORT
#define DLL __declspec(dllexport)
#else
#define DLL __declspec(dllimport)
#endif

// 提供したいクラス
class  dll_class
{
public:
    // 提供するメンバ関数
    virtual void print(void) = 0;
};

// 提供したいクラスの実態を取得させるAPI
extern "C" DLL dll_class * CreateInstance(void);