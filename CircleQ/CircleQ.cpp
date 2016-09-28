#include <iostream>
#include <stdlib.h>
#include "Queue.h"

using namespace std;

int main()
{
	Queue *p= new Queue(4);
	p->IntoQueue(10);
	p->IntoQueue(12);
	p->IntoQueue(13);
	p->IntoQueue(14);
	//p->IntoQueue(15);
	p->QueueTraverse();
	delete p;
	p = NULL;
	system("pause");
	return 0;
}
