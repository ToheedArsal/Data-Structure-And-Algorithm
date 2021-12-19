#include"myStack.h"
int main()
{
	myStack<int> object(100);
	object.pop();
	object.Display();
	object.push(1);
	object.push(2);
	object.push(3);
	object.push(4);
	object.push(5);
	object.Display();

	cout << "Top Element Is :" << object.Top() << endl;
	cout << "Current Size Is :" << object.Size() << endl;
	system("pause");
}