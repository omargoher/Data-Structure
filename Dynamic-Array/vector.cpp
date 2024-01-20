#include <bits/stdc++.h>
using namespace std;

class vector
{
private:
    int size = 0;
    int capacity = 0;
    int *arr = nullptr;

public:
    //the constructor
    vector(int size) : size(size)
    {
        if (size < 1)
            size = 1;
        capacity = size + 10;
        arr = new int[capacity]{};
    }

    //set value in index
    void set(int val, int idx)
    {
        assert(idx >= 0 && idx < size);
        arr[idx] = val;
    }

    //get value from index
    int get(int idx)
    {
        assert(idx >= 0 && idx < size);
        return arr[idx];
    }

    //add item from back
    void push_back(int val)
    {
        if (capacity == size)
        {
            capacity *= 2;
            int *new_arr = new int[capacity]{};
            for (int i = 0; i < size; i++)
                new_arr[i] = arr[i];

            delete[] arr;
            arr = new_arr;
        }
        arr[size++] = val;
    }

    //delete item from back
    void pop_back()
    {
        --size;
        arr[size] = 0;
    }

    //search about a item 
    int find_item(int val)
    {
        for (int i = 0; i < size; i++)
            if (arr[i] == val)
                return i;
        return -1; // not found
    }

    //add item at index
    void insert(int val, int idx)
    {
        if (capacity == size)
        {
            capacity *= 2;
            int *new_arr = new int[capacity]{};
            for (int i = 0; i < size; i++)
                new_arr[i] = arr[i];

            delete[] arr;
            arr = new_arr;
        }
        for (int i = size; i > idx; --i)
        {
            arr[i] = arr[i - 1];
        }
        arr[idx] = val;
        ++size;
    }

    //delete item from index
    int delete_at(int idx)
    {
        int delete_item = arr[idx];
        for (int i = idx; i < size-1; ++i)
            arr[i] = arr[i+1];
        --size;
        return delete_item;
    }

    //print all items 
    void print()
    {
        for (int i = 0; i < size; ++i)
            cout << arr[i] << "\n";
    }
  
};
