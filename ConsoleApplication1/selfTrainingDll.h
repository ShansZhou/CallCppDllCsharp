#pragma once
#ifdef DLL_TRAINING_API
#else                                                                            
#define DLL_TRAINING_API _declspec(dllimport) //������ʱ��ͷ�ļ����μӱ��룬����.cpp�ļ����ȶ��壬��ͷ�ļ�����������������ⲿʹ��ʱ��Ϊdllexport�������ڲ�����ʱ����Ϊdllimport
#endif  

class DLL_TRAINING_API arithmetic_operation              //��Ҫ�������õ��ࣨ���ࣩ
{
public:
	double Add(double a, double b);
	double Sub(double a, double b);
	double Multi(double a, double b);
	double Div(double a, double b);
};

int DLL_TRAINING_API export333();