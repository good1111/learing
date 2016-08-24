#ifndef _TASK_QUEUE_I_
#define _IASK_QUEUE_I_

#include <list>
#include <vector>
using namespace std;
namespace ff
{
	typedef void(*task_func_t)(void *);
	class task_impl_i
	{
	public:
		virtual ~task_impl_i(){}
		virtual void run()=0;
		virtual task_impl_i *fork()=0;
	};
	class task_impl_t:public task_impl_i
	{
	};
	struct task_t
	{
	};
	class task_queue_i
	{
	public:
		typedef list<task_t> task_list_t;
	public:
		virtual ~task_queue_i(){}
	};

}

#endif
