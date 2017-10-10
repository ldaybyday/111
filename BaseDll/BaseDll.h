#ifdef BASEDLL_EXPORTS
#define BASEDLL_API __declspec(dllexport)
#else
#define BASEDLL_API __declspec(dllimport)
#endif


class BASEDLL_API CBaseDll 
{
public:
	CBaseDll(void);

	void func();

public:
	int a;
	int c;
	int b;
};

