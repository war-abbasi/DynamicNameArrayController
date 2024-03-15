#include "list.h"
#include <iostream>
using namespace std;


void List::find(string itemName)
{
    bool found = false;
    for(int i = 0; i < noOfElement && found == false; i++)
    {
        if (names[i] == itemName)
        {
            cout << "Item '" << itemName << "' found at position " << i << ". " << endl;
            found=true;
        }
    }
    if (found == false)
        cout << "Item '" << itemName << "' not found in the list. " << endl;

}


string List:: getValue(int index)
{
    if (index >= 0 && index < noOfElement)
    {
        return names[index];
    }
    else
    {
        return "Invalid index";
    }
}


void List:: insert(string newItem)
{

    if (noOfElement < size)
    {
        int i = noOfElement - 1;
        while (i >= 0 && names[i] > newItem)
        {
            names[i + 1] = names[i];
            i--;
        }
        names[i + 1] = newItem;
        noOfElement++;

        cout << "Item inserted.  " << endl;

        Display();

    }
    else
        cout << "No space available in the array. " << endl;

}

void List:: deleteFirst()
{
    if (noOfElement > 0)
    {
        for (int i = 0; i < noOfElement - 1; ++i)
        {
            names[i] = names[i + 1];
        }
        noOfElement--;
        Display();
    }
    else
    {
        cout << "List is empty. Cannot delete. " << endl;
    }

}

void List:: deleteLast()
{
    if (noOfElement > 0)
    {
        noOfElement--;
        cout<<"Item is removed." << endl;
        Display();
    }
    else
    {
        cout << "List is empty. Cannot delete. " << endl;
    }

}

void List:: deleteAny(string value)
{
    bool found = false;
    for (int i = 0; i < noOfElement && found == false ; ++i)
    {
        if (names[i] == value)
        {
            for (int j = i; j < noOfElement - 1; ++j)
            {
                names[i] = names[i + 1];
            }
            found = true;
            noOfElement--;
            cout << "Item '" << value << "' deleted. " << endl;
            Display();
        }
    }
    if (found == false)
    {
        cout << "Item '" << value << "' not found in the list. " << endl;
    }
}

void List:: update(int index, string newValue)
{
    if (index >= 0 && index < noOfElement)
    {
        names[index] = newValue;
        cout << "Item at position " << index << " updated. " << endl;
        Display();
    }
    else
    {
        cout << "Invalid index. Cannot update. " << endl;
    }
}
void List:: Display()
{
    cout << "Sorted Names List: " << endl;
    for (int i = 0; i < noOfElement; ++i)
    {
        cout << names[i] << endl;
    }
}
