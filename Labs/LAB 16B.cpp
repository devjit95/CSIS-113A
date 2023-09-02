#include <iostream>
#include <string>
using namespace std;
struct Node
{
	string Food;
	int Calories;
	Node* Next;
};
class LinkList
{
private:
	Node* Head;
public:
	LinkList();
	void add_item(string food, int calories);
	void list_items();
};
int main()
{
	LinkList names;
	names.add_item("pizza",800);
	names.add_item("burger",600);
	names.add_item("fries",350);
	names.add_item("soda",150);
	names.add_item("pie", 450);
	names.list_items();
	return 0;
}
LinkList::LinkList()
{
	//Head = NULL;
	this->Head = NULL;
}
void LinkList::add_item(string food, int calories)
{
	if (Head == NULL)
	{
		Head = new Node;
		Head->Food = food;
		Head->Calories = calories;
		Head->Next = NULL;
	}
	else
	{
		Node* p = Head;
		while (p->Next != NULL)
			p = p->Next;
		//create the new node
		Node* n = new Node;
		n->Food = food;
		n->Calories = calories;
		n->Next = NULL;
		// Assign the next pointer to the new node
		p->Next = n;
	}
}
void LinkList::list_items()
{
	Node* p = Head;
	while (p != NULL)
	{
		cout << (p->Food) <<"  "<< (p->Calories) << endl;
		p = p->Next;
	}
}
