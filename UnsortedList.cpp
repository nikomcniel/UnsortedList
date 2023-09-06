#include "UnsortedList.h"

UnsortedList::UnsortedList() {
    length = 0;
    currentPos = 0;

    //Runtime: 0(n)
    //for (in i = 0; i < MAX_ITEMS; i++)
    // {
    //      arr[i] = 0;
    // }
}

bool UnsortedList::IsFull() const {
    return GetLength() == MAX_ITEMS;
}

int UnsortedList::GetLength() const; {
    return length;
}

bool UnsortedList::Contains(int someItem) {
    for (int i = 0; i < GetLength(); i++)
    {
        if(arr[i] == someItem){
            return true;
        }
    }
    return false;
}

void UnsortedList::AddItem(int someItem){
    if(isFull()){
        return;
    }

    arr[length] = someItem;
    length++; //Bookkeeping
}

void UnsortedList::DeleteItem(int someItem) {
    for (int i = 0; i < GetLength(); i++) {
        if (arr[i] == someItem) {
            // Swap the last element with the current one
            arr[i] = arr[length - 1];
            length--;
            return;
        }
    }
}

void UnsortedList::MakeEmpty() {
    length = 0;
}

int UnsortedList::GetNextItem() {
    int currItem + arr[currentPos];
    currentPos++;
    return currItem;
}

void UnsortedList::ResetIterator() {
    currentPos = 0;
}
