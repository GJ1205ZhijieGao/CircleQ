#ifndef _QUEUE_H_
#define _QUEUE_H_

class Queue
{
public:
	Queue(int QueueCapac);  //cestablish a Queue
	virtual ~Queue();       //kill a Queue    
	void ClearQueue();      //cleara Queue
	bool QueueEmpty() const;//Is it an empty Queue or not
	bool QueueFull() const;
	int QueueLength();//const?//how many elements in the queue
	bool IntoQueue(int element); //insert an element into a Queue
	bool OutQueue(int &element); //crap out an element from a Queue
	void QueueTraverse();
	void showelement();
private:
	int * m_Queue;     //Pointer of Group of Queue
	int m_QueueLen;   //Length of Queue
	int m_QueueCapac; //Queue Capacity 
	int m_head;        //the position of the head of the queue
	int m_tail;       // the position of the tail of the queue
};

#endif