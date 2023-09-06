//
// Created by Niko McNiel on 9/5/23.
//
#include <iostream>
#include <fstream>
#include <string>

#include "UnsortedList.cpp"

using namespace std;

int main(){
    UnsortedList list;

    list.AddItem(5);
    list.AddItem(13);
    list.AddItem(25);
    list.AddItem(30);

    cout << "List length: " << list.GetLength() << endl;
    cout << "List contains 25: " << list.Contains(25) << endl;

    list.DeleteItem(13);

    list.AddItem(35);
    list.AddItem(40);

    cout << "Is list full: " << list.IsFull() << endl;
    list.AddItem(45);
    cout << "List length: " << list.GetLength() << endl;

    for (int i = 0; i < list.GetLength(); i++)
    {
        cout << "Items" << list.GetNextItem() << endl;
    }
}

