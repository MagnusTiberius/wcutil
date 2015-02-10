#pragma once

#include <string>
#include <clocale>
#include <cstdlib>
#include <codecvt>
#include <iostream>
#include <vector>
#include <stdarg.h>

class UniWcUtil
{
public:
	UniWcUtil();
	~UniWcUtil();

public:
	wchar_t*	generateUnicodeString(size_t len, size_t start, size_t end);
	void		generate();
	wchar_t*	getGroup(size_t n);
	wchar_t**	getGroups(int n_args, ...);
	void		AddRange(size_t start, size_t end, wchar_t* name);
	wchar_t*	GetRange(size_t index);
	wchar_t*	GetRangeName(size_t index);
	size_t		RangeSize();
private:
	std::vector<wchar_t*> wcset1;
	std::vector<wchar_t*> wcsetkey1;

	typedef struct {
		size_t start;
		size_t end;
		wchar_t* name;
	}                     ugroup_t;

	std::vector<ugroup_t*> ugroup;

};

