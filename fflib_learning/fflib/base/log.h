#ifndef _FF_LOG_H_
#define _FF_LOG_H_

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <set>
#include <vector>

using namespace std;

namespace ff
{
class str_format_t
{
	struct fmt_type_t
	{
		fmt_type_t():tpye('\0'),min_len(0),fill_char(' ')
		{}
		void clear()
		{
			type='\0';
			min_len=0;
			fill_char=' ';
		}
		char type;
		unsigned int min_len;
		char fill_char;
	};
public:
	str_format_t(const char * fmt_="");
	virtual ~str_format_t();

	template <typename T>
	void append(T content_)
	{

	}
private:
protected:
	const char* m_fmt;
	unsigned int cur_format_index;
	unsigned int m_fmt_len;
	fmt_type_t m_fmt_type;
	string m_result;
	stringstream m_strstream;
	string m_num_buff;
}
}

#endif
