#include <iostream>
using namespace std;
class List
{
    string *names;
    int size;
    int noOfElement;
public:
    List()
    {
        cout<<"Enter size of array: " << endl;
        cin>>size ;
        names = new string[size];
        noOfElement=0;
    }
    ~List()
    {
        delete[] names;
    }
    void find(string itemName);
    string getValue(int index);
    void insert(string newItem);
    void deleteFirst();
    void deleteLast();
    void deleteAny(string value);
    void update(int index, string newValue);
    void Display();
};