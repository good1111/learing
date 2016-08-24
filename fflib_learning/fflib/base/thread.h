#ifndef _THRED_H_
#define _THREAD_H_

#include <pthread.h>
#include <list>
using namespace std;

namespace ff
{
class thread_t
{
	static void * thread_func(void * p_);
public:
	int create_thread(task_t func,int num=1);
	int join();
private:
	list<pthread_t> m_tid_list;
};

}


#endif
