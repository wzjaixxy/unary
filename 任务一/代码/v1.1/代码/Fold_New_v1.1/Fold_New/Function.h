#pragma once

#include "Frame.h"
#include "Find.h"
#include "Filter.h"
#include "XmlRead.h"
#include "Compare.h"
#include "Copy.h"
#include "Log.h"

#define	NOT_FOUND_FILE 1
#define COPY_FAIL 2
#define SUCESS 0
#define NO_FOLD 2

class Function
{
public:
	Function(void);
	~Function(void);
	int Function::function(CString sFolderPath,CString dFolderPath);
	void Function::setLastError(CString lastErrInfo);
	CString Function::getLastError();

	Log log;
	CString lastError;
};
