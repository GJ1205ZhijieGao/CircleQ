#include<iostream>
#include<stdlib.h>
#include "Queue.h"

using namespace std;

Queue::Queue(int QueueCapac)
{
	m_QueueCapac = QueueCapac;
	m_head = 0;
	m_tail = 0;
	m_QueueLen = 0;
	m_Queue = new int[QueueCapac];
}

Queue::~Queue()
{
	delete[] m_Queue;
	m_Queue = NULL;
}

void Queue::ClearQueue()
{
	m_head = 0;
	m_tail = 0;
	m_QueueLen = 0;
}

bool Queue::QueueEmpty() const
{
	if (m_QueueLen==0)
	{return true; }
	else
	{
		return false;
	}
}

int Queue::QueueLength()
{
	return m_QueueLen;
}

bool Queue::QueueFull() const
{
	if (m_QueueLen == m_QueueCapac)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Queue::IntoQueue(int element)
{
	if (QueueFull())
	{
		return false;
	}
	else
	{
		m_Queue[m_tail] = element;
		m_tail=m_tail+1;
		m_tail = m_tail%m_QueueCapac;
		m_QueueLen++;
		return true;
	}
}
bool Queue::OutQueue(int &element)// msut be a reference
{
	if (QueueEmpty())
	{
		return false;
	}
	else
	{
		element = m_Queue[m_head];
		m_head++;
		m_head = m_head%m_QueueCapac;
		m_QueueLen--;
		return true;
	}
}
void Queue::QueueTraverse()
{
	int i;
	for (i = m_head; i < m_QueueLen+m_head; i++)
	{
		cout << m_Queue[i%m_QueueCapac] << endl;
	}

}

void Queue::showelement()
{
	cout << m_head << endl;
	cout << m_tail << endl;
	cout << m_Queue << endl;
	cout << m_QueueCapac << endl;
	cout << m_QueueLen << endl;
}