#include "linklist.h"
using namespace std;
int main()
{
	list obj;

	obj.createnode(25);
	obj.createnode(50);
	obj.createnode(90);
	obj.createnode(40);
	obj.createnode(55);
    cout << "\nDisplaying Nodes\n";    
    obj.display();                                         
    cout<<"\n";

	obj.createnode(15);
	cout << "\nDisplaying Nodes after creating a node\n";    
	obj.display();                                         
	cout<<"\n";

	obj.insert_at_first(10);
	cout << "\nDisplaying Nodes after inserting node at start\n";
	obj.display();                                        
	cout<<"\n";

	obj.delete_first();
	cout << "\nDisplaying Nodes after deleting node from start\n";
	obj.display();                                        
	cout<<"\n";

	obj.delete_last();
	cout << "\nDisplaying Nodes after deleting node from last\n";
	obj.display();
	cout<<"\n";

	obj.delete_at_position(4);
	cout << "\nDisplaying Nodes after deleting node at 4th position\n";
	obj.display();
	cout<<"\n";

	obj.insert_at_position(3, 2624);
	cout << "\nDisplaying Nodes after inserting node at 3rd position\n";
	obj.display();
	cout<<"\n";

	system("pause");
	return 0;
}


