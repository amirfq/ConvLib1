#pragma once

#include "iostream"

#ifdef _DRVMULTIINSTAL_EXPORT_
#define APICALLSTYLE __declspec(dllexport)
#else
#define APICALLSTYLE __declspec(dllimport)
#endif

#ifndef TRACE_LOG
#define TRACE_LOG(x) printf("%s\n", x)
#endif

namespace DrvMultiInstal
{
	class CDrvInstallFunc
	{
	public:
		CDrvInstallFunc();
		~CDrvInstallFunc();

		static APICALLSTYLE bool AddDriver();
	private:
	};

	CDrvInstallFunc::CDrvInstallFunc()
	{
	}

	CDrvInstallFunc::~CDrvInstallFunc()
	{
	}
}