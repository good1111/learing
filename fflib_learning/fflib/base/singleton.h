#ifndef _SINGLETON_H_
#define _SINGLETON_H_

#include <stdlib.h>
#include <pthread.h>

template <class T>
class singleton_t
{
public:
	static T & instance()
	{
		pthread_once(&m_ponce,&singleton_t::init);
		return *m_instance;
	}
	static T* instance_ptr()
	{
		return m_instance;
	}
private:
	static void init()
	{}
	static void destory()
	{}
private:
	static T* volatile m_instance;
	static pthread_once_t m_ponce;
};

template<class T>
T* volatile singleton_t<T>::m_instance=NULL;

template<typename T>
pthread_once_t singleton_t<T>::m_ponce=PTHEAD_ONCE_INIT;


#endif
